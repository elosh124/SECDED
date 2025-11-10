module secded_encoder (
  input  logic        CLK,
  input  logic [63:0] R_DATA,
  output logic [71:0] E_DATA
);

  logic [71:0] BUFFER;

  always @(posedge CLK) begin
    BUFFER [63:0] <= R_DATA;
    E_DATA        <= BUFFER;
  
    // C1
    BUFFER[64] <= R_DATA[0] ^ R_DATA[1] ^ R_DATA[2] ^ R_DATA[3] ^ R_DATA[4] ^ R_DATA[5] ^ R_DATA[6] ^
      R_DATA[7] ^ R_DATA[10] ^ R_DATA[13] ^ R_DATA[14] ^ R_DATA[17] ^ R_DATA[20] ^ R_DATA[23] ^
		  R_DATA[24] ^ R_DATA[27] ^ R_DATA[35] ^ R_DATA[43] ^ R_DATA[46] ^ R_DATA[47] ^ R_DATA[51] ^
		  R_DATA[52] ^ R_DATA[53] ^ R_DATA[56] ^ R_DATA[57] ^ R_DATA[58];
    // C2
    BUFFER[65] <= R_DATA[0] ^ R_DATA[1] ^ R_DATA[2] ^ R_DATA[8] ^ R_DATA[9] ^ R_DATA[10] ^ R_DATA[11] ^
  	  R_DATA[12] ^ R_DATA[13] ^ R_DATA[14] ^ R_DATA[15] ^ R_DATA[18] ^ R_DATA[21] ^ R_DATA[22] ^
  		R_DATA[25] ^ R_DATA[28] ^ R_DATA[31] ^ R_DATA[32] ^ R_DATA[35] ^ R_DATA[43] ^ R_DATA[51] ^
  	  R_DATA[54] ^ R_DATA[55] ^ R_DATA[59] ^ R_DATA[60] ^ R_DATA[61];
  
    // C3
    BUFFER[66] <= R_DATA[3] ^ R_DATA[4] ^ R_DATA[5] ^ R_DATA[8] ^ R_DATA[9] ^ R_DATA[10] ^ R_DATA[16] ^
  	  R_DATA[17] ^ R_DATA[18] ^ R_DATA[19] ^ R_DATA[20] ^ R_DATA[21] ^ R_DATA[22] ^ R_DATA[23] ^
  		R_DATA[26] ^ R_DATA[29] ^ R_DATA[30] ^ R_DATA[33] ^ R_DATA[36] ^ R_DATA[39] ^ R_DATA[40] ^
  	  R_DATA[43] ^ R_DATA[51] ^ R_DATA[59] ^ R_DATA[62] ^ R_DATA[63];
  
    // C4
    BUFFER[67] <= R_DATA[3] ^ R_DATA[6] ^ R_DATA[7] ^ R_DATA[11] ^ R_DATA[12] ^ R_DATA[13] ^ R_DATA[16] ^ 
  		R_DATA[17] ^ R_DATA[18] ^ R_DATA[24] ^ R_DATA[25] ^ R_DATA[26] ^ R_DATA[27] ^ R_DATA[28] ^ 
  	  R_DATA[29] ^ R_DATA[30] ^ R_DATA[31] ^ R_DATA[34] ^ R_DATA[37] ^ R_DATA[38] ^ R_DATA[41] ^ 
  	  R_DATA[44] ^ R_DATA[47] ^ R_DATA[48] ^ R_DATA[51] ^ R_DATA[59];
  
    // C5
    BUFFER[68] <= R_DATA[3] ^ R_DATA[11] ^ R_DATA[14] ^ R_DATA[15] ^ R_DATA[19] ^ R_DATA[20] ^ R_DATA[21] ^
  	  R_DATA[24] ^ R_DATA[25] ^ R_DATA[26] ^ R_DATA[32] ^ R_DATA[33] ^ R_DATA[34] ^ R_DATA[35] ^
  		R_DATA[36] ^ R_DATA[37] ^ R_DATA[38] ^ R_DATA[39] ^ R_DATA[42] ^ R_DATA[45] ^ R_DATA[46] ^
  	  R_DATA[49] ^ R_DATA[52] ^ R_DATA[55] ^ R_DATA[56] ^ R_DATA[59];
  
    // C6
    BUFFER[69] <= R_DATA[0] ^ R_DATA[3] ^ R_DATA[11] ^ R_DATA[19] ^ R_DATA[22] ^ R_DATA[23] ^ R_DATA[27] ^
  	  R_DATA[28] ^ R_DATA[29] ^ R_DATA[32] ^ R_DATA[33] ^ R_DATA[34] ^ R_DATA[40] ^ R_DATA[41] ^
  		R_DATA[42] ^ R_DATA[43] ^ R_DATA[44] ^ R_DATA[45] ^ R_DATA[46] ^ R_DATA[47] ^ R_DATA[50] ^
  		R_DATA[53] ^ R_DATA[54] ^ R_DATA[57] ^ R_DATA[60] ^ R_DATA[63];

    // C7
    BUFFER[70] <= R_DATA[1] ^ R_DATA[4] ^ R_DATA[7] ^ R_DATA[8] ^ R_DATA[11] ^ R_DATA[19] ^ R_DATA[27] ^
      R_DATA[30] ^ R_DATA[31] ^ R_DATA[35] ^ R_DATA[36] ^ R_DATA[37] ^ R_DATA[40] ^ R_DATA[41] ^
      R_DATA[42] ^ R_DATA[48] ^ R_DATA[49] ^ R_DATA[50] ^ R_DATA[51] ^ R_DATA[52] ^ R_DATA[53] ^
      R_DATA[54] ^ R_DATA[55] ^ R_DATA[58] ^ R_DATA[61] ^ R_DATA[62];

    // C8
    BUFFER[71] <= R_DATA[2] ^ R_DATA[5] ^ R_DATA[6] ^ R_DATA[9] ^ R_DATA[12] ^ R_DATA[15] ^ R_DATA[16] ^
      R_DATA[19] ^ R_DATA[27] ^ R_DATA[35] ^ R_DATA[38] ^ R_DATA[39] ^ R_DATA[43] ^ R_DATA[44] ^
     	R_DATA[45] ^ R_DATA[48] ^ R_DATA[49] ^ R_DATA[50] ^ R_DATA[56] ^ R_DATA[57] ^ R_DATA[58] ^
      R_DATA[59] ^ R_DATA[60] ^ R_DATA[61] ^ R_DATA[62] ^ R_DATA[63];
  end 
endmodule
