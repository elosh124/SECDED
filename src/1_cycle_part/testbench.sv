module testbench;
  logic CLK;
  logic [63:0] R_DATA;
  logic [71:0] E_DATA;
  logic [71:0] D_DATA;
  logic        ERR;
  logic        D_ERR;
  logic        S_ERR;
  logic [71:0] N_DATA;
  logic [71:0] NOISE;

  string dumpfile_name;

  secded_encoder dut_encoder (
    .CLK (CLK),
    .R_DATA (R_DATA),
    .E_DATA (E_DATA)
  );

  secded_decoder dut_decoder (
    .CLK (CLK),
    .E_DATA (N_DATA),
    .D_DATA (D_DATA),
    .ERR (ERR),
    .D_ERR (D_ERR),
    .S_ERR (S_ERR)
  );

  initial begin
    CLK = 1'b0;
    forever #5 CLK = ~CLK;
  end

  initial begin
    $monitor("time=%3d, data=%h, encoded=%h, decoded=%h, error_detected=%b, double_error=%b, single_error=%b", $time, R_DATA, E_DATA, D_DATA, ERR, D_ERR, S_ERR);
    #2
    R_DATA = 64'hDEAD_BEEF_CAFE_CAFE;
    #10
    R_DATA = 64'hCAFE_CAFE_DEAD_BEEF;
    #10
    R_DATA = 64'h1212_3434_5656_7878;
    #10
    R_DATA = 64'hDEAD_BEEF_CAFE_CAFE;
    #10
    R_DATA = 64'hCAFE_CAFE_DEAD_BEEF;
    #10
    R_DATA = 64'h1212_3434_5656_7878;
    #10
    R_DATA = 64'hDEAD_BEEF_CAFE_CAFE;
    #10
    R_DATA = 64'hCAFE_CAFE_DEAD_BEEF;
    #10
    R_DATA = 64'h1212_3434_5656_7878;
    #50
    $finish;
  end

  initial begin
    NOISE = 72'h00_0000_0000_0000_0000; // NO ERR
    #47
    NOISE = 72'h00_0000_0000_0010_0000; // SEC
    #30
    NOISE = 72'h00_0110_0000_0000_0000; // DED
  end

  assign N_DATA = E_DATA ^ NOISE;

  initial begin
    if ($value$plusargs("dumpfile=%s", dumpfile_name))
      $dumpfile(dumpfile_name);
    else
      $dumpfile("generic_waveform.vcd");
    $dumpvars(0, testbench);
  end
endmodule

