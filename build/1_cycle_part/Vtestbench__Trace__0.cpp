// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+0,(vlSelf->testbench__DOT__N_DATA),72);
        bufp->chgCData(oldp+3,(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME),8);
        bufp->chgWData(oldp+4,(vlSelf->testbench__DOT__dut_decoder__DOT__MASK),72);
        bufp->chgBit(oldp+7,((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))));
        bufp->chgBit(oldp+8,((1U & VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+9,(vlSelf->testbench__DOT__E_DATA),72);
        bufp->chgWData(oldp+12,(vlSelf->testbench__DOT__D_DATA),72);
        bufp->chgBit(oldp+15,(vlSelf->testbench__DOT__ERR));
        bufp->chgBit(oldp+16,(vlSelf->testbench__DOT__D_ERR));
        bufp->chgBit(oldp+17,(vlSelf->testbench__DOT__S_ERR));
        bufp->chgWData(oldp+18,(vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER),72);
    }
    bufp->chgBit(oldp+21,(vlSelf->testbench__DOT__CLK));
    bufp->chgQData(oldp+22,(vlSelf->testbench__DOT__R_DATA),64);
    bufp->chgWData(oldp+24,(vlSelf->testbench__DOT__NOISE),72);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
