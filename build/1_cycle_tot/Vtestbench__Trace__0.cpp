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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER),72);
        __Vtemp_1[0U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[0U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[0U]);
        __Vtemp_1[1U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[1U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[1U]);
        __Vtemp_1[2U] = (vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER[2U] 
                         ^ vlSelf->testbench__DOT__dut_decoder__DOT__MASK[2U]);
        bufp->chgWData(oldp+3,(__Vtemp_1),72);
        bufp->chgBit(oldp+6,((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))));
        bufp->chgBit(oldp+7,(((~ VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                              & (0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)))));
        bufp->chgBit(oldp+8,(((0U != (IData)(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME)) 
                              & VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))));
        bufp->chgWData(oldp+9,(vlSelf->testbench__DOT__dut_decoder__DOT__BUFFER),72);
        bufp->chgCData(oldp+12,(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME),8);
        bufp->chgWData(oldp+13,(vlSelf->testbench__DOT__dut_decoder__DOT__MASK),72);
        bufp->chgBit(oldp+16,((1U & VL_REDXOR_8(vlSelf->testbench__DOT__dut_decoder__DOT__SYNDROME))));
    }
    bufp->chgBit(oldp+17,(vlSelf->testbench__DOT__CLK));
    bufp->chgQData(oldp+18,(vlSelf->testbench__DOT__R_DATA),64);
    __Vtemp_2[0U] = (vlSelf->testbench__DOT__NOISE[0U] 
                     ^ vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[0U]);
    __Vtemp_2[1U] = (vlSelf->testbench__DOT__NOISE[1U] 
                     ^ vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[1U]);
    __Vtemp_2[2U] = (vlSelf->testbench__DOT__NOISE[2U] 
                     ^ vlSelf->testbench__DOT__dut_encoder__DOT__BUFFER[2U]);
    bufp->chgWData(oldp+20,(__Vtemp_2),72);
    bufp->chgWData(oldp+23,(vlSelf->testbench__DOT__NOISE),72);
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
}
