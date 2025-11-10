// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x653d2573U;
    __Vtemp_1[1U] = 0x7066696cU;
    __Vtemp_1[2U] = 0x64756dU;
    if (VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                             vlSelf->testbench__DOT__dumpfile_name)) {
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NN(vlSelf->testbench__DOT__dumpfile_name));
    } else {
        __Vtemp_2[0U] = 0x2e766364U;
        __Vtemp_2[1U] = 0x666f726dU;
        __Vtemp_2[2U] = 0x77617665U;
        __Vtemp_2[3U] = 0x7269635fU;
        __Vtemp_2[4U] = 0x67656e65U;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_2));
    }
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 256> Vtestbench__ConstPool__TABLE_hb57d27b5_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ testbench__DOT__dut_decoder__DOT____VdfgTmp_hd7449b74__0;
    testbench__DOT__dut_decoder__DOT____VdfgTmp_hd7449b74__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    testbench__DOT__dut_decoder__DOT____VdfgTmp_hd7449b74__0 
        = (1U & VL_REDXOR_4((7U & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])));
    vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME 
        = ((0x80U & (((VL_REDXOR_32((0x8099264U & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                       ^ VL_REDXOR_32((0xff0738c8U 
                                       & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                      ^ (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                         >> 7U)) << 7U)) | ((0x40U 
                                             & (((VL_REDXOR_32(
                                                               (0xc8080992U 
                                                                & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                                                  ^ 
                                                  VL_REDXOR_32(
                                                               (0x64ff0738U 
                                                                & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                 ^ 
                                                 (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                  >> 6U)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & (((VL_REDXOR_32(
                                                                  (0x38c80809U 
                                                                   & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                                                     ^ 
                                                     VL_REDXOR_32(
                                                                  (0x9264ff07U 
                                                                   & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                    ^ 
                                                    (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                     >> 5U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & (((VL_REDXOR_32(
                                                                     (0x738c808U 
                                                                      & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                                                        ^ 
                                                        VL_REDXOR_32(
                                                                     (0x99264ffU 
                                                                      & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                       ^ 
                                                       (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                        >> 4U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & (((VL_REDXOR_32(
                                                                        (0xff0738c8U 
                                                                         & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                                                           ^ 
                                                           VL_REDXOR_32(
                                                                        (0x8099264U 
                                                                         & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                          ^ 
                                                          (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                           >> 3U)) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & (((VL_REDXOR_32(
                                                                           (0x64ff0738U 
                                                                            & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U])) 
                                                              ^ 
                                                              VL_REDXOR_32(
                                                                           (0xc8080992U 
                                                                            & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                             ^ 
                                                             (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                              >> 2U)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & (((((IData)(testbench__DOT__dut_decoder__DOT____VdfgTmp_hd7449b74__0) 
                                                                  ^ 
                                                                  VL_REDXOR_32(
                                                                               (0x9264ff00U 
                                                                                & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U]))) 
                                                                 ^ 
                                                                 VL_REDXOR_32(
                                                                              (0x38c80809U 
                                                                               & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                                ^ 
                                                                (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((((IData)(testbench__DOT__dut_decoder__DOT____VdfgTmp_hd7449b74__0) 
                                                                   ^ 
                                                                   VL_REDXOR_32(
                                                                                (0x99264f8U 
                                                                                & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U]))) 
                                                                  ^ 
                                                                  VL_REDXOR_32(
                                                                               (0x738c808U 
                                                                                & vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U]))) 
                                                                 ^ 
                                                                 vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U])))))))));
    __Vtableidx1 = vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME;
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[0U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][0U];
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[1U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][1U];
    vlSelf->testbench__DOT__dut_decoder__DOT__MASK[2U] 
        = Vtestbench__ConstPool__TABLE_hb57d27b5_0[__Vtableidx1][2U];
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
