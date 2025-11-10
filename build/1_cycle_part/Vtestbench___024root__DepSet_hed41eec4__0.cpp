// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_initial__TOP(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__CLK__0 
        = vlSelf->testbench__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->testbench__DOT__CLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "src/1_cycle_part/testbench.sv", 
                                           31);
        vlSelf->testbench__DOT__CLK = (1U & (~ (IData)(vlSelf->testbench__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    vlSelf->testbench__DOT__NOISE[0U] = 0U;
    vlSelf->testbench__DOT__NOISE[1U] = 0U;
    vlSelf->testbench__DOT__NOISE[2U] = 0U;
    co_await vlSelf->__VdlySched.delay(0x2fULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       60);
    vlSelf->testbench__DOT__NOISE[0U] = 0x100000U;
    vlSelf->testbench__DOT__NOISE[1U] = 0U;
    vlSelf->testbench__DOT__NOISE[2U] = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "src/1_cycle_part/testbench.sv", 
                                       62);
    vlSelf->testbench__DOT__NOISE[0U] = 0U;
    vlSelf->testbench__DOT__NOISE[1U] = 0x1100000U;
    vlSelf->testbench__DOT__NOISE[2U] = 0U;
}

void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__S_ERR = ((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                                     & VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME));
    vlSelf->testbench__DOT__D_ERR = ((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                                     & (~ VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)));
    vlSelf->testbench__DOT__ERR = (0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME));
    vlSelf->testbench__DOT__D_DATA[0U] = (vlSelf->testbench__DOT__dut_decoder__DOT__MASK[0U] 
                                          ^ vlSelf->testbench__DOT__N_DATA[0U]);
    vlSelf->testbench__DOT__D_DATA[1U] = (vlSelf->testbench__DOT__dut_decoder__DOT__MASK[1U] 
                                          ^ vlSelf->testbench__DOT__N_DATA[1U]);
    vlSelf->testbench__DOT__D_DATA[2U] = (vlSelf->testbench__DOT__dut_decoder__DOT__MASK[2U] 
                                          ^ vlSelf->testbench__DOT__N_DATA[2U]);
    vlSelf->testbench__DOT__E_DATA[0U] = vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[0U];
    vlSelf->testbench__DOT__E_DATA[1U] = vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[1U];
    vlSelf->testbench__DOT__E_DATA[2U] = vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U];
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[0U] 
        = (IData)(vlSelf->testbench__DOT__R_DATA);
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[1U] 
        = (IData)((vlSelf->testbench__DOT__R_DATA >> 0x20U));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xfeU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (1U & VL_REDXOR_64((0x738c808099264ffULL 
                                 & vlSelf->testbench__DOT__R_DATA))));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xfdU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (2U & (VL_REDXOR_64((0x38c808099264ff07ULL 
                                  & vlSelf->testbench__DOT__R_DATA)) 
                    << 1U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xfbU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (4U & (VL_REDXOR_64((0xc808099264ff0738ULL 
                                  & vlSelf->testbench__DOT__R_DATA)) 
                    << 2U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xf7U & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (8U & (VL_REDXOR_64((0x8099264ff0738c8ULL 
                                  & vlSelf->testbench__DOT__R_DATA)) 
                    << 3U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xefU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (0x10U & (VL_REDXOR_64((0x99264ff0738c808ULL 
                                     & vlSelf->testbench__DOT__R_DATA)) 
                       << 4U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xdfU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (0x20U & (VL_REDXOR_64((0x9264ff0738c80809ULL 
                                     & vlSelf->testbench__DOT__R_DATA)) 
                       << 5U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0xbfU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (0x40U & (VL_REDXOR_64((0x64ff0738c8080992ULL 
                                     & vlSelf->testbench__DOT__R_DATA)) 
                       << 6U)));
    vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U] 
        = ((0x7fU & vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]) 
           | (0x80U & (VL_REDXOR_64((0xff0738c808099264ULL 
                                     & vlSelf->testbench__DOT__R_DATA)) 
                       << 7U)));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/1_cycle_part/testbench.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/1_cycle_part/testbench.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
