// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtestbench___024unit;


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtestbench___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__CLK;
    CData/*0:0*/ testbench__DOT__ERR;
    CData/*0:0*/ testbench__DOT__D_ERR;
    CData/*0:0*/ testbench__DOT__S_ERR;
    CData/*7:0*/ testbench__DOT__dut_decoder__DOT__SYNDROME;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    VlWide<3>/*71:0*/ testbench__DOT__E_DATA;
    VlWide<3>/*71:0*/ testbench__DOT__D_DATA;
    VlWide<3>/*71:0*/ testbench__DOT__N_DATA;
    VlWide<3>/*71:0*/ testbench__DOT__NOISE;
    VlWide<3>/*71:0*/ testbench__DOT__dut_encoder__DOT__BUFFER;
    VlWide<3>/*71:0*/ testbench__DOT__dut_decoder__DOT__MASK;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ testbench__DOT__R_DATA;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string testbench__DOT__dumpfile_name;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
