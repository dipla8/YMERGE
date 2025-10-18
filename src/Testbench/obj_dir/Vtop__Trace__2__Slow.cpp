// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn622_s11__DOT__lut_4__DOT__mux8_1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn622_s11__DOT__lut_4__DOT__mux8_1__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn622_s11__DOT__lut_4__DOT__mux8_2__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn622_s11__DOT__lut_4__DOT__mux8_2__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s11__DOT__lut_3__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s11__DOT__lut_3__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn180_s5__DOT__lut_4__DOT__mux8_1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn180_s5__DOT__lut_4__DOT__mux8_1__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn180_s5__DOT__lut_4__DOT__mux8_2__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn180_s5__DOT__lut_4__DOT__mux8_2__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1349,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1348,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1433,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1345,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s12__DOT__lut_4__DOT__mux8_1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s12__DOT__lut_4__DOT__mux8_1__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s12__DOT__lut_4__DOT__mux8_2__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn606_s12__DOT__lut_4__DOT__mux8_2__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn580_s32__DOT__lut_4__DOT__mux8_1__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn580_s32__DOT__lut_4__DOT__mux8_1__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1433,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn580_s32__DOT__lut_4__DOT__mux8_2__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fn580_s32__DOT__lut_4__DOT__mux8_2__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"S2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1424,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux4_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mux4_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mux2_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mux2_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1434,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1253,0,"S0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1434,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__1(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    Vtop___024root__trace_init_sub__TOP__1(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlWide<512>/*16383:0*/ Vtop__ConstPool__CONST_hd74c513e_0;

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<7>/*223:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1433,(1U));
    bufp->fullBit(oldp+1434,(0U));
    bufp->fullBit(oldp+1435,(vlSelfRef.top__DOT__debug));
    bufp->fullBit(oldp+1436,(vlSelfRef.top__DOT__usb_ren));
    bufp->fullIData(oldp+1437,(vlSelfRef.top__DOT__usb_data_out),32);
    bufp->fullBit(oldp+1438,(vlSelfRef.top__DOT__counter27M));
    bufp->fullBit(oldp+1439,(vlSelfRef.top__DOT__sdram_clk));
    bufp->fullBit(oldp+1440,(vlSelfRef.top__DOT__rpll_lock));
    bufp->fullSData(oldp+1441,(0U),11);
    bufp->fullCData(oldp+1442,(0U),2);
    bufp->fullWData(oldp+1443,(Vtop__ConstPool__CONST_h93e1b771_0),512);
    bufp->fullIData(oldp+1459,(vlSelfRef.top__DOT__sdram_addr),32);
    bufp->fullCData(oldp+1460,(vlSelfRef.top__DOT__sdram_mask),8);
    bufp->fullCData(oldp+1461,(vlSelfRef.top__DOT__sdram_len),4);
    bufp->fullBit(oldp+1462,(vlSelfRef.top__DOT__sram_len));
    bufp->fullSData(oldp+1463,(vlSelfRef.top__DOT__pixelAddress),10);
    bufp->fullCData(oldp+1464,(vlSelfRef.top__DOT__pixelData),8);
    bufp->fullIData(oldp+1465,(0U),32);
    bufp->fullIData(oldp+1466,(1U),32);
    bufp->fullIData(oldp+1467,(2U),32);
    bufp->fullIData(oldp+1468,(3U),32);
    bufp->fullCData(oldp+1469,(0U),5);
    bufp->fullIData(oldp+1470,(0x40000U),32);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x2f52414dU;
    __Vtemp_1[2U] = 0x75646573U;
    __Vtemp_1[3U] = 0x696e636cU;
    __Vtemp_1[4U] = 0x2e2e2fU;
    bufp->fullWData(oldp+1471,(__Vtemp_1),152);
    bufp->fullCData(oldp+1476,(1U),2);
    bufp->fullCData(oldp+1477,(2U),2);
    bufp->fullCData(oldp+1478,(3U),2);
    bufp->fullIData(oldp+1479,(0U),20);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x74616765U;
    __Vtemp_2[2U] = 0x6f6e6453U;
    __Vtemp_2[3U] = 0x2f736563U;
    __Vtemp_2[4U] = 0x75646573U;
    __Vtemp_2[5U] = 0x696e636cU;
    __Vtemp_2[6U] = 0x2e2e2fU;
    bufp->fullWData(oldp+1480,(__Vtemp_2),216);
    bufp->fullSData(oldp+1487,(0x60U),16);
    bufp->fullSData(oldp+1488,(0x48U),16);
    bufp->fullSData(oldp+1489,(0x320U),16);
    bufp->fullSData(oldp+1490,(0x18U),16);
    bufp->fullSData(oldp+1491,(6U),16);
    bufp->fullSData(oldp+1492,(7U),16);
    bufp->fullSData(oldp+1493,(0x1e0U),16);
    bufp->fullSData(oldp+1494,(3U),16);
    bufp->fullSData(oldp+1495,(0x3e0U),16);
    bufp->fullSData(oldp+1496,(0x1f0U),16);
    bufp->fullWData(oldp+1497,(vlSelfRef.top__DOT__VGA__DOT__charMem),128);
    bufp->fullSData(oldp+1501,(vlSelfRef.top__DOT__VGA__DOT__currentPixel),15);
    bufp->fullCData(oldp+1502,(vlSelfRef.top__DOT__VGA__DOT__dataOutTxt),8);
    bufp->fullCData(oldp+1503,(vlSelfRef.top__DOT__VGA__DOT__dataOutAttr),8);
    bufp->fullIData(oldp+1504,(0xf4240U),22);
    bufp->fullIData(oldp+1505,(vlSelfRef.top__DOT__counter27M),32);
    bufp->fullIData(oldp+1506,(vlSelfRef.top__DOT__bu__DOT__usb_out),32);
    bufp->fullIData(oldp+1507,(0x2000000U),32);
    bufp->fullIData(oldp+1508,(0x200bff8U),32);
    bufp->fullIData(oldp+1509,(0x2004000U),32);
    bufp->fullIData(oldp+1510,(0x32U),32);
    bufp->fullIData(oldp+1511,(vlSelfRef.top__DOT__cpu_1__DOT__PC_OLD),32);
    bufp->fullIData(oldp+1512,(vlSelfRef.top__DOT__cpu_1__DOT__PCplus4),32);
    bufp->fullBit(oldp+1513,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_memwb));
    bufp->fullBit(oldp+1514,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_immidiate));
    bufp->fullBit(oldp+1515,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_immidiate));
    bufp->fullBit(oldp+1516,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_immidiate));
    bufp->fullCData(oldp+1517,(vlSelfRef.top__DOT__cpu_1__DOT__bypassA),2);
    bufp->fullCData(oldp+1518,(vlSelfRef.top__DOT__cpu_1__DOT__bypassB),2);
    bufp->fullIData(oldp+1519,(vlSelfRef.top__DOT__cpu_1__DOT__PCPrevious),32);
    bufp->fullIData(oldp+1520,(0U),32);
    bufp->fullIData(oldp+1521,(1U),32);
    bufp->fullIData(oldp+1522,(0x20U),32);
    bufp->fullCData(oldp+1523,(0xdU),4);
    bufp->fullIData(oldp+1524,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__i),32);
    bufp->fullIData(oldp+1525,(4U),32);
    bufp->fullIData(oldp+1526,(8U),32);
    bufp->fullIData(oldp+1527,(0xcU),32);
    bufp->fullCData(oldp+1528,(3U),8);
    bufp->fullCData(oldp+1529,(0U),8);
    bufp->fullCData(oldp+1530,(1U),8);
    bufp->fullCData(oldp+1531,(2U),8);
    bufp->fullCData(oldp+1532,(4U),8);
    bufp->fullCData(oldp+1533,(5U),8);
    bufp->fullCData(oldp+1534,(6U),8);
    bufp->fullCData(oldp+1535,(7U),8);
    bufp->fullCData(oldp+1536,(8U),8);
    bufp->fullCData(oldp+1537,(9U),8);
    bufp->fullCData(oldp+1538,(0xaU),8);
    bufp->fullCData(oldp+1539,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__stored_characters[0]),8);
    bufp->fullCData(oldp+1540,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__stored_characters[1]),8);
    bufp->fullCData(oldp+1541,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__stored_characters[2]),8);
    bufp->fullCData(oldp+1542,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__stored_characters[3]),8);
    bufp->fullIData(oldp+1543,(0x2002U),32);
    bufp->fullIData(oldp+1544,(0xdeadbeafU),32);
    bufp->fullSData(oldp+1545,(0x190U),15);
    bufp->fullIData(oldp+1546,(0x14U),32);
    bufp->fullWData(oldp+1547,(Vtop__ConstPool__CONST_hd74c513e_0),16384);
    bufp->fullIData(oldp+2059,(0U),24);
    bufp->fullIData(oldp+2060,(0xbU),32);
    bufp->fullCData(oldp+2061,(vlSelfRef.top__DOT__ppu_inst__DOT__attributes_Buffer__DOT__din_b),8);
    bufp->fullIData(oldp+2062,(0xeU),32);
    bufp->fullCData(oldp+2063,(vlSelfRef.top__DOT__ppu_inst__DOT__sprite_BRAM__DOT__din_b),8);
    bufp->fullCData(oldp+2064,(vlSelfRef.top__DOT__ppu_inst__DOT__text_Buffer__DOT__din_b),8);
    bufp->fullBit(oldp+2065,(vlSelfRef.top__DOT__ram_controller_inst__DOT__cpu_clk));
    bufp->fullBit(oldp+2066,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_clk));
    bufp->fullCData(oldp+2067,((0xfU & (IData)(vlSelfRef.top__DOT__sdram_mask))),4);
    bufp->fullCData(oldp+2068,(vlSelfRef.top__DOT__sram_len),8);
    bufp->fullIData(oldp+2069,(0x258U),32);
    bufp->fullBit(oldp+2070,(0U));
    bufp->fullBit(oldp+2071,(1U));
    bufp->fullCData(oldp+2072,(0xcaU),8);
    bufp->fullCData(oldp+2073,(0xbU),4);
    bufp->fullCData(oldp+2074,(0xacU),8);
    bufp->fullIData(oldp+2075,(5U),32);
    bufp->fullIData(oldp+2076,(6U),32);
    bufp->fullIData(oldp+2077,(7U),32);
    bufp->fullIData(oldp+2078,(9U),32);
    bufp->fullSData(oldp+2079,(0x8f88U),16);
    bufp->fullSData(oldp+2080,(0xf100U),16);
    bufp->fullSData(oldp+2081,(0xf1U),16);
    bufp->fullSData(oldp+2082,(0xfa30U),16);
    bufp->fullSData(oldp+2083,(0x100U),16);
    bufp->fullCData(oldp+2084,(4U),4);
    bufp->fullCData(oldp+2085,(0xf4U),8);
    bufp->fullSData(oldp+2086,(0xff70U),16);
    bufp->fullCData(oldp+2087,(0xf8U),8);
    bufp->fullSData(oldp+2088,(1U),16);
    bufp->fullCData(oldp+2089,(1U),4);
    bufp->fullCData(oldp+2090,(9U),4);
    bufp->fullSData(oldp+2091,(0x7f80U),16);
    bufp->fullCData(oldp+2092,(0x78U),8);
    bufp->fullCData(oldp+2093,(6U),4);
    bufp->fullSData(oldp+2094,(0xfffeU),16);
    bufp->fullCData(oldp+2095,(0xfeU),8);
    bufp->fullCData(oldp+2096,(0x80U),8);
    bufp->fullSData(oldp+2097,(0x9009U),16);
    bufp->fullCData(oldp+2098,(0x40U),8);
    bufp->fullSData(oldp+2099,(0xf2ffU),16);
    bufp->fullCData(oldp+2100,(0xd0U),8);
    bufp->fullSData(oldp+2101,(0x1f00U),16);
    bufp->fullSData(oldp+2102,(0x7033U),16);
    bufp->fullSData(oldp+2103,(0xf800U),16);
    bufp->fullSData(oldp+2104,(0xf4ffU),16);
    bufp->fullSData(oldp+2105,(0xb303U),16);
    bufp->fullSData(oldp+2106,(0xb00U),16);
    bufp->fullSData(oldp+2107,(0xfe00U),16);
    bufp->fullCData(oldp+2108,(0xb0U),8);
    bufp->fullSData(oldp+2109,(0x8fffU),16);
    bufp->fullSData(oldp+2110,(0xbbf0U),16);
    bufp->fullSData(oldp+2111,(0xd00U),16);
    bufp->fullSData(oldp+2112,(0xbbbU),16);
    bufp->fullSData(oldp+2113,(0xe0eeU),16);
    bufp->fullCData(oldp+2114,(0xd3U),8);
    bufp->fullCData(oldp+2115,(0xa3U),8);
    bufp->fullCData(oldp+2116,(0xbfU),8);
    bufp->fullCData(oldp+2117,(0x10U),8);
    bufp->fullSData(oldp+2118,(0x1000U),16);
    bufp->fullSData(oldp+2119,(0x8fU),16);
    bufp->fullSData(oldp+2120,(0x4f00U),16);
    bufp->fullSData(oldp+2121,(0xbbb0U),16);
    bufp->fullSData(oldp+2122,(0x1fU),16);
    bufp->fullSData(oldp+2123,(0x5c00U),16);
    bufp->fullSData(oldp+2124,(0xb0bbU),16);
    bufp->fullSData(oldp+2125,(0xf0bbU),16);
    bufp->fullSData(oldp+2126,(0xaa3cU),16);
    bufp->fullSData(oldp+2127,(0x6aaaU),16);
    bufp->fullSData(oldp+2128,(0x3caaU),16);
    bufp->fullCData(oldp+2129,(8U),4);
    bufp->fullSData(oldp+2130,(0x8000U),16);
    bufp->fullCData(oldp+2131,(0x6aU),8);
    bufp->fullCData(oldp+2132,(0x35U),8);
    bufp->fullSData(oldp+2133,(8U),16);
    bufp->fullSData(oldp+2134,(0xefffU),16);
    bufp->fullSData(oldp+2135,(0xefU),16);
    bufp->fullSData(oldp+2136,(0x7000U),16);
    bufp->fullSData(oldp+2137,(0xbf00U),16);
    bufp->fullSData(oldp+2138,(0x4000U),16);
    bufp->fullSData(oldp+2139,(0xf70fU),16);
    bufp->fullCData(oldp+2140,(0x70U),8);
    bufp->fullSData(oldp+2141,(0x7077U),16);
    bufp->fullSData(oldp+2142,(0xba00U),16);
    bufp->fullSData(oldp+2143,(0xe00U),16);
    bufp->fullSData(oldp+2144,(0xb000U),16);
    bufp->fullSData(oldp+2145,(0xff07U),16);
    bufp->fullCData(oldp+2146,(0x15U),8);
    bufp->fullSData(oldp+2147,(0xab00U),16);
    bufp->fullSData(oldp+2148,(0xf444U),16);
    bufp->fullSData(oldp+2149,(0xf400U),16);
    bufp->fullSData(oldp+2150,(0x4f44U),16);
    bufp->fullSData(oldp+2151,(0x708U),16);
    bufp->fullSData(oldp+2152,(0xee0U),16);
    bufp->fullSData(oldp+2153,(0x1444U),16);
    bufp->fullSData(oldp+2154,(0x5456U),16);
    bufp->fullSData(oldp+2155,(0x400U),16);
    bufp->fullSData(oldp+2156,(0xf3a0U),16);
    bufp->fullSData(oldp+2157,(0xefeeU),16);
    bufp->fullSData(oldp+2158,(0xf8ffU),16);
    bufp->fullSData(oldp+2159,(0x700U),16);
    bufp->fullSData(oldp+2160,(0x8f00U),16);
    bufp->fullSData(oldp+2161,(0xfeU),16);
    bufp->fullIData(oldp+2162,(0x7ffffU),32);
    bufp->fullSData(oldp+2163,(vlSelfRef.top__DOT__sdram__DOT__B0_row_addr),11);
    bufp->fullSData(oldp+2164,(vlSelfRef.top__DOT__sdram__DOT__B1_row_addr),11);
    bufp->fullSData(oldp+2165,(vlSelfRef.top__DOT__sdram__DOT__B2_row_addr),11);
    bufp->fullSData(oldp+2166,(vlSelfRef.top__DOT__sdram__DOT__B3_row_addr),11);
    bufp->fullCData(oldp+2167,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_bank),2);
    bufp->fullCData(oldp+2168,(vlSelfRef.top__DOT__sdram__DOT__Prev_bank),2);
    bufp->fullDouble(oldp+2169,(5.50000000000000000e+00));
    bufp->fullDouble(oldp+2171,(2.50000000000000000e+00));
    bufp->fullDouble(oldp+2173,(2.0));
    bufp->fullDouble(oldp+2175,(42.0));
    bufp->fullDouble(oldp+2177,(60.0));
    bufp->fullDouble(oldp+2179,(18.0));
    bufp->fullDouble(oldp+2181,(12.0));
    bufp->fullDouble(oldp+2183,(6.0));
    bufp->fullIData(oldp+2185,(0x1bU),32);
    bufp->fullIData(oldp+2186,(0x1c200U),32);
    bufp->fullIData(oldp+2187,(0x19bfcc0U),32);
    bufp->fullIData(oldp+2188,(0xe9U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__RAM__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__SecondStageRAM__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelfRef.top__DOT__mem__DOT__i),32);
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_cmd_ack_s4__DOT__Q_reg));
    bufp->fullBit(oldp+5,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_wr_data_valid_s1__DOT__Q_reg)))));
    bufp->fullBit(oldp+6,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cke_s3__DOT__Q_reg));
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_wr_data_valid_s1__DOT__Q_reg));
    bufp->fullCData(oldp+8,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_7_s1__DOT__Q_reg) 
                                << 7U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_6_s1__DOT__Q_reg) 
                                          << 6U)) | 
                              (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_5_s1__DOT__Q_reg) 
                                << 5U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_4_s1__DOT__Q_reg) 
                                          << 4U))) 
                             | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_3_s1__DOT__Q_reg) 
                                  << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_2_s1__DOT__Q_reg) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_1_s1__DOT__Q_reg) 
                                    << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_0_s1__DOT__Q_reg))))),8);
    bufp->fullBit(oldp+9,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_1_s1__DOT__Q_reg));
    bufp->fullBit(oldp+10,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_2_s1__DOT__Q_reg));
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_3_s1__DOT__Q_reg));
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_4_s1__DOT__Q_reg));
    bufp->fullBit(oldp+13,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_5_s1__DOT__Q_reg));
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_6_s1__DOT__Q_reg));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_7_s1__DOT__Q_reg));
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_8_s1__DOT__Q_reg));
    bufp->fullBit(oldp+17,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_0_s1__DOT__Q_reg));
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_1_s1__DOT__Q_reg));
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_2_s1__DOT__Q_reg));
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_3_s1__DOT__Q_reg));
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_4_s1__DOT__Q_reg));
    bufp->fullBit(oldp+22,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_5_s1__DOT__Q_reg));
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_6_s1__DOT__Q_reg));
    bufp->fullBit(oldp+24,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_7_s1__DOT__Q_reg));
    bufp->fullQData(oldp+25,(vlSelfRef.top__DOT__sdram__DOT__RFC_chk),64);
    bufp->fullQData(oldp+27,(vlSelfRef.top__DOT__sdram__DOT__RRD_chk),64);
    bufp->fullQData(oldp+29,(vlSelfRef.top__DOT__sdram__DOT__RC_chk0),64);
    bufp->fullQData(oldp+31,(vlSelfRef.top__DOT__sdram__DOT__RC_chk1),64);
    bufp->fullQData(oldp+33,(vlSelfRef.top__DOT__sdram__DOT__RC_chk2),64);
    bufp->fullQData(oldp+35,(vlSelfRef.top__DOT__sdram__DOT__RC_chk3),64);
    bufp->fullQData(oldp+37,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk0),64);
    bufp->fullQData(oldp+39,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk1),64);
    bufp->fullQData(oldp+41,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk2),64);
    bufp->fullQData(oldp+43,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk3),64);
    bufp->fullQData(oldp+45,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk0),64);
    bufp->fullQData(oldp+47,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk1),64);
    bufp->fullQData(oldp+49,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk2),64);
    bufp->fullQData(oldp+51,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk3),64);
    bufp->fullCData(oldp+53,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[0]),2);
    bufp->fullCData(oldp+54,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[1]),2);
    bufp->fullCData(oldp+55,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[2]),2);
    bufp->fullCData(oldp+56,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[3]),2);
    bufp->fullCData(oldp+57,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[0]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[1]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[2]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[3]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.top__DOT__sdram__DOT__Command[0]),4);
    bufp->fullCData(oldp+62,(vlSelfRef.top__DOT__sdram__DOT__Command[1]),4);
    bufp->fullCData(oldp+63,(vlSelfRef.top__DOT__sdram__DOT__Command[2]),4);
    bufp->fullCData(oldp+64,(vlSelfRef.top__DOT__sdram__DOT__Command[3]),4);
    bufp->fullCData(oldp+65,(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0),4);
    bufp->fullCData(oldp+66,(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg1),4);
    bufp->fullSData(oldp+67,(vlSelfRef.top__DOT__sdram__DOT__Mode_reg),11);
    bufp->fullCData(oldp+68,(vlSelfRef.top__DOT__sdram__DOT__Col_temp),8);
    bufp->fullCData(oldp+69,(vlSelfRef.top__DOT__sdram__DOT__Burst_counter),8);
    bufp->fullBit(oldp+70,(vlSelfRef.top__DOT__sdram__DOT__Act_b0));
    bufp->fullBit(oldp+71,(vlSelfRef.top__DOT__sdram__DOT__Act_b1));
    bufp->fullBit(oldp+72,(vlSelfRef.top__DOT__sdram__DOT__Act_b2));
    bufp->fullBit(oldp+73,(vlSelfRef.top__DOT__sdram__DOT__Act_b3));
    bufp->fullBit(oldp+74,(vlSelfRef.top__DOT__sdram__DOT__Pc_b0));
    bufp->fullBit(oldp+75,(vlSelfRef.top__DOT__sdram__DOT__Pc_b1));
    bufp->fullBit(oldp+76,(vlSelfRef.top__DOT__sdram__DOT__Pc_b2));
    bufp->fullBit(oldp+77,(vlSelfRef.top__DOT__sdram__DOT__Pc_b3));
    bufp->fullCData(oldp+78,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[0]),2);
    bufp->fullCData(oldp+79,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[1]),2);
    bufp->fullCData(oldp+80,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[2]),2);
    bufp->fullCData(oldp+81,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[3]),2);
    bufp->fullBit(oldp+82,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[0]));
    bufp->fullBit(oldp+83,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[1]));
    bufp->fullBit(oldp+84,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[2]));
    bufp->fullBit(oldp+85,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[3]));
    bufp->fullBit(oldp+86,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[0]));
    bufp->fullBit(oldp+87,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[1]));
    bufp->fullBit(oldp+88,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[2]));
    bufp->fullBit(oldp+89,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[3]));
    bufp->fullBit(oldp+90,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[0]));
    bufp->fullBit(oldp+91,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[1]));
    bufp->fullBit(oldp+92,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[2]));
    bufp->fullBit(oldp+93,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[3]));
    bufp->fullBit(oldp+94,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[0]));
    bufp->fullBit(oldp+95,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[1]));
    bufp->fullBit(oldp+96,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[2]));
    bufp->fullBit(oldp+97,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[3]));
    bufp->fullBit(oldp+98,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[0]));
    bufp->fullBit(oldp+99,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[1]));
    bufp->fullBit(oldp+100,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[2]));
    bufp->fullBit(oldp+101,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[3]));
    bufp->fullBit(oldp+102,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[0]));
    bufp->fullBit(oldp+103,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[1]));
    bufp->fullBit(oldp+104,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[2]));
    bufp->fullBit(oldp+105,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[3]));
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[0]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[1]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[2]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[3]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[0]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[1]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[2]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[3]),32);
    bufp->fullBit(oldp+114,(vlSelfRef.top__DOT__sdram__DOT__Data_in_enable));
    bufp->fullBit(oldp+115,(vlSelfRef.top__DOT__sdram__DOT__Data_out_enable));
    bufp->fullCData(oldp+116,(vlSelfRef.top__DOT__sdram__DOT__Bank),2);
    bufp->fullSData(oldp+117,(vlSelfRef.top__DOT__sdram__DOT__Row),11);
    bufp->fullCData(oldp+118,(vlSelfRef.top__DOT__sdram__DOT__Col),8);
    bufp->fullCData(oldp+119,(vlSelfRef.top__DOT__sdram__DOT__Col_brst),8);
    bufp->fullBit(oldp+120,((IData)((7U == (7U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))))));
    bufp->fullBit(oldp+121,((1U & ((IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg) 
                                   >> 9U))));
    bufp->fullQData(oldp+122,(vlSelfRef.top__DOT__sdram__DOT__MRD_chk),64);
    bufp->fullQData(oldp+124,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[0]),64);
    bufp->fullQData(oldp+126,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[1]),64);
    bufp->fullQData(oldp+128,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[2]),64);
    bufp->fullQData(oldp+130,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[3]),64);
    bufp->fullQData(oldp+132,(vlSelfRef.top__DOT__sdram__DOT__RP_chk0),64);
    bufp->fullQData(oldp+134,(vlSelfRef.top__DOT__sdram__DOT__RP_chk1),64);
    bufp->fullQData(oldp+136,(vlSelfRef.top__DOT__sdram__DOT__RP_chk2),64);
    bufp->fullQData(oldp+138,(vlSelfRef.top__DOT__sdram__DOT__RP_chk3),64);
    bufp->fullBit(oldp+140,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg));
    bufp->fullIData(oldp+141,((((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_31_s0__DOT__Q_reg) 
                                    << 0x1fU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_30_s0__DOT__Q_reg) 
                                                 << 0x1eU)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_29_s0__DOT__Q_reg) 
                                      << 0x1dU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_28_s0__DOT__Q_reg) 
                                                   << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_27_s0__DOT__Q_reg) 
                                      << 0x1bU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_26_s0__DOT__Q_reg) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_25_s0__DOT__Q_reg) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_24_s0__DOT__Q_reg) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_23_s0__DOT__Q_reg) 
                                      << 0x17U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_22_s0__DOT__Q_reg) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_21_s0__DOT__Q_reg) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_20_s0__DOT__Q_reg) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_19_s0__DOT__Q_reg) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_18_s0__DOT__Q_reg) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_17_s0__DOT__Q_reg) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_16_s0__DOT__Q_reg) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_15_s0__DOT__Q_reg) 
                                      << 0xfU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_14_s0__DOT__Q_reg) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_13_s0__DOT__Q_reg) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_12_s0__DOT__Q_reg) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_11_s0__DOT__Q_reg) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_10_s0__DOT__Q_reg) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_9_s0__DOT__Q_reg) 
                                        << 9U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_8_s0__DOT__Q_reg) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_7_s0__DOT__Q_reg) 
                                        << 7U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_6_s0__DOT__Q_reg) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_5_s0__DOT__Q_reg) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_4_s0__DOT__Q_reg) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_3_s0__DOT__Q_reg) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_2_s0__DOT__Q_reg) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_1_s0__DOT__Q_reg) 
                                          << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_0_s0__DOT__Q_reg))))))),32);
    bufp->fullBit(oldp+142,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGEALL_s0__DOT__Q_reg));
    bufp->fullBit(oldp+143,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+144,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+145,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_s0__DOT__Q_reg));
    bufp->fullBit(oldp+146,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+147,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+148,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+149,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+150,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_IDLE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+151,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT0));
    bufp->fullBit(oldp+152,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_2_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+153,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn25_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_3_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+154,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn24_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_4_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+155,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn23_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_5_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+156,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn22_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_6_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+157,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn21_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_7_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+158,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn20_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_8_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+159,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn19_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_9_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+160,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn18_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_10_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+161,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn17_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_11_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+162,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn16_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_12_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+163,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn15_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_13_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+164,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn14_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_14_s0__DOT__Q_reg))));
    bufp->fullBit(oldp+165,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2) 
                             ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg))));
    bufp->fullBit(oldp+166,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg) 
                             && (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2))));
    bufp->fullBit(oldp+167,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg)))));
    bufp->fullBit(oldp+168,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_wen_n_s0__DOT__Q_reg));
    bufp->fullBit(oldp+169,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cas_n_s0__DOT__Q_reg));
    bufp->fullBit(oldp+170,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ras_n_s0__DOT__Q_reg));
    bufp->fullCData(oldp+171,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_3_s0__DOT__Q_reg) 
                                 << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_2_s0__DOT__Q_reg) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_1_s0__DOT__Q_reg) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_0_s0__DOT__Q_reg)))),4);
    bufp->fullCData(oldp+172,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_2_s0__DOT__Q_reg) 
                                << 2U) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_1_s0__DOT__Q_reg) 
                                           << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_0_s0__DOT__Q_reg)))),3);
    bufp->fullBit(oldp+173,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_ba_init_1_s0__DOT__Q_reg));
    bufp->fullCData(oldp+174,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_1_s0__DOT__Q_reg) 
                                << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_0_s0__DOT__Q_reg))),2);
    bufp->fullSData(oldp+175,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_10_s0__DOT__Q_reg) 
                                  << 0xaU) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_9_s0__DOT__Q_reg) 
                                               << 9U) 
                                              | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_8_s0__DOT__Q_reg) 
                                                 << 8U))) 
                                | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_7_s0__DOT__Q_reg) 
                                    << 7U) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_6_s0__DOT__Q_reg) 
                                               << 6U) 
                                              | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_5_s0__DOT__Q_reg) 
                                                 << 5U)))) 
                               | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_4_s0__DOT__Q_reg) 
                                    << 4U) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_3_s0__DOT__Q_reg) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_2_s0__DOT__Q_reg) 
                                                 << 2U))) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_1_s0__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_0_s0__DOT__Q_reg))))),11);
    bufp->fullBit(oldp+176,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fPrecharge_flag_s0__DOT__Q_reg));
    bufp->fullBit(oldp+177,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_AUTOREFRESH_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+178,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_IDLE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+179,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_ACTIVE2RW_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+180,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_READ_WITHOUT_AUTOPRE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+181,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_WRITE_WITHOUT_AUTOPRE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+182,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_DATAIN2ACTIVE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+183,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg));
    bufp->fullBit(oldp+184,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_INIT_s0__DOT__Q_reg));
    bufp->fullBit(oldp+185,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_POWER_DOWN_s0__DOT__Q_reg));
    bufp->fullBit(oldp+186,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_s0__DOT__Q_reg));
    bufp->fullBit(oldp+187,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_WAIT_s0__DOT__Q_reg));
    bufp->fullBit(oldp+188,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_EXIT_s0__DOT__Q_reg));
    bufp->fullCData(oldp+189,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_3_s0__DOT__Q_reg) 
                                 << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_2_s0__DOT__Q_reg) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_1_s0__DOT__Q_reg) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_0_s0__DOT__Q_reg)))),4);
    bufp->fullCData(oldp+190,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_3_s0__DOT__Q_reg) 
                                 << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_2_s0__DOT__Q_reg) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_1_s0__DOT__Q_reg) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_0_s0__DOT__Q_reg)))),4);
    bufp->fullCData(oldp+191,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_7_s0__DOT__Q_reg) 
                                  << 7U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_6_s0__DOT__Q_reg) 
                                            << 6U)) 
                                | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_5_s0__DOT__Q_reg) 
                                    << 5U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_4_s0__DOT__Q_reg) 
                                              << 4U))) 
                               | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_3_s0__DOT__Q_reg) 
                                    << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_2_s0__DOT__Q_reg) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_1_s0__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_0_s0__DOT__Q_reg))))),8);
    bufp->fullCData(oldp+192,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_1_s0__DOT__Q_reg) 
                                << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_0_s0__DOT__Q_reg))),2);
    bufp->fullSData(oldp+193,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_8_s1__DOT__Q_reg) 
                                  << 8U) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_7_s1__DOT__Q_reg) 
                                             << 7U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_6_s1__DOT__Q_reg) 
                                               << 6U))) 
                                | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_5_s1__DOT__Q_reg) 
                                    << 5U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_4_s1__DOT__Q_reg) 
                                              << 4U))) 
                               | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_3_s1__DOT__Q_reg) 
                                    << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_2_s1__DOT__Q_reg) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_1_s1__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_0_s2__DOT__Q_reg))))),9);
    bufp->fullBit(oldp+194,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+195,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_10_s0__DOT__Q_reg));
    bufp->fullBit(oldp+196,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_11_s0__DOT__Q_reg));
    bufp->fullBit(oldp+197,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_12_s0__DOT__Q_reg));
    bufp->fullBit(oldp+198,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_13_s0__DOT__Q_reg));
    bufp->fullBit(oldp+199,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_14_s0__DOT__Q_reg));
    bufp->fullBit(oldp+200,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_15_s0__DOT__Q_reg));
    bufp->fullBit(oldp+201,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_16_s0__DOT__Q_reg));
    bufp->fullBit(oldp+202,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_17_s0__DOT__Q_reg));
    bufp->fullBit(oldp+203,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_18_s0__DOT__Q_reg));
    bufp->fullBit(oldp+204,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_19_s0__DOT__Q_reg));
    bufp->fullBit(oldp+205,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+206,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_20_s0__DOT__Q_reg));
    bufp->fullBit(oldp+207,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_21_s0__DOT__Q_reg));
    bufp->fullBit(oldp+208,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_22_s0__DOT__Q_reg));
    bufp->fullBit(oldp+209,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_23_s0__DOT__Q_reg));
    bufp->fullBit(oldp+210,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_24_s0__DOT__Q_reg));
    bufp->fullBit(oldp+211,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_25_s0__DOT__Q_reg));
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_26_s0__DOT__Q_reg));
    bufp->fullBit(oldp+213,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_27_s0__DOT__Q_reg));
    bufp->fullBit(oldp+214,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_28_s0__DOT__Q_reg));
    bufp->fullBit(oldp+215,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_29_s0__DOT__Q_reg));
    bufp->fullBit(oldp+216,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+217,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_30_s0__DOT__Q_reg));
    bufp->fullBit(oldp+218,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_31_s0__DOT__Q_reg));
    bufp->fullBit(oldp+219,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+220,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_4_s0__DOT__Q_reg));
    bufp->fullBit(oldp+221,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_5_s0__DOT__Q_reg));
    bufp->fullBit(oldp+222,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_6_s0__DOT__Q_reg));
    bufp->fullBit(oldp+223,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_7_s0__DOT__Q_reg));
    bufp->fullBit(oldp+224,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_8_s0__DOT__Q_reg));
    bufp->fullBit(oldp+225,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_9_s0__DOT__Q_reg));
    bufp->fullBit(oldp+226,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+227,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+228,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+229,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+230,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_0_s2__DOT__Q_reg));
    bufp->fullBit(oldp+231,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_10_s0__DOT__Q_reg));
    bufp->fullBit(oldp+232,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_11_s0__DOT__Q_reg));
    bufp->fullBit(oldp+233,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_12_s0__DOT__Q_reg));
    bufp->fullBit(oldp+234,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_13_s0__DOT__Q_reg));
    bufp->fullBit(oldp+235,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_14_s0__DOT__Q_reg));
    bufp->fullBit(oldp+236,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg));
    bufp->fullBit(oldp+237,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+238,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+239,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+240,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_4_s0__DOT__Q_reg));
    bufp->fullBit(oldp+241,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_5_s0__DOT__Q_reg));
    bufp->fullBit(oldp+242,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_6_s0__DOT__Q_reg));
    bufp->fullBit(oldp+243,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_7_s0__DOT__Q_reg));
    bufp->fullBit(oldp+244,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_8_s0__DOT__Q_reg));
    bufp->fullBit(oldp+245,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_9_s0__DOT__Q_reg));
    bufp->fullBit(oldp+246,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+247,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_10_s0__DOT__Q_reg));
    bufp->fullBit(oldp+248,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+249,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+250,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+251,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_4_s0__DOT__Q_reg));
    bufp->fullBit(oldp+252,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_5_s0__DOT__Q_reg));
    bufp->fullBit(oldp+253,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_6_s0__DOT__Q_reg));
    bufp->fullBit(oldp+254,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_7_s0__DOT__Q_reg));
    bufp->fullBit(oldp+255,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_8_s0__DOT__Q_reg));
    bufp->fullBit(oldp+256,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_9_s0__DOT__Q_reg));
    bufp->fullBit(oldp+257,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+258,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+259,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+260,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+261,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+262,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_0));
    bufp->fullBit(oldp+263,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_1));
    bufp->fullBit(oldp+264,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_0));
    bufp->fullBit(oldp+265,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_1));
    bufp->fullBit(oldp+266,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_2));
    bufp->fullBit(oldp+267,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx0));
    bufp->fullBit(oldp+268,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx1));
    bufp->fullBit(oldp+269,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_0_s2__DOT__Q_reg));
    bufp->fullBit(oldp+270,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+271,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+272,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+273,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+274,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+275,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+276,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+277,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+278,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+279,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+280,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+281,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_4_s0__DOT__Q_reg));
    bufp->fullBit(oldp+282,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+283,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+284,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+285,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_5_s0__DOT__Q_reg));
    bufp->fullBit(oldp+286,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_6_s0__DOT__Q_reg));
    bufp->fullBit(oldp+287,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_7_s0__DOT__Q_reg));
    bufp->fullBit(oldp+288,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+289,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+290,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+291,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+292,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg)))));
    bufp->fullIData(oldp+293,((((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_31_s0__DOT__Q_reg) 
                                    << 0x1fU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_30_s0__DOT__Q_reg) 
                                                 << 0x1eU)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_29_s0__DOT__Q_reg) 
                                      << 0x1dU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_28_s0__DOT__Q_reg) 
                                                   << 0x1cU))) 
                                 | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_27_s0__DOT__Q_reg) 
                                      << 0x1bU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_26_s0__DOT__Q_reg) 
                                                   << 0x1aU)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_25_s0__DOT__Q_reg) 
                                        << 0x19U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_24_s0__DOT__Q_reg) 
                                        << 0x18U)))) 
                                | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_23_s0__DOT__Q_reg) 
                                      << 0x17U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_22_s0__DOT__Q_reg) 
                                                   << 0x16U)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_21_s0__DOT__Q_reg) 
                                        << 0x15U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_20_s0__DOT__Q_reg) 
                                        << 0x14U))) 
                                   | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_19_s0__DOT__Q_reg) 
                                        << 0x13U) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_18_s0__DOT__Q_reg) 
                                        << 0x12U)) 
                                      | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_17_s0__DOT__Q_reg) 
                                          << 0x11U) 
                                         | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_16_s0__DOT__Q_reg) 
                                            << 0x10U))))) 
                               | ((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_15_s0__DOT__Q_reg) 
                                      << 0xfU) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_14_s0__DOT__Q_reg) 
                                                  << 0xeU)) 
                                    | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_13_s0__DOT__Q_reg) 
                                        << 0xdU) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_12_s0__DOT__Q_reg) 
                                        << 0xcU))) 
                                   | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_11_s0__DOT__Q_reg) 
                                        << 0xbU) | 
                                       ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_10_s0__DOT__Q_reg) 
                                        << 0xaU)) | 
                                      (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_9_s0__DOT__Q_reg) 
                                        << 9U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_8_s0__DOT__Q_reg) 
                                                  << 8U)))) 
                                  | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_7_s0__DOT__Q_reg) 
                                        << 7U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_6_s0__DOT__Q_reg) 
                                                  << 6U)) 
                                      | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_5_s0__DOT__Q_reg) 
                                          << 5U) | 
                                         ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_4_s0__DOT__Q_reg) 
                                          << 4U))) 
                                     | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_3_s0__DOT__Q_reg) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_2_s0__DOT__Q_reg) 
                                          << 2U)) | 
                                        (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_1_s0__DOT__Q_reg) 
                                          << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_0_s0__DOT__Q_reg))))))),32);
    bufp->fullBit(oldp+294,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_finish_s0__DOT__Q_reg));
    bufp->fullBit(oldp+295,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_INIT_DONE_s0__DOT__Q_reg));
    bufp->fullBit(oldp+296,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_0_s0__DOT__Q_reg));
    bufp->fullBit(oldp+297,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_10_s0__DOT__Q_reg));
    bufp->fullBit(oldp+298,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_11_s0__DOT__Q_reg));
    bufp->fullBit(oldp+299,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_12_s0__DOT__Q_reg));
    bufp->fullBit(oldp+300,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_13_s0__DOT__Q_reg));
    bufp->fullBit(oldp+301,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_14_s0__DOT__Q_reg));
    bufp->fullBit(oldp+302,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_15_s0__DOT__Q_reg));
    bufp->fullBit(oldp+303,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_16_s0__DOT__Q_reg));
    bufp->fullBit(oldp+304,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_17_s0__DOT__Q_reg));
    bufp->fullBit(oldp+305,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_18_s0__DOT__Q_reg));
    bufp->fullBit(oldp+306,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_19_s0__DOT__Q_reg));
    bufp->fullBit(oldp+307,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_1_s0__DOT__Q_reg));
    bufp->fullBit(oldp+308,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_20_s0__DOT__Q_reg));
    bufp->fullBit(oldp+309,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_21_s0__DOT__Q_reg));
    bufp->fullBit(oldp+310,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_22_s0__DOT__Q_reg));
    bufp->fullBit(oldp+311,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_23_s0__DOT__Q_reg));
    bufp->fullBit(oldp+312,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_24_s0__DOT__Q_reg));
    bufp->fullBit(oldp+313,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_25_s0__DOT__Q_reg));
    bufp->fullBit(oldp+314,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_26_s0__DOT__Q_reg));
    bufp->fullBit(oldp+315,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_27_s0__DOT__Q_reg));
    bufp->fullBit(oldp+316,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_28_s0__DOT__Q_reg));
    bufp->fullBit(oldp+317,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_29_s0__DOT__Q_reg));
    bufp->fullBit(oldp+318,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_2_s0__DOT__Q_reg));
    bufp->fullBit(oldp+319,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_30_s0__DOT__Q_reg));
    bufp->fullBit(oldp+320,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_31_s0__DOT__Q_reg));
    bufp->fullBit(oldp+321,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_3_s0__DOT__Q_reg));
    bufp->fullBit(oldp+322,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_4_s0__DOT__Q_reg));
    bufp->fullBit(oldp+323,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_5_s0__DOT__Q_reg));
    bufp->fullBit(oldp+324,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_6_s0__DOT__Q_reg));
    bufp->fullBit(oldp+325,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_7_s0__DOT__Q_reg));
    bufp->fullBit(oldp+326,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_8_s0__DOT__Q_reg));
    bufp->fullBit(oldp+327,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_9_s0__DOT__Q_reg));
    bufp->fullIData(oldp+328,(vlSelfRef.top__DOT__sdram__DOT__Dq_dqm),32);
    bufp->fullBit(oldp+329,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1));
    bufp->fullBit(oldp+330,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2));
    bufp->fullBit(oldp+331,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4));
    bufp->fullBit(oldp+332,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8));
    bufp->fullBit(oldp+333,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_1));
    bufp->fullBit(oldp+334,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_2));
    bufp->fullBit(oldp+335,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_3));
    bufp->fullIData(oldp+336,(vlSelfRef.top__DOT__IO_sdram_dq),32);
    bufp->fullBit(oldp+337,((1U & vlSelfRef.top__DOT__IO_sdram_dq)));
    bufp->fullBit(oldp+338,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xaU))));
    bufp->fullBit(oldp+339,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xbU))));
    bufp->fullBit(oldp+340,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xcU))));
    bufp->fullBit(oldp+341,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xdU))));
    bufp->fullBit(oldp+342,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xeU))));
    bufp->fullBit(oldp+343,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0xfU))));
    bufp->fullBit(oldp+344,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x10U))));
    bufp->fullBit(oldp+345,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x11U))));
    bufp->fullBit(oldp+346,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x12U))));
    bufp->fullBit(oldp+347,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x13U))));
    bufp->fullBit(oldp+348,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 1U))));
    bufp->fullBit(oldp+349,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x14U))));
    bufp->fullBit(oldp+350,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x15U))));
    bufp->fullBit(oldp+351,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x16U))));
    bufp->fullBit(oldp+352,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x17U))));
    bufp->fullBit(oldp+353,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x18U))));
    bufp->fullBit(oldp+354,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x19U))));
    bufp->fullBit(oldp+355,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+356,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+357,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+358,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+359,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 2U))));
    bufp->fullBit(oldp+360,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+361,((vlSelfRef.top__DOT__IO_sdram_dq 
                             >> 0x1fU)));
    bufp->fullBit(oldp+362,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 3U))));
    bufp->fullBit(oldp+363,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 4U))));
    bufp->fullBit(oldp+364,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 5U))));
    bufp->fullBit(oldp+365,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 6U))));
    bufp->fullBit(oldp+366,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 7U))));
    bufp->fullBit(oldp+367,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 8U))));
    bufp->fullBit(oldp+368,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                   >> 9U))));
    bufp->fullCData(oldp+369,(vlSelfRef.top__DOT__led),6);
    bufp->fullIData(oldp+370,(vlSelfRef.top__DOT__boot_data_out),32);
    bufp->fullIData(oldp+371,(vlSelfRef.top__DOT__boot_instr),32);
    bufp->fullBit(oldp+372,(vlSelfRef.top__DOT__memReady));
    bufp->fullIData(oldp+373,(vlSelfRef.top__DOT__second_stage_instr),32);
    bufp->fullIData(oldp+374,(vlSelfRef.top__DOT__second_stage_mem_out),32);
    bufp->fullIData(oldp+375,(vlSelfRef.top__DOT__program_instr),32);
    bufp->fullIData(oldp+376,(vlSelfRef.top__DOT__program_mem_out),32);
    bufp->fullBit(oldp+377,(vlSelfRef.top__DOT__btn_out));
    bufp->fullBit(oldp+378,(vlSelfRef.top__DOT__error));
    bufp->fullIData(oldp+379,(vlSelfRef.top__DOT__counter),24);
    bufp->fullBit(oldp+380,(vlSelfRef.top__DOT__RAM__DOT__debug_reg));
    bufp->fullBit(oldp+381,(vlSelfRef.top__DOT__SecondStageRAM__DOT__debug_reg));
    bufp->fullBit(oldp+382,(vlSelfRef.top__DOT__bm__DOT__stableDownL));
    bufp->fullBit(oldp+383,(vlSelfRef.top__DOT__bm__DOT__stableUpL));
    bufp->fullBit(oldp+384,(vlSelfRef.top__DOT__bm__DOT__stableLeftL));
    bufp->fullBit(oldp+385,(vlSelfRef.top__DOT__bm__DOT__stableRightL));
    bufp->fullBit(oldp+386,(vlSelfRef.top__DOT__bm__DOT__stableDownR));
    bufp->fullBit(oldp+387,(vlSelfRef.top__DOT__bm__DOT__stableUpR));
    bufp->fullBit(oldp+388,(vlSelfRef.top__DOT__bm__DOT__stableLeftR));
    bufp->fullBit(oldp+389,(vlSelfRef.top__DOT__bm__DOT__stableRightR));
    bufp->fullIData(oldp+390,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__counter),22);
    bufp->fullCData(oldp+391,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__state),2);
    bufp->fullBit(oldp+392,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__btn_last));
    bufp->fullBit(oldp+393,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__newChange));
    bufp->fullBit(oldp+394,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff1));
    bufp->fullBit(oldp+395,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff2));
    bufp->fullBit(oldp+396,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff3));
    bufp->fullIData(oldp+397,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__counter),22);
    bufp->fullCData(oldp+398,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__state),2);
    bufp->fullBit(oldp+399,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__btn_last));
    bufp->fullBit(oldp+400,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__newChange));
    bufp->fullBit(oldp+401,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff1));
    bufp->fullBit(oldp+402,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff2));
    bufp->fullBit(oldp+403,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff3));
    bufp->fullIData(oldp+404,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__counter),22);
    bufp->fullCData(oldp+405,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__state),2);
    bufp->fullBit(oldp+406,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__btn_last));
    bufp->fullBit(oldp+407,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__newChange));
    bufp->fullBit(oldp+408,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff1));
    bufp->fullBit(oldp+409,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff2));
    bufp->fullBit(oldp+410,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff3));
    bufp->fullIData(oldp+411,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__counter),22);
    bufp->fullCData(oldp+412,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__state),2);
    bufp->fullBit(oldp+413,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__btn_last));
    bufp->fullBit(oldp+414,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__newChange));
    bufp->fullBit(oldp+415,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff1));
    bufp->fullBit(oldp+416,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff2));
    bufp->fullBit(oldp+417,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff3));
    bufp->fullIData(oldp+418,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__counter),22);
    bufp->fullCData(oldp+419,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__state),2);
    bufp->fullBit(oldp+420,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__btn_last));
    bufp->fullBit(oldp+421,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__newChange));
    bufp->fullBit(oldp+422,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff1));
    bufp->fullBit(oldp+423,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff2));
    bufp->fullBit(oldp+424,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff3));
    bufp->fullIData(oldp+425,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__counter),22);
    bufp->fullCData(oldp+426,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__state),2);
    bufp->fullBit(oldp+427,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__btn_last));
    bufp->fullBit(oldp+428,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__newChange));
    bufp->fullBit(oldp+429,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff1));
    bufp->fullBit(oldp+430,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff2));
    bufp->fullBit(oldp+431,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff3));
    bufp->fullIData(oldp+432,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__counter),22);
    bufp->fullCData(oldp+433,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__state),2);
    bufp->fullBit(oldp+434,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__btn_last));
    bufp->fullBit(oldp+435,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__newChange));
    bufp->fullBit(oldp+436,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff1));
    bufp->fullBit(oldp+437,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff2));
    bufp->fullBit(oldp+438,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff3));
    bufp->fullIData(oldp+439,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__counter),22);
    bufp->fullCData(oldp+440,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__state),2);
    bufp->fullBit(oldp+441,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__btn_last));
    bufp->fullBit(oldp+442,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__newChange));
    bufp->fullBit(oldp+443,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff1));
    bufp->fullBit(oldp+444,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff2));
    bufp->fullBit(oldp+445,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff3));
    bufp->fullBit(oldp+446,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__memStalled));
    bufp->fullCData(oldp+447,(vlSelfRef.top__DOT__mem__DOT__state),2);
    bufp->fullCData(oldp+448,(vlSelfRef.top__DOT__mem__DOT__cnt),5);
    bufp->fullIData(oldp+449,(vlSelfRef.top__DOT__mem__DOT__saved_data_addr),20);
    bufp->fullBit(oldp+450,(vlSelfRef.top__DOT__mem__DOT__debug_reg));
    bufp->fullCData(oldp+451,(vlSelfRef.top__DOT__ppu_inst__DOT__attributes_Buffer__DOT__dout_a),8);
    bufp->fullCData(oldp+452,(vlSelfRef.top__DOT__ppu_inst__DOT__sprite_BRAM__DOT__dout_a),8);
    bufp->fullCData(oldp+453,(vlSelfRef.top__DOT__ppu_inst__DOT__text_Buffer__DOT__dout_a),8);
    bufp->fullWData(oldp+454,(vlSelfRef.top__DOT__text__DOT__charMemory[0]),512);
    bufp->fullWData(oldp+470,(vlSelfRef.top__DOT__text__DOT__charMemory[1]),512);
    bufp->fullWData(oldp+486,(vlSelfRef.top__DOT__text__DOT__charMemory[2]),512);
    bufp->fullWData(oldp+502,(vlSelfRef.top__DOT__text__DOT__charMemory[3]),512);
    bufp->fullWData(oldp+518,(vlSelfRef.top__DOT__text__DOT__charMemory[4]),512);
    bufp->fullWData(oldp+534,(vlSelfRef.top__DOT__text__DOT__charMemory[5]),512);
    bufp->fullWData(oldp+550,(vlSelfRef.top__DOT__text__DOT__charMemory[6]),512);
    bufp->fullWData(oldp+566,(vlSelfRef.top__DOT__text__DOT__charMemory[7]),512);
    bufp->fullWData(oldp+582,(vlSelfRef.top__DOT__text__DOT__charMemory[8]),512);
    bufp->fullWData(oldp+598,(vlSelfRef.top__DOT__text__DOT__charMemory[9]),512);
    bufp->fullWData(oldp+614,(vlSelfRef.top__DOT__text__DOT__charMemory[10]),512);
    bufp->fullWData(oldp+630,(vlSelfRef.top__DOT__text__DOT__charMemory[11]),512);
    bufp->fullWData(oldp+646,(vlSelfRef.top__DOT__text__DOT__charMemory[12]),512);
    bufp->fullWData(oldp+662,(vlSelfRef.top__DOT__text__DOT__charMemory[13]),512);
    bufp->fullWData(oldp+678,(vlSelfRef.top__DOT__text__DOT__charMemory[14]),512);
    bufp->fullWData(oldp+694,(vlSelfRef.top__DOT__text__DOT__charMemory[15]),512);
    bufp->fullWData(oldp+710,(vlSelfRef.top__DOT__text__DOT__charMemory[16]),512);
    bufp->fullWData(oldp+726,(vlSelfRef.top__DOT__text__DOT__charMemory[17]),512);
    bufp->fullWData(oldp+742,(vlSelfRef.top__DOT__text__DOT__charMemory[18]),512);
    bufp->fullWData(oldp+758,(vlSelfRef.top__DOT__text__DOT__charMemory[19]),512);
    bufp->fullIData(oldp+774,(vlSelfRef.top__DOT__text__DOT__i),32);
    bufp->fullIData(oldp+775,(vlSelfRef.top__DOT__text__DOT__j),32);
    bufp->fullBit(oldp+776,(vlSelfRef.top__DOT__uart_controller__DOT__tx_busy));
    bufp->fullSData(oldp+777,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_period),16);
    bufp->fullCData(oldp+778,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_position),4);
    bufp->fullSData(oldp+779,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_byte),10);
    bufp->fullCData(oldp+780,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_data_reg),8);
    bufp->fullBit(oldp+781,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_run));
    bufp->fullIData(oldp+782,(vlSelfRef.top__DOT__cpu_1__DOT__PC),32);
    bufp->fullBit(oldp+783,(vlSelfRef.top__DOT__ren));
    bufp->fullBit(oldp+784,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemWrite));
    bufp->fullCData(oldp+785,(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector),4);
    bufp->fullCData(oldp+786,(vlSelfRef.top__DOT____Vcellout__cpu_1__debug_error),3);
    bufp->fullIData(oldp+787,((((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                << 0x18U) | (((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                              << 0x10U) 
                                             | (((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                                 << 8U) 
                                                | (IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out))))),32);
    bufp->fullIData(oldp+788,(vlSelfRef.top__DOT__clint_data_out),32);
    bufp->fullBit(oldp+789,(vlSelfRef.top__DOT__clint_inst__DOT__msip));
    bufp->fullBit(oldp+790,(vlSelfRef.top__DOT__mtimer_irq));
    bufp->fullIData(oldp+791,(vlSelfRef.top__DOT__flash_data_out),32);
    bufp->fullIData(oldp+792,(vlSelfRef.top__DOT__counter1M),32);
    bufp->fullIData(oldp+793,(vlSelfRef.top__DOT__counter50M),32);
    bufp->fullIData(oldp+794,((0x3fffffU & (vlSelfRef.top__DOT__cpu_1__DOT__PC 
                                            >> 2U))),22);
    bufp->fullQData(oldp+795,(vlSelfRef.top__DOT__clint_inst__DOT__mtime),64);
    bufp->fullQData(oldp+797,(vlSelfRef.top__DOT__clint_inst__DOT__mtimecmp),64);
    bufp->fullSData(oldp+799,(vlSelfRef.top__DOT__counter1mhz__DOT__subCounter),11);
    bufp->fullSData(oldp+800,(vlSelfRef.top__DOT__counter50mhz__DOT__subCounter),11);
    bufp->fullCData(oldp+801,(vlSelfRef.top__DOT____Vcellout__cpu_1__debug_error),2);
    bufp->fullIData(oldp+802,(vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr),32);
    bufp->fullIData(oldp+803,(vlSelfRef.top__DOT__cpu_1__DOT__PC_IF2),32);
    bufp->fullIData(oldp+804,(vlSelfRef.top__DOT__cpu_1__DOT__IFID_PC),32);
    bufp->fullIData(oldp+805,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC),32);
    bufp->fullIData(oldp+806,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_PC),32);
    bufp->fullIData(oldp+807,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_PC),32);
    bufp->fullIData(oldp+808,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_PC 
                               + vlSelfRef.top__DOT__cpu_1__DOT__signExtend)),32);
    bufp->fullIData(oldp+809,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr),32);
    bufp->fullIData(oldp+810,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_instr),32);
    bufp->fullIData(oldp+811,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_instr),32);
    bufp->fullIData(oldp+812,(vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr),32);
    bufp->fullBit(oldp+813,(vlSelfRef.top__DOT__cpu_1__DOT__inA_is_PC));
    bufp->fullBit(oldp+814,(vlSelfRef.top__DOT__cpu_1__DOT__branch_taken));
    bufp->fullIData(oldp+815,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_signExtend),32);
    bufp->fullIData(oldp+816,(vlSelfRef.top__DOT__cpu_1__DOT__signExtend),32);
    bufp->fullIData(oldp+817,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite) 
                                & (((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                              >> 0xfU)) 
                                    == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr)) 
                                   & (0U != (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr))))
                                ? vlSelfRef.top__DOT__cpu_1__DOT__wRegData
                                : vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data
                               [(0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+818,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite) 
                                & (((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                              >> 0x14U)) 
                                    == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr)) 
                                   & (0U != (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr))))
                                ? vlSelfRef.top__DOT__cpu_1__DOT__wRegData
                                : vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data
                               [(0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                          >> 0x14U))])),32);
    bufp->fullIData(oldp+819,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_rdA),32);
    bufp->fullIData(oldp+820,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_rdB),32);
    bufp->fullCData(oldp+821,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_funct3),3);
    bufp->fullCData(oldp+822,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_funct7),7);
    bufp->fullCData(oldp+823,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs2),5);
    bufp->fullCData(oldp+824,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs1),5);
    bufp->fullCData(oldp+825,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rd),5);
    bufp->fullBit(oldp+826,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegDst));
    bufp->fullBit(oldp+827,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_ALUSrc));
    bufp->fullBit(oldp+828,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_inA_is_PC));
    bufp->fullBit(oldp+829,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_Jump));
    bufp->fullBit(oldp+830,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR));
    bufp->fullCData(oldp+831,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_reg_type),2);
    bufp->fullCData(oldp+832,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_ALUcntrl),3);
    bufp->fullBit(oldp+833,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemRead));
    bufp->fullBit(oldp+834,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemWrite));
    bufp->fullBit(oldp+835,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemToReg));
    bufp->fullBit(oldp+836,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegWrite));
    bufp->fullCData(oldp+837,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_funct3),3);
    bufp->fullCData(oldp+838,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_funct3),3);
    bufp->fullCData(oldp+839,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_RegWriteAddr),5);
    bufp->fullIData(oldp+840,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut),32);
    bufp->fullIData(oldp+841,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_BranchALUOut),32);
    bufp->fullCData(oldp+842,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_reg_type),2);
    bufp->fullBit(oldp+843,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_Zero));
    bufp->fullBit(oldp+844,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_JumpJALR));
    bufp->fullIData(oldp+845,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemWriteData),32);
    bufp->fullBit(oldp+846,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemRead));
    bufp->fullBit(oldp+847,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_RegWrite));
    bufp->fullBit(oldp+848,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemToReg));
    bufp->fullIData(oldp+849,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_DMemOut),32);
    bufp->fullCData(oldp+850,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr),5);
    bufp->fullIData(oldp+851,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_ALUOut),32);
    bufp->fullBit(oldp+852,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_MemToReg));
    bufp->fullBit(oldp+853,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite));
    bufp->fullCData(oldp+854,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_reg_type),2);
    bufp->fullIData(oldp+855,(vlSelfRef.top__DOT__cpu_1__DOT__MemOut),32);
    bufp->fullIData(oldp+856,(vlSelfRef.top__DOT__cpu_1__DOT__wRegData),32);
    bufp->fullBit(oldp+857,(vlSelfRef.top__DOT__cpu_1__DOT__RegDst));
    bufp->fullBit(oldp+858,(vlSelfRef.top__DOT__cpu_1__DOT__MemRead));
    bufp->fullBit(oldp+859,(vlSelfRef.top__DOT__cpu_1__DOT__MemWrite));
    bufp->fullBit(oldp+860,(vlSelfRef.top__DOT__cpu_1__DOT__MemToReg));
    bufp->fullBit(oldp+861,(vlSelfRef.top__DOT__cpu_1__DOT__ALUSrc));
    bufp->fullBit(oldp+862,(vlSelfRef.top__DOT__cpu_1__DOT__PCSrc));
    bufp->fullBit(oldp+863,(vlSelfRef.top__DOT__cpu_1__DOT__RegWrite));
    bufp->fullBit(oldp+864,(vlSelfRef.top__DOT__cpu_1__DOT__Jump));
    bufp->fullBit(oldp+865,(vlSelfRef.top__DOT__cpu_1__DOT__JumpJALR));
    bufp->fullCData(oldp+866,(vlSelfRef.top__DOT__cpu_1__DOT__reg_type),2);
    bufp->fullBit(oldp+867,(vlSelfRef.top__DOT__cpu_1__DOT__Branch));
    bufp->fullBit(oldp+868,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_Branch));
    bufp->fullBit(oldp+869,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_Branch));
    bufp->fullBit(oldp+870,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_exmem));
    bufp->fullCData(oldp+871,((0x7fU & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr)),7);
    bufp->fullCData(oldp+872,((7U & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+873,(vlSelfRef.top__DOT__cpu_1__DOT__ALUcntrl),3);
    bufp->fullIData(oldp+874,(vlSelfRef.top__DOT__cpu_1__DOT__csr_data),32);
    bufp->fullIData(oldp+875,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_data),32);
    bufp->fullIData(oldp+876,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_data),32);
    bufp->fullSData(oldp+877,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+878,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_addr),12);
    bufp->fullSData(oldp+879,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_addr),12);
    bufp->fullSData(oldp+880,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_addr),12);
    bufp->fullBit(oldp+881,(((1U == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__reg_type)) 
                             && ((0U != (3U & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                               >> 0xcU))) 
                                 && ((1U == (3U & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0xcU))) 
                                     || (0U != (0x1fU 
                                                & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0xfU))))))));
    bufp->fullBit(oldp+882,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_write_allowed));
    bufp->fullBit(oldp+883,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_write_allowed));
    bufp->fullBit(oldp+884,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_write_allowed));
    bufp->fullBit(oldp+885,(vlSelfRef.top__DOT__cpu_1__DOT__csr_immidiate));
    bufp->fullCData(oldp+886,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+887,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+888,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+889,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                        >> 7U))),5);
    bufp->fullCData(oldp+890,(((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegDst)
                                ? (IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rd)
                                : (IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs2))),5);
    bufp->fullCData(oldp+891,(vlSelfRef.top__DOT__cpu_1__DOT__ALUOp),4);
    bufp->fullIData(oldp+892,(vlSelfRef.top__DOT__cpu_1__DOT__imm_i),32);
    bufp->fullIData(oldp+893,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+894,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+895,((0xfffff000U & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr)),32);
    bufp->fullIData(oldp+896,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr) 
                                              | (0x800U 
                                                 & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+897,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                        >> 0x16U))),32);
    bufp->fullBit(oldp+898,(vlSelfRef.top__DOT__cpu_1__DOT__keepDelayInstr));
    bufp->fullBit(oldp+899,(vlSelfRef.top__DOT__cpu_1__DOT__int_taken));
    bufp->fullBit(oldp+900,(vlSelfRef.top__DOT__cpu_1__DOT__syscall));
    bufp->fullBit(oldp+901,(vlSelfRef.top__DOT__cpu_1__DOT__trap_in_ID));
    bufp->fullBit(oldp+902,(vlSelfRef.top__DOT__cpu_1__DOT__write_pc_delayed));
    bufp->fullBit(oldp+903,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid_delayed));
    bufp->fullIData(oldp+904,(vlSelfRef.top__DOT__cpu_1__DOT__newmepc),32);
    bufp->fullWData(oldp+905,(vlSelfRef.top__DOT__cpu_1__DOT__pc_string),2040);
    bufp->fullBit(oldp+969,(vlSelfRef.top__DOT__cpu_1__DOT__pc_jumped));
    bufp->fullBit(oldp+970,(vlSelfRef.top__DOT__cpu_1__DOT__mepc_state));
    bufp->fullBit(oldp+971,(vlSelfRef.top__DOT__cpu_1__DOT__flushPipeline));
    bufp->fullQData(oldp+972,(vlSelfRef.top__DOT__cpu_1__DOT__control_alu__DOT__debug_string),64);
    bufp->fullBit(oldp+974,((vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut 
                             >> 0x1fU)));
    bufp->fullIData(oldp+975,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_addr),32);
    bufp->fullIData(oldp+976,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_addr),32);
    bufp->fullIData(oldp+977,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_addr),32);
    bufp->fullCData(oldp+978,(vlSelfRef.top__DOT__cpu_1__DOT__control_bypass_ex__DOT__bypassA),2);
    bufp->fullCData(oldp+979,(vlSelfRef.top__DOT__cpu_1__DOT__control_bypass_ex__DOT__bypassB),2);
    bufp->fullBit(oldp+980,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__bubble_memwb));
    bufp->fullQData(oldp+981,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__debug_string),64);
    bufp->fullIData(oldp+983,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__i),32);
    bufp->fullIData(oldp+984,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[0]),32);
    bufp->fullIData(oldp+985,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[1]),32);
    bufp->fullIData(oldp+986,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[2]),32);
    bufp->fullIData(oldp+987,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[3]),32);
    bufp->fullIData(oldp+988,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[4]),32);
    bufp->fullIData(oldp+989,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[5]),32);
    bufp->fullIData(oldp+990,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[6]),32);
    bufp->fullIData(oldp+991,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[7]),32);
    bufp->fullIData(oldp+992,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[8]),32);
    bufp->fullIData(oldp+993,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[9]),32);
    bufp->fullIData(oldp+994,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[10]),32);
    bufp->fullIData(oldp+995,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[11]),32);
    bufp->fullIData(oldp+996,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[12]),32);
    bufp->fullIData(oldp+997,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[13]),32);
    bufp->fullIData(oldp+998,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[14]),32);
    bufp->fullIData(oldp+999,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[15]),32);
    bufp->fullIData(oldp+1000,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[16]),32);
    bufp->fullIData(oldp+1001,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[17]),32);
    bufp->fullIData(oldp+1002,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[18]),32);
    bufp->fullIData(oldp+1003,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[19]),32);
    bufp->fullIData(oldp+1004,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[20]),32);
    bufp->fullIData(oldp+1005,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[21]),32);
    bufp->fullIData(oldp+1006,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[22]),32);
    bufp->fullIData(oldp+1007,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[23]),32);
    bufp->fullIData(oldp+1008,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[24]),32);
    bufp->fullIData(oldp+1009,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[25]),32);
    bufp->fullIData(oldp+1010,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[26]),32);
    bufp->fullIData(oldp+1011,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[27]),32);
    bufp->fullIData(oldp+1012,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[28]),32);
    bufp->fullIData(oldp+1013,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[29]),32);
    bufp->fullIData(oldp+1014,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[30]),32);
    bufp->fullIData(oldp+1015,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[31]),32);
    bufp->fullBit(oldp+1016,((1U == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__reg_type))));
    bufp->fullIData(oldp+1017,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mstatus),32);
    bufp->fullIData(oldp+1018,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mstatush),32);
    bufp->fullIData(oldp+1019,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__misa),32);
    bufp->fullIData(oldp+1020,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mie),32);
    bufp->fullIData(oldp+1021,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mtvec),32);
    bufp->fullIData(oldp+1022,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mscratch),32);
    bufp->fullIData(oldp+1023,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mepc),32);
    bufp->fullIData(oldp+1024,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mcause),32);
    bufp->fullIData(oldp+1025,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mtval),32);
    bufp->fullIData(oldp+1026,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mip),32);
    bufp->fullCData(oldp+1027,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__enableInterrupts),3);
    bufp->fullCData(oldp+1028,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__pipeline_flush_count),4);
    bufp->fullWData(oldp+1029,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__debug),320);
    bufp->fullWData(oldp+1039,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__debug2),320);
    bufp->fullIData(oldp+1049,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__trap_vector_reg),32);
    bufp->fullCData(oldp+1050,((3U & vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_ALUOut)),2);
    bufp->fullCData(oldp+1051,(vlSelfRef.top__DOT__cpu_1__DOT__mem_read_selector__DOT__byte_sel),8);
    bufp->fullSData(oldp+1052,(vlSelfRef.top__DOT__cpu_1__DOT__mem_read_selector__DOT__half),16);
    bufp->fullCData(oldp+1053,((3U & vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut)),2);
    bufp->fullIData(oldp+1054,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                >> 7U)),25);
    bufp->fullCData(oldp+1055,(vlSelfRef.top__DOT__flashController__DOT__stateDebug),5);
    bufp->fullBit(oldp+1056,(vlSelfRef.top__DOT__ppu_inst__DOT__textEn));
    bufp->fullBit(oldp+1057,(vlSelfRef.top__DOT__ppu_inst__DOT__spritesEn));
    bufp->fullCData(oldp+1058,(vlSelfRef.top__DOT__ppu_inst__DOT__writeAttr),8);
    bufp->fullCData(oldp+1059,(vlSelfRef.top__DOT__ppu_inst__DOT__writeText),8);
    bufp->fullCData(oldp+1060,(vlSelfRef.top__DOT__ppu_inst__DOT__writeSprite),8);
    bufp->fullCData(oldp+1061,(vlSelfRef.top__DOT__ppu_inst__DOT__spriteID),7);
    bufp->fullIData(oldp+1062,(vlSelfRef.top__DOT__ppu_inst__DOT__text_address),32);
    bufp->fullCData(oldp+1063,(vlSelfRef.top__DOT__ppu_inst__DOT__cur_sprite_buf),5);
    bufp->fullSData(oldp+1064,(vlSelfRef.top__DOT__ppu_inst__DOT__buffer_counter),9);
    bufp->fullSData(oldp+1065,(vlSelfRef.top__DOT__ppu_inst__DOT__obj_line_buffer),16);
    bufp->fullBit(oldp+1066,(vlSelfRef.top__DOT__ppu_inst__DOT__hasStarted));
    bufp->fullSData(oldp+1067,((0x7ffU & (vlSelfRef.top__DOT__ppu_inst__DOT__text_address 
                                          >> 1U))),11);
    bufp->fullSData(oldp+1068,((0x3fffU & ((vlSelfRef.top__DOT__ppu_inst__DOT__text_address 
                                            >> 1U) 
                                           - (IData)(0x800U)))),14);
    bufp->fullCData(oldp+1069,(vlSelfRef.top__DOT__uart_controller__DOT__byte_out),8);
    bufp->fullCData(oldp+1070,(vlSelfRef.top__DOT__uart_controller__DOT__tx_data),8);
    bufp->fullBit(oldp+1071,(vlSelfRef.top__DOT__uart_controller__DOT__ena_tx));
    bufp->fullCData(oldp+1072,(vlSelfRef.top__DOT__uart_controller__DOT__ier),8);
    bufp->fullCData(oldp+1073,(vlSelfRef.top__DOT__uart_controller__DOT__lcr),8);
    bufp->fullCData(oldp+1074,(vlSelfRef.top__DOT__uart_controller__DOT__dll),8);
    bufp->fullCData(oldp+1075,(vlSelfRef.top__DOT__uart_controller__DOT__dlm),8);
    bufp->fullBit(oldp+1076,((1U & ((IData)(vlSelfRef.top__DOT__uart_controller__DOT__lcr) 
                                    >> 7U))));
    bufp->fullCData(oldp+1077,(vlSelfRef.top__DOT__R_tmp),5);
    bufp->fullCData(oldp+1078,(vlSelfRef.top__DOT__G_tmp),6);
    bufp->fullCData(oldp+1079,(vlSelfRef.top__DOT__B_tmp),5);
    bufp->fullCData(oldp+1080,(vlSelfRef.top__DOT__ppu_inst__DOT__r),8);
    bufp->fullCData(oldp+1081,(vlSelfRef.top__DOT__ppu_inst__DOT__g),8);
    bufp->fullCData(oldp+1082,(vlSelfRef.top__DOT__ppu_inst__DOT__b),8);
    bufp->fullCData(oldp+1083,(vlSelfRef.top__DOT__O_sdram_dqm),4);
    bufp->fullBit(oldp+1084,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_s__DOT__S));
    bufp->fullBit(oldp+1085,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_2));
    bufp->fullBit(oldp+1086,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn25_2));
    bufp->fullBit(oldp+1087,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn24_2));
    bufp->fullBit(oldp+1088,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn23_2));
    bufp->fullBit(oldp+1089,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn22_2));
    bufp->fullBit(oldp+1090,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn21_2));
    bufp->fullBit(oldp+1091,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn20_2));
    bufp->fullBit(oldp+1092,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn19_2));
    bufp->fullBit(oldp+1093,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn18_2));
    bufp->fullBit(oldp+1094,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn17_2));
    bufp->fullBit(oldp+1095,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn16_2));
    bufp->fullBit(oldp+1096,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn15_2));
    bufp->fullBit(oldp+1097,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn14_2));
    bufp->fullBit(oldp+1098,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2));
    bufp->fullSData(oldp+1099,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt),16);
    bufp->fullBit(oldp+1100,(vlSelfRef.top__DOT__cpu_1__DOT__write_idex));
    bufp->fullBit(oldp+1101,(vlSelfRef.top__DOT__cpu_1__DOT__write_exmem));
    bufp->fullBit(oldp+1102,(vlSelfRef.top__DOT__cpu_1__DOT__write_memwb));
    bufp->fullIData(oldp+1103,(vlSelfRef.top__DOT__flashController__DOT__flash_data_out),32);
    bufp->fullCData(oldp+1104,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__currentByteOut),8);
    bufp->fullCData(oldp+1105,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__currentByteNum),8);
    bufp->fullWData(oldp+1106,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataIn),256);
    bufp->fullWData(oldp+1114,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataInBuffer),256);
    bufp->fullBit(oldp+1122,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__enabling_done));
    bufp->fullIData(oldp+1123,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataToSend),24);
    bufp->fullSData(oldp+1124,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__bitsToSend),9);
    bufp->fullQData(oldp+1125,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__counter),33);
    bufp->fullCData(oldp+1127,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__state),4);
    bufp->fullCData(oldp+1128,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__returnState),4);
    bufp->fullBit(oldp+1129,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataReady));
    bufp->fullBit(oldp+1130,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__write_progress));
    bufp->fullCData(oldp+1131,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutAttr),8);
    bufp->fullCData(oldp+1132,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutSprite),8);
    bufp->fullBit(oldp+1133,(vlSelfRef.top__DOT__uart_controller__DOT__rx_rdy));
    bufp->fullCData(oldp+1134,(vlSelfRef.top__DOT__uart_controller__DOT__rx_data),8);
    bufp->fullCData(oldp+1135,(vlSelfRef.top__DOT__uart_controller__DOT__lsr),8);
    bufp->fullBit(oldp+1136,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_sample_pulse));
    bufp->fullSData(oldp+1137,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_period),16);
    bufp->fullCData(oldp+1138,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_position),4);
    bufp->fullSData(oldp+1139,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_byte),10);
    bufp->fullBit(oldp+1140,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rxd_reg));
    bufp->fullBit(oldp+1141,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__last_rxd));
    bufp->fullBit(oldp+1142,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_busy));
    bufp->fullBit(oldp+1143,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_last_busy));
    bufp->fullBit(oldp+1144,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_trigger));
    bufp->fullBit(oldp+1145,(vlSelfRef.top__DOT__overflow));
    bufp->fullIData(oldp+1146,(vlSelfRef.top__DOT__instr),32);
    bufp->fullIData(oldp+1147,(vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData),32);
    bufp->fullSData(oldp+1148,(vlSelfRef.top__DOT__xcursor),14);
    bufp->fullSData(oldp+1149,(vlSelfRef.top__DOT__ycursor),14);
    bufp->fullBit(oldp+1150,((0x320U <= (IData)(vlSelfRef.top__DOT__xcursor))));
    bufp->fullBit(oldp+1151,((0x320U >= (IData)(vlSelfRef.top__DOT__xcursor))));
    bufp->fullBit(oldp+1152,((0x1e0U >= (IData)(vlSelfRef.top__DOT__ycursor))));
    bufp->fullIData(oldp+1153,(vlSelfRef.top__DOT__cpu_1__DOT__PC_new),32);
    bufp->fullIData(oldp+1154,(vlSelfRef.top__DOT__cpu_1__DOT__ALUInA),32);
    bufp->fullIData(oldp+1155,(vlSelfRef.top__DOT__cpu_1__DOT__ALUInB),32);
    bufp->fullIData(oldp+1156,(vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA),32);
    bufp->fullIData(oldp+1157,(vlSelfRef.top__DOT__cpu_1__DOT__bypassOutB),32);
    bufp->fullIData(oldp+1158,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__out_val),32);
    bufp->fullIData(oldp+1159,(vlSelfRef.top__DOT__cpu_1__DOT__WB_csr_data),32);
    bufp->fullBit(oldp+1160,((0U == vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__out_val)));
    bufp->fullBit(oldp+1161,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid));
    bufp->fullBit(oldp+1162,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_idex));
    bufp->fullBit(oldp+1163,(vlSelfRef.top__DOT__cpu_1__DOT__write_ifid));
    bufp->fullBit(oldp+1164,(vlSelfRef.top__DOT__cpu_1__DOT__write_pc));
    bufp->fullIData(oldp+1165,(vlSelfRef.top__DOT__cpu_1__DOT__trap_vector),32);
    bufp->fullBit(oldp+1166,(vlSelfRef.top__DOT__cpu_1__DOT__trap_waiting));
    bufp->fullWData(oldp+1167,(vlSelfRef.top__DOT__cpu_1__DOT__debug_str),160);
    bufp->fullBit(oldp+1172,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__suppressTrap));
    bufp->fullCData(oldp+1173,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__state),4);
    bufp->fullQData(oldp+1174,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.top__DOT__cpu_1__DOT__ALUInA)) 
                                                  - (QData)((IData)(vlSelfRef.top__DOT__cpu_1__DOT__ALUInB))))),33);
    bufp->fullBit(oldp+1176,(vlSelfRef.top__DOT__flashController__DOT__flash_enable));
    bufp->fullBit(oldp+1177,(vlSelfRef.top__DOT__flashController__DOT__flash_wen));
    bufp->fullBit(oldp+1178,(vlSelfRef.top__DOT__flashController__DOT__flash_ren));
    bufp->fullIData(oldp+1179,(vlSelfRef.top__DOT__flashController__DOT__flash_address),24);
    bufp->fullIData(oldp+1180,(vlSelfRef.top__DOT__flashController__DOT__flash_data_in),32);
    bufp->fullIData(oldp+1181,((0xffffffU & ((IData)(0x500000U) 
                                             + vlSelfRef.top__DOT__flashController__DOT__flash_address))),24);
    bufp->fullIData(oldp+1182,((0xffffffU & vlSelfRef.top__DOT__flashController__DOT__flash_data_in)),24);
    bufp->fullSData(oldp+1183,((0x3fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.top__DOT__xcursor)))),14);
    bufp->fullSData(oldp+1184,((0x3fffU & ((IData)(vlSelfRef.top__DOT__ycursor) 
                                           - (IData)(1U)))),14);
    bufp->fullSData(oldp+1185,((0x3fffU & VL_SHIFTL_III(14,14,14, 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.top__DOT__xcursor) 
                                                            >> 1U)), 1U))),14);
    bufp->fullSData(oldp+1186,((0x1fffU & ((IData)(vlSelfRef.top__DOT__xcursor) 
                                           >> 1U))),13);
    bufp->fullSData(oldp+1187,((0x1fffU & ((IData)(vlSelfRef.top__DOT__ycursor) 
                                           >> 1U))),13);
    bufp->fullSData(oldp+1188,(vlSelfRef.top__DOT__ppu_inst__DOT__spritePointer),15);
    bufp->fullIData(oldp+1189,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[0]),32);
    bufp->fullIData(oldp+1190,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[1]),32);
    bufp->fullIData(oldp+1191,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[2]),32);
    bufp->fullIData(oldp+1192,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[3]),32);
    bufp->fullIData(oldp+1193,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[4]),32);
    bufp->fullIData(oldp+1194,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[5]),32);
    bufp->fullIData(oldp+1195,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[6]),32);
    bufp->fullIData(oldp+1196,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[7]),32);
    bufp->fullIData(oldp+1197,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[8]),32);
    bufp->fullIData(oldp+1198,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[9]),32);
    bufp->fullIData(oldp+1199,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[10]),32);
    bufp->fullIData(oldp+1200,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[11]),32);
    bufp->fullIData(oldp+1201,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[12]),32);
    bufp->fullIData(oldp+1202,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[13]),32);
    bufp->fullIData(oldp+1203,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[14]),32);
    bufp->fullIData(oldp+1204,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[15]),32);
    bufp->fullIData(oldp+1205,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[16]),32);
    bufp->fullIData(oldp+1206,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[17]),32);
    bufp->fullIData(oldp+1207,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[18]),32);
    bufp->fullIData(oldp+1208,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[19]),32);
    bufp->fullIData(oldp+1209,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                               [0U]),32);
    bufp->fullSData(oldp+1210,((0x1ffU & (vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                                          [0U] >> 0x10U))),9);
    bufp->fullSData(oldp+1211,((0x1ffU & vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                                [0U])),9);
    bufp->fullSData(oldp+1212,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[0]),16);
    bufp->fullSData(oldp+1213,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[1]),16);
    bufp->fullSData(oldp+1214,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[2]),16);
    bufp->fullSData(oldp+1215,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[3]),16);
    bufp->fullSData(oldp+1216,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[4]),16);
    bufp->fullSData(oldp+1217,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[5]),16);
    bufp->fullSData(oldp+1218,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[6]),16);
    bufp->fullSData(oldp+1219,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[7]),16);
    bufp->fullSData(oldp+1220,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[8]),16);
    bufp->fullSData(oldp+1221,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[9]),16);
    bufp->fullSData(oldp+1222,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[10]),16);
    bufp->fullSData(oldp+1223,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[11]),16);
    bufp->fullSData(oldp+1224,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[12]),16);
    bufp->fullSData(oldp+1225,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[13]),16);
    bufp->fullSData(oldp+1226,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[14]),16);
    bufp->fullSData(oldp+1227,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[15]),16);
    bufp->fullSData(oldp+1228,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[16]),16);
    bufp->fullSData(oldp+1229,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[17]),16);
    bufp->fullSData(oldp+1230,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[18]),16);
    bufp->fullSData(oldp+1231,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[19]),16);
    bufp->fullSData(oldp+1232,(vlSelfRef.top__DOT__ppu_inst__DOT__objectPointer),10);
    bufp->fullBit(oldp+1233,(vlSelfRef.top__DOT__ppu_inst__DOT__hblank));
    bufp->fullSData(oldp+1234,(vlSelfRef.top__DOT__ppu_inst__DOT__data_in_half),16);
    bufp->fullSData(oldp+1235,((0x3fffU & ((IData)(vlSelfRef.top__DOT__ppu_inst__DOT__hblank)
                                            ? (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__objectPointer)
                                            : (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__spritePointer)))),14);
    bufp->fullWData(oldp+1236,(vlSelfRef.top__DOT__sdram_data_out),512);
    bufp->fullBit(oldp+1252,(vlSelfRef.top__DOT__sdram_ready));
    bufp->fullBit(oldp+1253,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd_en));
    bufp->fullCData(oldp+1254,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd),3);
    bufp->fullBit(oldp+1255,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_precharge_ctrl));
    bufp->fullIData(oldp+1256,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr),21);
    bufp->fullCData(oldp+1257,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm),4);
    bufp->fullIData(oldp+1258,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data),32);
    bufp->fullCData(oldp+1259,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len),8);
    bufp->fullCData(oldp+1260,(vlSelfRef.top__DOT__ram_controller_inst__DOT__state),3);
    bufp->fullCData(oldp+1261,(vlSelfRef.top__DOT__ram_controller_inst__DOT__next_state),3);
    bufp->fullCData(oldp+1262,(vlSelfRef.top__DOT__ram_controller_inst__DOT__read_cnt),3);
    bufp->fullWData(oldp+1263,(vlSelfRef.top__DOT__ram_controller_inst__DOT__test_str),801);
    bufp->fullCData(oldp+1289,(vlSelfRef.top__DOT__ram_controller_inst__DOT__ptr),4);
    bufp->fullSData(oldp+1290,(vlSelfRef.top__DOT__ram_controller_inst__DOT__auto_refresh_counter),10);
    bufp->fullBit(oldp+1291,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1292,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1293,((1U & vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data)));
    bufp->fullBit(oldp+1294,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1295,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1296,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1297,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1298,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1299,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1300,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1301,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1302,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1303,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1304,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 1U))));
    bufp->fullBit(oldp+1305,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1306,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1307,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1308,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1309,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1310,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1311,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1312,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1313,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1314,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1315,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 2U))));
    bufp->fullBit(oldp+1316,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1317,((vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1318,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 3U))));
    bufp->fullBit(oldp+1319,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 4U))));
    bufp->fullBit(oldp+1320,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 5U))));
    bufp->fullBit(oldp+1321,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 6U))));
    bufp->fullBit(oldp+1322,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 7U))));
    bufp->fullBit(oldp+1323,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 8U))));
    bufp->fullBit(oldp+1324,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                    >> 9U))));
    bufp->fullBit(oldp+1325,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm))));
    bufp->fullBit(oldp+1326,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                    >> 1U))));
    bufp->fullBit(oldp+1327,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                    >> 2U))));
    bufp->fullBit(oldp+1328,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                    >> 3U))));
    bufp->fullBit(oldp+1329,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len))));
    bufp->fullBit(oldp+1330,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 1U))));
    bufp->fullBit(oldp+1331,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 2U))));
    bufp->fullBit(oldp+1332,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 3U))));
    bufp->fullBit(oldp+1333,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 4U))));
    bufp->fullBit(oldp+1334,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 5U))));
    bufp->fullBit(oldp+1335,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 6U))));
    bufp->fullBit(oldp+1336,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                    >> 7U))));
    bufp->fullBit(oldp+1337,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd) 
                                    >> 1U))));
    bufp->fullBit(oldp+1338,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd))));
    bufp->fullBit(oldp+1339,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd) 
                                    >> 2U))));
    bufp->fullBit(oldp+1340,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1341,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1342,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1343,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 7U))));
    bufp->fullBit(oldp+1344,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1345,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 6U))));
    bufp->fullBit(oldp+1346,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1347,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1348,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 5U))));
    bufp->fullBit(oldp+1349,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 4U))));
    bufp->fullBit(oldp+1350,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1351,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 3U))));
    bufp->fullBit(oldp+1352,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1353,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 2U))));
    bufp->fullBit(oldp+1354,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1355,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 1U))));
    bufp->fullBit(oldp+1356,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 9U))));
    bufp->fullBit(oldp+1357,((1U & vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr)));
    bufp->fullBit(oldp+1358,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                    >> 8U))));
    bufp->fullBit(oldp+1359,(vlSelfRef.top__DOT__cpuclk));
    bufp->fullBit(oldp+1360,(vlSelfRef.top__DOT__reset));
    bufp->fullCData(oldp+1361,(vlSelfRef.top__DOT__state),3);
    bufp->fullIData(oldp+1362,(vlSelfRef.top__DOT__txCounter),23);
    bufp->fullBit(oldp+1363,(vlSelfRef.top__DOT__flashController__DOT__flash_ready));
    bufp->fullCData(oldp+1364,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt),8);
    __Vtemp_1[0U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                       - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                       ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                               ((IData)(1U) + (0x1ffU 
                                               & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x3f80U) 
                                             - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                     | (Vtop__ConstPool__CONST_hd74c513e_0[
                        (0x1ffU & (((IData)(0x3f80U) 
                                    - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
    __Vtemp_1[1U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                       - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                       ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                               ((IData)(2U) + (0x1ffU 
                                               & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x3f80U) 
                                             - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                     | (Vtop__ConstPool__CONST_hd74c513e_0[
                        ((IData)(1U) + (0x1ffU & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                        >> (0x1fU & ((IData)(0x3f80U) 
                                     - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
    __Vtemp_1[2U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                       - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                       ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                               ((IData)(3U) + (0x1ffU 
                                               & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x3f80U) 
                                             - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                     | (Vtop__ConstPool__CONST_hd74c513e_0[
                        ((IData)(2U) + (0x1ffU & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                        >> (0x1fU & ((IData)(0x3f80U) 
                                     - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
    __Vtemp_1[3U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                       - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                       ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                               ((IData)(4U) + (0x1ffU 
                                               & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                               << ((IData)(0x20U) - 
                                   (0x1fU & ((IData)(0x3f80U) 
                                             - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                     | (Vtop__ConstPool__CONST_hd74c513e_0[
                        ((IData)(3U) + (0x1ffU & (((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                  >> 5U)))] 
                        >> (0x1fU & ((IData)(0x3f80U) 
                                     - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
    bufp->fullWData(oldp+1365,(__Vtemp_1),128);
    bufp->fullBit(oldp+1369,((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))));
    bufp->fullIData(oldp+1370,(vlSelfRef.top__DOT__data_addr),32);
    bufp->fullIData(oldp+1371,(vlSelfRef.top__DOT__data_read),32);
    bufp->fullBit(oldp+1372,(vlSelfRef.top__DOT__mem_ren));
    bufp->fullBit(oldp+1373,(vlSelfRef.top__DOT__mem_wen));
    bufp->fullBit(oldp+1374,(vlSelfRef.top__DOT__screen_wen));
    bufp->fullBit(oldp+1375,(vlSelfRef.top__DOT__second_stage_mem_ren));
    bufp->fullBit(oldp+1376,(vlSelfRef.top__DOT__second_stage_mem_wen));
    bufp->fullBit(oldp+1377,(vlSelfRef.top__DOT__program_mem_ren));
    bufp->fullBit(oldp+1378,(vlSelfRef.top__DOT__program_mem_wen));
    bufp->fullBit(oldp+1379,(vlSelfRef.top__DOT__uart_ren));
    bufp->fullBit(oldp+1380,(vlSelfRef.top__DOT__uart_wen));
    bufp->fullBit(oldp+1381,(vlSelfRef.top__DOT__clint_ren));
    bufp->fullBit(oldp+1382,(vlSelfRef.top__DOT__clint_wen));
    bufp->fullBit(oldp+1383,(vlSelfRef.top__DOT__btn_ren));
    bufp->fullBit(oldp+1384,(vlSelfRef.top__DOT__flash_ren));
    bufp->fullBit(oldp+1385,(vlSelfRef.top__DOT__flash_wen));
    bufp->fullIData(oldp+1386,((0x3ffffU & (vlSelfRef.top__DOT__data_addr 
                                            >> 2U))),18);
    bufp->fullIData(oldp+1387,((0xffU & vlSelfRef.top__DOT__data_addr)),32);
    bufp->fullBit(oldp+1388,(vlSelfRef.top__DOT__bu__DOT__usb_ren));
    bufp->fullCData(oldp+1389,((0xffU & vlSelfRef.top__DOT__data_addr)),8);
    bufp->fullSData(oldp+1390,((0xffffU & vlSelfRef.top__DOT__data_addr)),16);
    bufp->fullSData(oldp+1391,((0x7fffU & (vlSelfRef.top__DOT__data_addr 
                                           >> 1U))),16);
    bufp->fullCData(oldp+1392,((0x7fU & (vlSelfRef.top__DOT__data_addr 
                                         >> 7U))),7);
    bufp->fullCData(oldp+1393,((7U & vlSelfRef.top__DOT__data_addr)),3);
    bufp->fullCData(oldp+1394,(vlSelfRef.top__DOT__uart_controller__DOT__data_in),8);
    bufp->fullBit(oldp+1395,(vlSelfRef.clk));
    bufp->fullBit(oldp+1396,(vlSelfRef.LCD_CLK));
    bufp->fullBit(oldp+1397,(vlSelfRef.LCD_HYNC));
    bufp->fullBit(oldp+1398,(vlSelfRef.LCD_SYNC));
    bufp->fullBit(oldp+1399,(vlSelfRef.LCD_DEN));
    bufp->fullCData(oldp+1400,(vlSelfRef.LCD_R),5);
    bufp->fullCData(oldp+1401,(vlSelfRef.LCD_G),6);
    bufp->fullCData(oldp+1402,(vlSelfRef.LCD_B),5);
    bufp->fullBit(oldp+1403,(vlSelfRef.flashMiso));
    bufp->fullBit(oldp+1404,(vlSelfRef.flashClk));
    bufp->fullBit(oldp+1405,(vlSelfRef.flashMosi));
    bufp->fullBit(oldp+1406,(vlSelfRef.flashCs));
    bufp->fullBit(oldp+1407,(vlSelfRef.uart_rx));
    bufp->fullBit(oldp+1408,(vlSelfRef.uart_tx));
    bufp->fullBit(oldp+1409,(vlSelfRef.btnDownL));
    bufp->fullBit(oldp+1410,(vlSelfRef.btnUpL));
    bufp->fullBit(oldp+1411,(vlSelfRef.btnLeftL));
    bufp->fullBit(oldp+1412,(vlSelfRef.btnRightL));
    bufp->fullBit(oldp+1413,(vlSelfRef.btnDownR));
    bufp->fullBit(oldp+1414,(vlSelfRef.btnUpR));
    bufp->fullBit(oldp+1415,(vlSelfRef.btnLeftR));
    bufp->fullBit(oldp+1416,(vlSelfRef.btnRightR));
    bufp->fullBit(oldp+1417,(vlSelfRef.top__DOT__O_sdram_clk));
    bufp->fullIData(oldp+1418,(((0U == vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr)
                                 ? vlSelfRef.top__DOT__instr
                                 : (((IData)(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid_delayed) 
                                     | (IData)(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid))
                                     ? 0U : vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr))),32);
    bufp->fullIData(oldp+1419,(((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR)
                                 ? vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA
                                 : vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC)),32);
    bufp->fullIData(oldp+1420,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR)
                                  ? vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA
                                  : vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC) 
                                + vlSelfRef.top__DOT__cpu_1__DOT__IDEX_signExtend)),32);
    bufp->fullSData(oldp+1421,(vlSelfRef.top__DOT__ppu_inst__DOT____Vcellinp__attributes_Buffer__addr_b),15);
    bufp->fullIData(oldp+1422,(vlSelfRef.top__DOT__ppu_inst__DOT__i),32);
    bufp->fullSData(oldp+1423,(vlSelfRef.top__DOT__ppu_inst__DOT____Vcellinp__attributes_Buffer__addr_b),11);
    bufp->fullBit(oldp+1424,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdram_power_down));
    bufp->fullBit(oldp+1425,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdram_selfrefresh));
    bufp->fullBit(oldp+1426,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_2));
    bufp->fullBit(oldp+1427,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT1));
    bufp->fullIData(oldp+1428,(vlSelfRef.top__DOT__sdram__DOT__Dq_reg),32);
    bufp->fullBit(oldp+1429,(vlSelfRef.top__DOT__sdram__DOT__CkeZ));
    bufp->fullBit(oldp+1430,(vlSelfRef.top__DOT__sdram__DOT__Sys_clk));
    bufp->fullBit(oldp+1431,(((IData)(vlSelfRef.top__DOT__sdram__DOT__Data_in_enable) 
                              & (IData)(vlSelfRef.top__DOT__sdram__DOT__Sys_clk))));
    bufp->fullCData(oldp+1432,((0xffU & ((1U & (IData)(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector))
                                          ? vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData
                                          : ((2U & (IData)(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector))
                                              ? (vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData 
                                                 >> 8U)
                                              : ((4U 
                                                  & (IData)(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector))
                                                  ? 
                                                 (vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData 
                                                  >> 0x10U)
                                                  : 
                                                 (vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData 
                                                  >> 0x18U)))))),8);
}
