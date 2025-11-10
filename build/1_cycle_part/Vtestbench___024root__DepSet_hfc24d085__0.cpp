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
                                       "src/1_cycle_part/testbench.sv", 
                                       36);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       38);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       40);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       42);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       44);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       46);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       48);
    vlSelf->testbench__DOT__R_DATA = 0xdeadbeefcafecafeULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       50);
    vlSelf->testbench__DOT__R_DATA = 0xcafecafedeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       52);
    vlSelf->testbench__DOT__R_DATA = 0x1212343456567878ULL;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       54);
    VL_FINISH_MT("src/1_cycle_part/testbench.sv", 55, "");
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

extern const VlUnpacked<VlWide<3>/*71:0*/, 256> Vtestbench__ConstPool__TABLE_hb57d27b5_0;

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ testbench__DOT__dut_decoder__DOT____VdfgTmp_ha17c29d3__0;
    testbench__DOT__dut_decoder__DOT____VdfgTmp_ha17c29d3__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("time=%3#, data=%x, encoded=%x, decoded=%x, error_detected=%b, double_error=%b, single_error=%b\n",
                  64,VL_TIME_UNITED_Q(1),64,vlSelf->testbench__DOT__R_DATA,
                  72,vlSelf->testbench__DOT__E_DATA.data(),
                  72,vlSelf->testbench__DOT__D_DATA.data(),
                  1,(IData)(vlSelf->testbench__DOT__ERR),
                  1,vlSelf->testbench__DOT__D_ERR,1,
                  (IData)(vlSelf->testbench__DOT__S_ERR));
    }
    vlSelf->testbench__DOT__N_DATA[0U] = (vlSelf->testbench__DOT__E_DATA[0U] 
                                          ^ vlSelf->testbench__DOT__NOISE[0U]);
    vlSelf->testbench__DOT__N_DATA[1U] = (vlSelf->testbench__DOT__E_DATA[1U] 
                                          ^ vlSelf->testbench__DOT__NOISE[1U]);
    vlSelf->testbench__DOT__N_DATA[2U] = (vlSelf->testbench__DOT__E_DATA[2U] 
                                          ^ vlSelf->testbench__DOT__NOISE[2U]);
    testbench__DOT__dut_decoder__DOT____VdfgTmp_ha17c29d3__0 
        = (1U & VL_REDXOR_4((7U & vlSelf->testbench__DOT__N_DATA[0U])));
    vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME 
        = ((0x80U & (((VL_REDXOR_32((0x8099264U & vlSelf->testbench__DOT__N_DATA[0U])) 
                       ^ VL_REDXOR_32((0xff0738c8U 
                                       & vlSelf->testbench__DOT__N_DATA[1U]))) 
                      ^ (vlSelf->testbench__DOT__N_DATA[2U] 
                         >> 7U)) << 7U)) | ((0x40U 
                                             & (((VL_REDXOR_32(
                                                               (0xc8080992U 
                                                                & vlSelf->testbench__DOT__N_DATA[0U])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               (0x64ff0738U 
                                                                & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                 ^ 
                                                 (vlSelf->testbench__DOT__N_DATA[2U] 
                                                  >> 6U)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & (((VL_REDXOR_32(
                                                                  (0x38c80809U 
                                                                   & vlSelf->testbench__DOT__N_DATA[0U])) 
                                                     ^ 
                                                     VL_REDXOR_32(
                                                                  (0x9264ff07U 
                                                                   & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                    ^ 
                                                    (vlSelf->testbench__DOT__N_DATA[2U] 
                                                     >> 5U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & (((VL_REDXOR_32(
                                                                     (0x738c808U 
                                                                      & vlSelf->testbench__DOT__N_DATA[0U])) 
                                                        ^ 
                                                        VL_REDXOR_32(
                                                                     (0x99264ffU 
                                                                      & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                       ^ 
                                                       (vlSelf->testbench__DOT__N_DATA[2U] 
                                                        >> 4U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & (((VL_REDXOR_32(
                                                                        (0xff0738c8U 
                                                                         & vlSelf->testbench__DOT__N_DATA[0U])) 
                                                           ^ 
                                                           VL_REDXOR_32(
                                                                        (0x8099264U 
                                                                         & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                          ^ 
                                                          (vlSelf->testbench__DOT__N_DATA[2U] 
                                                           >> 3U)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & (((VL_REDXOR_32(
                                                                           (0x64ff0738U 
                                                                            & vlSelf->testbench__DOT__N_DATA[0U])) 
                                                              ^ 
                                                              VL_REDXOR_32(
                                                                           (0xc8080992U 
                                                                            & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                             ^ 
                                                             (vlSelf->testbench__DOT__N_DATA[2U] 
                                                              >> 2U)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & (((((IData)(testbench__DOT__dut_decoder__DOT____VdfgTmp_ha17c29d3__0) 
                                                                  ^ 
                                                                  VL_REDXOR_32(
                                                                               (0x9264ff00U 
                                                                                & vlSelf->testbench__DOT__N_DATA[0U]))) 
                                                                 ^ 
                                                                 VL_REDXOR_32(
                                                                              (0x38c80809U 
                                                                               & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                                ^ 
                                                                (vlSelf->testbench__DOT__N_DATA[2U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((((IData)(testbench__DOT__dut_decoder__DOT____VdfgTmp_ha17c29d3__0) 
                                                                   ^ 
                                                                   VL_REDXOR_32(
                                                                                (0x99264f8U 
                                                                                & vlSelf->testbench__DOT__N_DATA[0U]))) 
                                                                  ^ 
                                                                  VL_REDXOR_32(
                                                                               (0x738c808U 
                                                                                & vlSelf->testbench__DOT__N_DATA[1U]))) 
                                                                 ^ 
                                                                 vlSelf->testbench__DOT__N_DATA[2U])))))))));
    __Vtableidx1 = vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME;
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[0U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][0U];
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[1U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][1U];
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[2U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][2U];
}
