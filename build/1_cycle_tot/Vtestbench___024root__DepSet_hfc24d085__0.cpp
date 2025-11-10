// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       36);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       38);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       40);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       42);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       44);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       46);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       48);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       50);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       52);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "src/1_cycle_tot/testbench.sv", 
                                       54);
    VL_FINISH_MT("src/1_cycle_tot/testbench.sv", 55, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->testbench__DOT__CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__CLK__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__CLK__0 
        = vlSelf->testbench__DOT__CLK;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        __Vtemp_1[0U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[0U]);
        __Vtemp_1[1U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[1U]);
        __Vtemp_1[2U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[2U]);
        VL_WRITEF("time=%3#, data=%x, encoded=%x, decoded=%x, error_detected=%b, double_error=%b, single_error=%b\n",
                  64,VL_TIME_UNITED_Q(1),64,vlSelf->testbench__DOT__R_DATA,
                  72,vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER.data(),
                  72,__Vtemp_1.data(),1,(0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)),
                  1,((~ VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                     & (0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))),
                  1,((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                     & VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)));
    }
}
