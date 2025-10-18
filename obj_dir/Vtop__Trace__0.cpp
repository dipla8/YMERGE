// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<512>/*16383:0*/ Vtop__ConstPool__CONST_hd74c513e_0;

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__RAM__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__SecondStageRAM__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSelfRef.top__DOT__mem__DOT__i),32);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_cmd_ack_s4__DOT__Q_reg));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_wr_data_valid_s1__DOT__Q_reg)))));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cke_s3__DOT__Q_reg));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_wr_data_valid_s1__DOT__Q_reg));
        bufp->chgCData(oldp+7,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_7_s1__DOT__Q_reg) 
                                   << 7U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_6_s1__DOT__Q_reg) 
                                             << 6U)) 
                                 | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_5_s1__DOT__Q_reg) 
                                     << 5U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_4_s1__DOT__Q_reg) 
                                               << 4U))) 
                                | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_3_s1__DOT__Q_reg) 
                                     << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_2_s1__DOT__Q_reg) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_1_s1__DOT__Q_reg) 
                                       << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_0_s1__DOT__Q_reg))))),8);
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_1_s1__DOT__Q_reg));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_2_s1__DOT__Q_reg));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_3_s1__DOT__Q_reg));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_4_s1__DOT__Q_reg));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_5_s1__DOT__Q_reg));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_6_s1__DOT__Q_reg));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_7_s1__DOT__Q_reg));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_8_s1__DOT__Q_reg));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_0_s1__DOT__Q_reg));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_1_s1__DOT__Q_reg));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_2_s1__DOT__Q_reg));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_3_s1__DOT__Q_reg));
        bufp->chgBit(oldp+20,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_4_s1__DOT__Q_reg));
        bufp->chgBit(oldp+21,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_5_s1__DOT__Q_reg));
        bufp->chgBit(oldp+22,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_6_s1__DOT__Q_reg));
        bufp->chgBit(oldp+23,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_7_s1__DOT__Q_reg));
        bufp->chgQData(oldp+24,(vlSelfRef.top__DOT__sdram__DOT__RFC_chk),64);
        bufp->chgQData(oldp+26,(vlSelfRef.top__DOT__sdram__DOT__RRD_chk),64);
        bufp->chgQData(oldp+28,(vlSelfRef.top__DOT__sdram__DOT__RC_chk0),64);
        bufp->chgQData(oldp+30,(vlSelfRef.top__DOT__sdram__DOT__RC_chk1),64);
        bufp->chgQData(oldp+32,(vlSelfRef.top__DOT__sdram__DOT__RC_chk2),64);
        bufp->chgQData(oldp+34,(vlSelfRef.top__DOT__sdram__DOT__RC_chk3),64);
        bufp->chgQData(oldp+36,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk0),64);
        bufp->chgQData(oldp+38,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk1),64);
        bufp->chgQData(oldp+40,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk2),64);
        bufp->chgQData(oldp+42,(vlSelfRef.top__DOT__sdram__DOT__RAS_chk3),64);
        bufp->chgQData(oldp+44,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk0),64);
        bufp->chgQData(oldp+46,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk1),64);
        bufp->chgQData(oldp+48,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk2),64);
        bufp->chgQData(oldp+50,(vlSelfRef.top__DOT__sdram__DOT__RCD_chk3),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+52,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[0]),2);
        bufp->chgCData(oldp+53,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[1]),2);
        bufp->chgCData(oldp+54,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[2]),2);
        bufp->chgCData(oldp+55,(vlSelfRef.top__DOT__sdram__DOT__Bank_addr[3]),2);
        bufp->chgCData(oldp+56,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[0]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[1]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[2]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.top__DOT__sdram__DOT__Col_addr[3]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.top__DOT__sdram__DOT__Command[0]),4);
        bufp->chgCData(oldp+61,(vlSelfRef.top__DOT__sdram__DOT__Command[1]),4);
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__sdram__DOT__Command[2]),4);
        bufp->chgCData(oldp+63,(vlSelfRef.top__DOT__sdram__DOT__Command[3]),4);
        bufp->chgCData(oldp+64,(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0),4);
        bufp->chgCData(oldp+65,(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg1),4);
        bufp->chgSData(oldp+66,(vlSelfRef.top__DOT__sdram__DOT__Mode_reg),11);
        bufp->chgCData(oldp+67,(vlSelfRef.top__DOT__sdram__DOT__Col_temp),8);
        bufp->chgCData(oldp+68,(vlSelfRef.top__DOT__sdram__DOT__Burst_counter),8);
        bufp->chgBit(oldp+69,(vlSelfRef.top__DOT__sdram__DOT__Act_b0));
        bufp->chgBit(oldp+70,(vlSelfRef.top__DOT__sdram__DOT__Act_b1));
        bufp->chgBit(oldp+71,(vlSelfRef.top__DOT__sdram__DOT__Act_b2));
        bufp->chgBit(oldp+72,(vlSelfRef.top__DOT__sdram__DOT__Act_b3));
        bufp->chgBit(oldp+73,(vlSelfRef.top__DOT__sdram__DOT__Pc_b0));
        bufp->chgBit(oldp+74,(vlSelfRef.top__DOT__sdram__DOT__Pc_b1));
        bufp->chgBit(oldp+75,(vlSelfRef.top__DOT__sdram__DOT__Pc_b2));
        bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__sdram__DOT__Pc_b3));
        bufp->chgCData(oldp+77,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[0]),2);
        bufp->chgCData(oldp+78,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[1]),2);
        bufp->chgCData(oldp+79,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[2]),2);
        bufp->chgCData(oldp+80,(vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[3]),2);
        bufp->chgBit(oldp+81,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[0]));
        bufp->chgBit(oldp+82,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[1]));
        bufp->chgBit(oldp+83,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[2]));
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__sdram__DOT__A10_precharge[3]));
        bufp->chgBit(oldp+85,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[0]));
        bufp->chgBit(oldp+86,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[1]));
        bufp->chgBit(oldp+87,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[2]));
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[3]));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[0]));
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[1]));
        bufp->chgBit(oldp+91,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[2]));
        bufp->chgBit(oldp+92,(vlSelfRef.top__DOT__sdram__DOT__Read_precharge[3]));
        bufp->chgBit(oldp+93,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[0]));
        bufp->chgBit(oldp+94,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[1]));
        bufp->chgBit(oldp+95,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[2]));
        bufp->chgBit(oldp+96,(vlSelfRef.top__DOT__sdram__DOT__Write_precharge[3]));
        bufp->chgBit(oldp+97,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[0]));
        bufp->chgBit(oldp+98,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[1]));
        bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[2]));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[3]));
        bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[0]));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[1]));
        bufp->chgBit(oldp+103,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[2]));
        bufp->chgBit(oldp+104,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[3]));
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[0]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[1]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[2]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[3]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[0]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[1]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[2]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.top__DOT__sdram__DOT__Count_precharge[3]),32);
        bufp->chgBit(oldp+113,(vlSelfRef.top__DOT__sdram__DOT__Data_in_enable));
        bufp->chgBit(oldp+114,(vlSelfRef.top__DOT__sdram__DOT__Data_out_enable));
        bufp->chgCData(oldp+115,(vlSelfRef.top__DOT__sdram__DOT__Bank),2);
        bufp->chgSData(oldp+116,(vlSelfRef.top__DOT__sdram__DOT__Row),11);
        bufp->chgCData(oldp+117,(vlSelfRef.top__DOT__sdram__DOT__Col),8);
        bufp->chgCData(oldp+118,(vlSelfRef.top__DOT__sdram__DOT__Col_brst),8);
        bufp->chgBit(oldp+119,((IData)((7U == (7U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))))));
        bufp->chgBit(oldp+120,((1U & ((IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg) 
                                      >> 9U))));
        bufp->chgQData(oldp+121,(vlSelfRef.top__DOT__sdram__DOT__MRD_chk),64);
        bufp->chgQData(oldp+123,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[0]),64);
        bufp->chgQData(oldp+125,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[1]),64);
        bufp->chgQData(oldp+127,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[2]),64);
        bufp->chgQData(oldp+129,(vlSelfRef.top__DOT__sdram__DOT__WR_chkm[3]),64);
        bufp->chgQData(oldp+131,(vlSelfRef.top__DOT__sdram__DOT__RP_chk0),64);
        bufp->chgQData(oldp+133,(vlSelfRef.top__DOT__sdram__DOT__RP_chk1),64);
        bufp->chgQData(oldp+135,(vlSelfRef.top__DOT__sdram__DOT__RP_chk2),64);
        bufp->chgQData(oldp+137,(vlSelfRef.top__DOT__sdram__DOT__RP_chk3),64);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [8U])))) {
        bufp->chgBit(oldp+139,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg));
        bufp->chgIData(oldp+140,((((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_31_s0__DOT__Q_reg) 
                                       << 0x1fU) | 
                                      ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_30_s0__DOT__Q_reg) 
                                       << 0x1eU)) | 
                                     (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_29_s0__DOT__Q_reg) 
                                       << 0x1dU) | 
                                      ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_28_s0__DOT__Q_reg) 
                                       << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_27_s0__DOT__Q_reg) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_26_s0__DOT__Q_reg) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_25_s0__DOT__Q_reg) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_24_s0__DOT__Q_reg) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_23_s0__DOT__Q_reg) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_22_s0__DOT__Q_reg) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_21_s0__DOT__Q_reg) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_20_s0__DOT__Q_reg) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_19_s0__DOT__Q_reg) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_18_s0__DOT__Q_reg) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_17_s0__DOT__Q_reg) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_16_s0__DOT__Q_reg) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_15_s0__DOT__Q_reg) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_14_s0__DOT__Q_reg) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_13_s0__DOT__Q_reg) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_12_s0__DOT__Q_reg) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_11_s0__DOT__Q_reg) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_10_s0__DOT__Q_reg) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_9_s0__DOT__Q_reg) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_8_s0__DOT__Q_reg) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_7_s0__DOT__Q_reg) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_6_s0__DOT__Q_reg) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_5_s0__DOT__Q_reg) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_4_s0__DOT__Q_reg) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_3_s0__DOT__Q_reg) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_2_s0__DOT__Q_reg) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_1_s0__DOT__Q_reg) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_0_s0__DOT__Q_reg))))))),32);
        bufp->chgBit(oldp+141,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGEALL_s0__DOT__Q_reg));
        bufp->chgBit(oldp+142,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_s0__DOT__Q_reg));
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_IDLE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT0));
        bufp->chgBit(oldp+151,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_2_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+152,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn25_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_3_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+153,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn24_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_4_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+154,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn23_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_5_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+155,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn22_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_6_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+156,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn21_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_7_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+157,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn20_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_8_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+158,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn19_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_9_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+159,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn18_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_10_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+160,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn17_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_11_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+161,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn16_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_12_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+162,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn15_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_13_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+163,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn14_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_14_s0__DOT__Q_reg))));
        bufp->chgBit(oldp+164,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2) 
                                ^ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg))));
        bufp->chgBit(oldp+165,(((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg) 
                                && (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2))));
        bufp->chgBit(oldp+166,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg)))));
        bufp->chgBit(oldp+167,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_wen_n_s0__DOT__Q_reg));
        bufp->chgBit(oldp+168,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cas_n_s0__DOT__Q_reg));
        bufp->chgBit(oldp+169,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ras_n_s0__DOT__Q_reg));
        bufp->chgCData(oldp+170,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_3_s0__DOT__Q_reg) 
                                    << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_2_s0__DOT__Q_reg) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_1_s0__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_0_s0__DOT__Q_reg)))),4);
        bufp->chgCData(oldp+171,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_2_s0__DOT__Q_reg) 
                                   << 2U) | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_1_s0__DOT__Q_reg) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_0_s0__DOT__Q_reg)))),3);
        bufp->chgBit(oldp+172,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_ba_init_1_s0__DOT__Q_reg));
        bufp->chgCData(oldp+173,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_1_s0__DOT__Q_reg) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_0_s0__DOT__Q_reg))),2);
        bufp->chgSData(oldp+174,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_10_s0__DOT__Q_reg) 
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
        bufp->chgBit(oldp+175,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fPrecharge_flag_s0__DOT__Q_reg));
        bufp->chgBit(oldp+176,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_AUTOREFRESH_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+177,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_IDLE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+178,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_ACTIVE2RW_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+179,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_READ_WITHOUT_AUTOPRE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+180,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_WRITE_WITHOUT_AUTOPRE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+181,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_DATAIN2ACTIVE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+182,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg));
        bufp->chgBit(oldp+183,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_INIT_s0__DOT__Q_reg));
        bufp->chgBit(oldp+184,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_POWER_DOWN_s0__DOT__Q_reg));
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_s0__DOT__Q_reg));
        bufp->chgBit(oldp+186,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_WAIT_s0__DOT__Q_reg));
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_EXIT_s0__DOT__Q_reg));
        bufp->chgCData(oldp+188,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_3_s0__DOT__Q_reg) 
                                    << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_2_s0__DOT__Q_reg) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_1_s0__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_0_s0__DOT__Q_reg)))),4);
        bufp->chgCData(oldp+189,(((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_3_s0__DOT__Q_reg) 
                                    << 3U) | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_2_s0__DOT__Q_reg) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_1_s0__DOT__Q_reg) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_0_s0__DOT__Q_reg)))),4);
        bufp->chgCData(oldp+190,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_7_s0__DOT__Q_reg) 
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
        bufp->chgCData(oldp+191,((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_1_s0__DOT__Q_reg) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_0_s0__DOT__Q_reg))),2);
        bufp->chgSData(oldp+192,((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_8_s1__DOT__Q_reg) 
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
        bufp->chgBit(oldp+193,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+194,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_10_s0__DOT__Q_reg));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_11_s0__DOT__Q_reg));
        bufp->chgBit(oldp+196,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_12_s0__DOT__Q_reg));
        bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_13_s0__DOT__Q_reg));
        bufp->chgBit(oldp+198,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_14_s0__DOT__Q_reg));
        bufp->chgBit(oldp+199,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_15_s0__DOT__Q_reg));
        bufp->chgBit(oldp+200,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_16_s0__DOT__Q_reg));
        bufp->chgBit(oldp+201,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_17_s0__DOT__Q_reg));
        bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_18_s0__DOT__Q_reg));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_19_s0__DOT__Q_reg));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_20_s0__DOT__Q_reg));
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_21_s0__DOT__Q_reg));
        bufp->chgBit(oldp+207,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_22_s0__DOT__Q_reg));
        bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_23_s0__DOT__Q_reg));
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_24_s0__DOT__Q_reg));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_25_s0__DOT__Q_reg));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_26_s0__DOT__Q_reg));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_27_s0__DOT__Q_reg));
        bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_28_s0__DOT__Q_reg));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_29_s0__DOT__Q_reg));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_30_s0__DOT__Q_reg));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_31_s0__DOT__Q_reg));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_4_s0__DOT__Q_reg));
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_5_s0__DOT__Q_reg));
        bufp->chgBit(oldp+221,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_6_s0__DOT__Q_reg));
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_7_s0__DOT__Q_reg));
        bufp->chgBit(oldp+223,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_8_s0__DOT__Q_reg));
        bufp->chgBit(oldp+224,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_9_s0__DOT__Q_reg));
        bufp->chgBit(oldp+225,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+226,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+227,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+228,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+229,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_0_s2__DOT__Q_reg));
        bufp->chgBit(oldp+230,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_10_s0__DOT__Q_reg));
        bufp->chgBit(oldp+231,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_11_s0__DOT__Q_reg));
        bufp->chgBit(oldp+232,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_12_s0__DOT__Q_reg));
        bufp->chgBit(oldp+233,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_13_s0__DOT__Q_reg));
        bufp->chgBit(oldp+234,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_14_s0__DOT__Q_reg));
        bufp->chgBit(oldp+235,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg));
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+237,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+238,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+239,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_4_s0__DOT__Q_reg));
        bufp->chgBit(oldp+240,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_5_s0__DOT__Q_reg));
        bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_6_s0__DOT__Q_reg));
        bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_7_s0__DOT__Q_reg));
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_8_s0__DOT__Q_reg));
        bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_9_s0__DOT__Q_reg));
        bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+246,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_10_s0__DOT__Q_reg));
        bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+248,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+249,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_4_s0__DOT__Q_reg));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_5_s0__DOT__Q_reg));
        bufp->chgBit(oldp+252,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_6_s0__DOT__Q_reg));
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_7_s0__DOT__Q_reg));
        bufp->chgBit(oldp+254,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_8_s0__DOT__Q_reg));
        bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_9_s0__DOT__Q_reg));
        bufp->chgBit(oldp+256,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+257,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+258,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+259,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+261,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_0));
        bufp->chgBit(oldp+262,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_1));
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_0));
        bufp->chgBit(oldp+264,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_1));
        bufp->chgBit(oldp+265,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_2));
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx0));
        bufp->chgBit(oldp+267,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx1));
        bufp->chgBit(oldp+268,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_0_s2__DOT__Q_reg));
        bufp->chgBit(oldp+269,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+271,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+272,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+273,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+274,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+275,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+276,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+277,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+278,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+279,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+280,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_4_s0__DOT__Q_reg));
        bufp->chgBit(oldp+281,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+282,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+283,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+284,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_5_s0__DOT__Q_reg));
        bufp->chgBit(oldp+285,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_6_s0__DOT__Q_reg));
        bufp->chgBit(oldp+286,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_7_s0__DOT__Q_reg));
        bufp->chgBit(oldp+287,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+288,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+289,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+290,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+291,((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgIData(oldp+292,((((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_31_s0__DOT__Q_reg) 
                                       << 0x1fU) | 
                                      ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_30_s0__DOT__Q_reg) 
                                       << 0x1eU)) | 
                                     (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_29_s0__DOT__Q_reg) 
                                       << 0x1dU) | 
                                      ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_28_s0__DOT__Q_reg) 
                                       << 0x1cU))) 
                                    | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_27_s0__DOT__Q_reg) 
                                         << 0x1bU) 
                                        | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_26_s0__DOT__Q_reg) 
                                           << 0x1aU)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_25_s0__DOT__Q_reg) 
                                           << 0x19U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_24_s0__DOT__Q_reg) 
                                             << 0x18U)))) 
                                   | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_23_s0__DOT__Q_reg) 
                                         << 0x17U) 
                                        | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_22_s0__DOT__Q_reg) 
                                           << 0x16U)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_21_s0__DOT__Q_reg) 
                                           << 0x15U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_20_s0__DOT__Q_reg) 
                                             << 0x14U))) 
                                      | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_19_s0__DOT__Q_reg) 
                                           << 0x13U) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_18_s0__DOT__Q_reg) 
                                             << 0x12U)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_17_s0__DOT__Q_reg) 
                                             << 0x11U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_16_s0__DOT__Q_reg) 
                                               << 0x10U))))) 
                                  | ((((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_15_s0__DOT__Q_reg) 
                                         << 0xfU) | 
                                        ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_14_s0__DOT__Q_reg) 
                                         << 0xeU)) 
                                       | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_13_s0__DOT__Q_reg) 
                                           << 0xdU) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_12_s0__DOT__Q_reg) 
                                             << 0xcU))) 
                                      | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_11_s0__DOT__Q_reg) 
                                           << 0xbU) 
                                          | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_10_s0__DOT__Q_reg) 
                                             << 0xaU)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_9_s0__DOT__Q_reg) 
                                             << 9U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_8_s0__DOT__Q_reg) 
                                               << 8U)))) 
                                     | (((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_7_s0__DOT__Q_reg) 
                                           << 7U) | 
                                          ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_6_s0__DOT__Q_reg) 
                                           << 6U)) 
                                         | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_5_s0__DOT__Q_reg) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_4_s0__DOT__Q_reg) 
                                               << 4U))) 
                                        | ((((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_3_s0__DOT__Q_reg) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_2_s0__DOT__Q_reg) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_1_s0__DOT__Q_reg) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_0_s0__DOT__Q_reg))))))),32);
        bufp->chgBit(oldp+293,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_finish_s0__DOT__Q_reg));
        bufp->chgBit(oldp+294,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_INIT_DONE_s0__DOT__Q_reg));
        bufp->chgBit(oldp+295,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_0_s0__DOT__Q_reg));
        bufp->chgBit(oldp+296,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_10_s0__DOT__Q_reg));
        bufp->chgBit(oldp+297,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_11_s0__DOT__Q_reg));
        bufp->chgBit(oldp+298,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_12_s0__DOT__Q_reg));
        bufp->chgBit(oldp+299,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_13_s0__DOT__Q_reg));
        bufp->chgBit(oldp+300,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_14_s0__DOT__Q_reg));
        bufp->chgBit(oldp+301,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_15_s0__DOT__Q_reg));
        bufp->chgBit(oldp+302,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_16_s0__DOT__Q_reg));
        bufp->chgBit(oldp+303,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_17_s0__DOT__Q_reg));
        bufp->chgBit(oldp+304,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_18_s0__DOT__Q_reg));
        bufp->chgBit(oldp+305,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_19_s0__DOT__Q_reg));
        bufp->chgBit(oldp+306,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_1_s0__DOT__Q_reg));
        bufp->chgBit(oldp+307,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_20_s0__DOT__Q_reg));
        bufp->chgBit(oldp+308,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_21_s0__DOT__Q_reg));
        bufp->chgBit(oldp+309,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_22_s0__DOT__Q_reg));
        bufp->chgBit(oldp+310,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_23_s0__DOT__Q_reg));
        bufp->chgBit(oldp+311,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_24_s0__DOT__Q_reg));
        bufp->chgBit(oldp+312,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_25_s0__DOT__Q_reg));
        bufp->chgBit(oldp+313,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_26_s0__DOT__Q_reg));
        bufp->chgBit(oldp+314,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_27_s0__DOT__Q_reg));
        bufp->chgBit(oldp+315,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_28_s0__DOT__Q_reg));
        bufp->chgBit(oldp+316,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_29_s0__DOT__Q_reg));
        bufp->chgBit(oldp+317,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_2_s0__DOT__Q_reg));
        bufp->chgBit(oldp+318,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_30_s0__DOT__Q_reg));
        bufp->chgBit(oldp+319,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_31_s0__DOT__Q_reg));
        bufp->chgBit(oldp+320,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_3_s0__DOT__Q_reg));
        bufp->chgBit(oldp+321,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_4_s0__DOT__Q_reg));
        bufp->chgBit(oldp+322,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_5_s0__DOT__Q_reg));
        bufp->chgBit(oldp+323,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_6_s0__DOT__Q_reg));
        bufp->chgBit(oldp+324,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_7_s0__DOT__Q_reg));
        bufp->chgBit(oldp+325,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_8_s0__DOT__Q_reg));
        bufp->chgBit(oldp+326,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_9_s0__DOT__Q_reg));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [7U])))) {
        bufp->chgIData(oldp+327,(vlSelfRef.top__DOT__sdram__DOT__Dq_dqm),32);
        bufp->chgBit(oldp+328,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1));
        bufp->chgBit(oldp+329,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2));
        bufp->chgBit(oldp+330,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4));
        bufp->chgBit(oldp+331,(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8));
        bufp->chgBit(oldp+332,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_1));
        bufp->chgBit(oldp+333,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_2));
        bufp->chgBit(oldp+334,(vlSelfRef.top__DOT__sdram__DOT__Cas_latency_3));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgIData(oldp+335,(vlSelfRef.top__DOT__IO_sdram_dq),32);
        bufp->chgBit(oldp+336,((1U & vlSelfRef.top__DOT__IO_sdram_dq)));
        bufp->chgBit(oldp+337,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xaU))));
        bufp->chgBit(oldp+338,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xbU))));
        bufp->chgBit(oldp+339,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xcU))));
        bufp->chgBit(oldp+340,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xdU))));
        bufp->chgBit(oldp+341,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xeU))));
        bufp->chgBit(oldp+342,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0xfU))));
        bufp->chgBit(oldp+343,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x10U))));
        bufp->chgBit(oldp+344,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x11U))));
        bufp->chgBit(oldp+345,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x12U))));
        bufp->chgBit(oldp+346,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x13U))));
        bufp->chgBit(oldp+347,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 1U))));
        bufp->chgBit(oldp+348,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x14U))));
        bufp->chgBit(oldp+349,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x15U))));
        bufp->chgBit(oldp+350,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x16U))));
        bufp->chgBit(oldp+351,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x17U))));
        bufp->chgBit(oldp+352,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x18U))));
        bufp->chgBit(oldp+353,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x19U))));
        bufp->chgBit(oldp+354,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+355,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+356,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+357,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+358,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 2U))));
        bufp->chgBit(oldp+359,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+360,((vlSelfRef.top__DOT__IO_sdram_dq 
                                >> 0x1fU)));
        bufp->chgBit(oldp+361,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 3U))));
        bufp->chgBit(oldp+362,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 4U))));
        bufp->chgBit(oldp+363,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 5U))));
        bufp->chgBit(oldp+364,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 6U))));
        bufp->chgBit(oldp+365,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 7U))));
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 8U))));
        bufp->chgBit(oldp+367,((1U & (vlSelfRef.top__DOT__IO_sdram_dq 
                                      >> 9U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+368,(vlSelfRef.top__DOT__led),6);
        bufp->chgIData(oldp+369,(vlSelfRef.top__DOT__boot_data_out),32);
        bufp->chgIData(oldp+370,(vlSelfRef.top__DOT__boot_instr),32);
        bufp->chgBit(oldp+371,(vlSelfRef.top__DOT__memReady));
        bufp->chgIData(oldp+372,(vlSelfRef.top__DOT__second_stage_instr),32);
        bufp->chgIData(oldp+373,(vlSelfRef.top__DOT__second_stage_mem_out),32);
        bufp->chgIData(oldp+374,(vlSelfRef.top__DOT__program_instr),32);
        bufp->chgIData(oldp+375,(vlSelfRef.top__DOT__program_mem_out),32);
        bufp->chgBit(oldp+376,(vlSelfRef.top__DOT__btn_out));
        bufp->chgBit(oldp+377,(vlSelfRef.top__DOT__error));
        bufp->chgIData(oldp+378,(vlSelfRef.top__DOT__counter),24);
        bufp->chgBit(oldp+379,(vlSelfRef.top__DOT__RAM__DOT__debug_reg));
        bufp->chgBit(oldp+380,(vlSelfRef.top__DOT__SecondStageRAM__DOT__debug_reg));
        bufp->chgBit(oldp+381,(vlSelfRef.top__DOT__bm__DOT__stableDownL));
        bufp->chgBit(oldp+382,(vlSelfRef.top__DOT__bm__DOT__stableUpL));
        bufp->chgBit(oldp+383,(vlSelfRef.top__DOT__bm__DOT__stableLeftL));
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__bm__DOT__stableRightL));
        bufp->chgBit(oldp+385,(vlSelfRef.top__DOT__bm__DOT__stableDownR));
        bufp->chgBit(oldp+386,(vlSelfRef.top__DOT__bm__DOT__stableUpR));
        bufp->chgBit(oldp+387,(vlSelfRef.top__DOT__bm__DOT__stableLeftR));
        bufp->chgBit(oldp+388,(vlSelfRef.top__DOT__bm__DOT__stableRightR));
        bufp->chgIData(oldp+389,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__counter),22);
        bufp->chgCData(oldp+390,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__state),2);
        bufp->chgBit(oldp+391,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__btn_last));
        bufp->chgBit(oldp+392,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__newChange));
        bufp->chgBit(oldp+393,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff1));
        bufp->chgBit(oldp+394,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff2));
        bufp->chgBit(oldp+395,(vlSelfRef.top__DOT__bm__DOT__debounceDownL__DOT__dff3));
        bufp->chgIData(oldp+396,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__counter),22);
        bufp->chgCData(oldp+397,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__state),2);
        bufp->chgBit(oldp+398,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__btn_last));
        bufp->chgBit(oldp+399,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__newChange));
        bufp->chgBit(oldp+400,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff1));
        bufp->chgBit(oldp+401,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff2));
        bufp->chgBit(oldp+402,(vlSelfRef.top__DOT__bm__DOT__debounceDownR__DOT__dff3));
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__counter),22);
        bufp->chgCData(oldp+404,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__state),2);
        bufp->chgBit(oldp+405,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__btn_last));
        bufp->chgBit(oldp+406,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__newChange));
        bufp->chgBit(oldp+407,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff1));
        bufp->chgBit(oldp+408,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff2));
        bufp->chgBit(oldp+409,(vlSelfRef.top__DOT__bm__DOT__debounceLeftL__DOT__dff3));
        bufp->chgIData(oldp+410,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__counter),22);
        bufp->chgCData(oldp+411,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__state),2);
        bufp->chgBit(oldp+412,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__btn_last));
        bufp->chgBit(oldp+413,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__newChange));
        bufp->chgBit(oldp+414,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff1));
        bufp->chgBit(oldp+415,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff2));
        bufp->chgBit(oldp+416,(vlSelfRef.top__DOT__bm__DOT__debounceLeftR__DOT__dff3));
        bufp->chgIData(oldp+417,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__counter),22);
        bufp->chgCData(oldp+418,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__state),2);
        bufp->chgBit(oldp+419,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__btn_last));
        bufp->chgBit(oldp+420,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__newChange));
        bufp->chgBit(oldp+421,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff1));
        bufp->chgBit(oldp+422,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff2));
        bufp->chgBit(oldp+423,(vlSelfRef.top__DOT__bm__DOT__debounceRightL__DOT__dff3));
        bufp->chgIData(oldp+424,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__counter),22);
        bufp->chgCData(oldp+425,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__state),2);
        bufp->chgBit(oldp+426,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__btn_last));
        bufp->chgBit(oldp+427,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__newChange));
        bufp->chgBit(oldp+428,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff1));
        bufp->chgBit(oldp+429,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff2));
        bufp->chgBit(oldp+430,(vlSelfRef.top__DOT__bm__DOT__debounceRightR__DOT__dff3));
        bufp->chgIData(oldp+431,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__counter),22);
        bufp->chgCData(oldp+432,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__state),2);
        bufp->chgBit(oldp+433,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__btn_last));
        bufp->chgBit(oldp+434,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__newChange));
        bufp->chgBit(oldp+435,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff1));
        bufp->chgBit(oldp+436,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff2));
        bufp->chgBit(oldp+437,(vlSelfRef.top__DOT__bm__DOT__debounceUpL__DOT__dff3));
        bufp->chgIData(oldp+438,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__counter),22);
        bufp->chgCData(oldp+439,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__state),2);
        bufp->chgBit(oldp+440,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__btn_last));
        bufp->chgBit(oldp+441,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__newChange));
        bufp->chgBit(oldp+442,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff1));
        bufp->chgBit(oldp+443,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff2));
        bufp->chgBit(oldp+444,(vlSelfRef.top__DOT__bm__DOT__debounceUpR__DOT__dff3));
        bufp->chgBit(oldp+445,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__memStalled));
        bufp->chgCData(oldp+446,(vlSelfRef.top__DOT__mem__DOT__state),2);
        bufp->chgCData(oldp+447,(vlSelfRef.top__DOT__mem__DOT__cnt),5);
        bufp->chgIData(oldp+448,(vlSelfRef.top__DOT__mem__DOT__saved_data_addr),20);
        bufp->chgBit(oldp+449,(vlSelfRef.top__DOT__mem__DOT__debug_reg));
        bufp->chgCData(oldp+450,(vlSelfRef.top__DOT__ppu_inst__DOT__attributes_Buffer__DOT__dout_a),8);
        bufp->chgCData(oldp+451,(vlSelfRef.top__DOT__ppu_inst__DOT__sprite_BRAM__DOT__dout_a),8);
        bufp->chgCData(oldp+452,(vlSelfRef.top__DOT__ppu_inst__DOT__text_Buffer__DOT__dout_a),8);
        bufp->chgWData(oldp+453,(vlSelfRef.top__DOT__text__DOT__charMemory[0]),512);
        bufp->chgWData(oldp+469,(vlSelfRef.top__DOT__text__DOT__charMemory[1]),512);
        bufp->chgWData(oldp+485,(vlSelfRef.top__DOT__text__DOT__charMemory[2]),512);
        bufp->chgWData(oldp+501,(vlSelfRef.top__DOT__text__DOT__charMemory[3]),512);
        bufp->chgWData(oldp+517,(vlSelfRef.top__DOT__text__DOT__charMemory[4]),512);
        bufp->chgWData(oldp+533,(vlSelfRef.top__DOT__text__DOT__charMemory[5]),512);
        bufp->chgWData(oldp+549,(vlSelfRef.top__DOT__text__DOT__charMemory[6]),512);
        bufp->chgWData(oldp+565,(vlSelfRef.top__DOT__text__DOT__charMemory[7]),512);
        bufp->chgWData(oldp+581,(vlSelfRef.top__DOT__text__DOT__charMemory[8]),512);
        bufp->chgWData(oldp+597,(vlSelfRef.top__DOT__text__DOT__charMemory[9]),512);
        bufp->chgWData(oldp+613,(vlSelfRef.top__DOT__text__DOT__charMemory[10]),512);
        bufp->chgWData(oldp+629,(vlSelfRef.top__DOT__text__DOT__charMemory[11]),512);
        bufp->chgWData(oldp+645,(vlSelfRef.top__DOT__text__DOT__charMemory[12]),512);
        bufp->chgWData(oldp+661,(vlSelfRef.top__DOT__text__DOT__charMemory[13]),512);
        bufp->chgWData(oldp+677,(vlSelfRef.top__DOT__text__DOT__charMemory[14]),512);
        bufp->chgWData(oldp+693,(vlSelfRef.top__DOT__text__DOT__charMemory[15]),512);
        bufp->chgWData(oldp+709,(vlSelfRef.top__DOT__text__DOT__charMemory[16]),512);
        bufp->chgWData(oldp+725,(vlSelfRef.top__DOT__text__DOT__charMemory[17]),512);
        bufp->chgWData(oldp+741,(vlSelfRef.top__DOT__text__DOT__charMemory[18]),512);
        bufp->chgWData(oldp+757,(vlSelfRef.top__DOT__text__DOT__charMemory[19]),512);
        bufp->chgIData(oldp+773,(vlSelfRef.top__DOT__text__DOT__i),32);
        bufp->chgIData(oldp+774,(vlSelfRef.top__DOT__text__DOT__j),32);
        bufp->chgBit(oldp+775,(vlSelfRef.top__DOT__uart_controller__DOT__tx_busy));
        bufp->chgSData(oldp+776,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_period),16);
        bufp->chgCData(oldp+777,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_position),4);
        bufp->chgSData(oldp+778,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_byte),10);
        bufp->chgCData(oldp+779,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_data_reg),8);
        bufp->chgBit(oldp+780,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__tx_run));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+781,(vlSelfRef.top__DOT__cpu_1__DOT__PC),32);
        bufp->chgBit(oldp+782,(vlSelfRef.top__DOT__ren));
        bufp->chgBit(oldp+783,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemWrite));
        bufp->chgCData(oldp+784,(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector),4);
        bufp->chgCData(oldp+785,(vlSelfRef.top__DOT____Vcellout__cpu_1__debug_error),3);
        bufp->chgIData(oldp+786,((((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                   << 0x18U) | (((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.top__DOT__uart_controller__DOT__byte_out))))),32);
        bufp->chgIData(oldp+787,(vlSelfRef.top__DOT__clint_data_out),32);
        bufp->chgBit(oldp+788,(vlSelfRef.top__DOT__clint_inst__DOT__msip));
        bufp->chgBit(oldp+789,(vlSelfRef.top__DOT__mtimer_irq));
        bufp->chgIData(oldp+790,(vlSelfRef.top__DOT__flash_data_out),32);
        bufp->chgIData(oldp+791,(vlSelfRef.top__DOT__counter1M),32);
        bufp->chgIData(oldp+792,(vlSelfRef.top__DOT__counter50M),32);
        bufp->chgIData(oldp+793,((0x3fffffU & (vlSelfRef.top__DOT__cpu_1__DOT__PC 
                                               >> 2U))),22);
        bufp->chgQData(oldp+794,(vlSelfRef.top__DOT__clint_inst__DOT__mtime),64);
        bufp->chgQData(oldp+796,(vlSelfRef.top__DOT__clint_inst__DOT__mtimecmp),64);
        bufp->chgSData(oldp+798,(vlSelfRef.top__DOT__counter1mhz__DOT__subCounter),11);
        bufp->chgSData(oldp+799,(vlSelfRef.top__DOT__counter50mhz__DOT__subCounter),11);
        bufp->chgCData(oldp+800,(vlSelfRef.top__DOT____Vcellout__cpu_1__debug_error),2);
        bufp->chgIData(oldp+801,(vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr),32);
        bufp->chgIData(oldp+802,(vlSelfRef.top__DOT__cpu_1__DOT__PC_IF2),32);
        bufp->chgIData(oldp+803,(vlSelfRef.top__DOT__cpu_1__DOT__IFID_PC),32);
        bufp->chgIData(oldp+804,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC),32);
        bufp->chgIData(oldp+805,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_PC),32);
        bufp->chgIData(oldp+806,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_PC),32);
        bufp->chgIData(oldp+807,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_PC 
                                  + vlSelfRef.top__DOT__cpu_1__DOT__signExtend)),32);
        bufp->chgIData(oldp+808,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr),32);
        bufp->chgIData(oldp+809,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_instr),32);
        bufp->chgIData(oldp+810,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_instr),32);
        bufp->chgIData(oldp+811,(vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr),32);
        bufp->chgBit(oldp+812,(vlSelfRef.top__DOT__cpu_1__DOT__inA_is_PC));
        bufp->chgBit(oldp+813,(vlSelfRef.top__DOT__cpu_1__DOT__branch_taken));
        bufp->chgIData(oldp+814,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_signExtend),32);
        bufp->chgIData(oldp+815,(vlSelfRef.top__DOT__cpu_1__DOT__signExtend),32);
        bufp->chgIData(oldp+816,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite) 
                                   & (((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                 >> 0xfU)) 
                                       == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr))))
                                   ? vlSelfRef.top__DOT__cpu_1__DOT__wRegData
                                   : vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data
                                  [(0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                             >> 0xfU))])),32);
        bufp->chgIData(oldp+817,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite) 
                                   & (((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                 >> 0x14U)) 
                                       == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr)) 
                                      & (0U != (IData)(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr))))
                                   ? vlSelfRef.top__DOT__cpu_1__DOT__wRegData
                                   : vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data
                                  [(0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                             >> 0x14U))])),32);
        bufp->chgIData(oldp+818,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_rdA),32);
        bufp->chgIData(oldp+819,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_rdB),32);
        bufp->chgCData(oldp+820,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_funct3),3);
        bufp->chgCData(oldp+821,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_funct7),7);
        bufp->chgCData(oldp+822,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs2),5);
        bufp->chgCData(oldp+823,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs1),5);
        bufp->chgCData(oldp+824,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rd),5);
        bufp->chgBit(oldp+825,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegDst));
        bufp->chgBit(oldp+826,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_ALUSrc));
        bufp->chgBit(oldp+827,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_inA_is_PC));
        bufp->chgBit(oldp+828,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_Jump));
        bufp->chgBit(oldp+829,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR));
        bufp->chgCData(oldp+830,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_reg_type),2);
        bufp->chgCData(oldp+831,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_ALUcntrl),3);
        bufp->chgBit(oldp+832,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemRead));
        bufp->chgBit(oldp+833,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemWrite));
        bufp->chgBit(oldp+834,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_MemToReg));
        bufp->chgBit(oldp+835,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegWrite));
        bufp->chgCData(oldp+836,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_funct3),3);
        bufp->chgCData(oldp+837,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_funct3),3);
        bufp->chgCData(oldp+838,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_RegWriteAddr),5);
        bufp->chgIData(oldp+839,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut),32);
        bufp->chgIData(oldp+840,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_BranchALUOut),32);
        bufp->chgCData(oldp+841,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_reg_type),2);
        bufp->chgBit(oldp+842,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_Zero));
        bufp->chgBit(oldp+843,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_JumpJALR));
        bufp->chgIData(oldp+844,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemWriteData),32);
        bufp->chgBit(oldp+845,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemRead));
        bufp->chgBit(oldp+846,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_RegWrite));
        bufp->chgBit(oldp+847,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_MemToReg));
        bufp->chgIData(oldp+848,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_DMemOut),32);
        bufp->chgCData(oldp+849,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWriteAddr),5);
        bufp->chgIData(oldp+850,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_ALUOut),32);
        bufp->chgBit(oldp+851,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_MemToReg));
        bufp->chgBit(oldp+852,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_RegWrite));
        bufp->chgCData(oldp+853,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_reg_type),2);
        bufp->chgIData(oldp+854,(vlSelfRef.top__DOT__cpu_1__DOT__MemOut),32);
        bufp->chgIData(oldp+855,(vlSelfRef.top__DOT__cpu_1__DOT__wRegData),32);
        bufp->chgBit(oldp+856,(vlSelfRef.top__DOT__cpu_1__DOT__RegDst));
        bufp->chgBit(oldp+857,(vlSelfRef.top__DOT__cpu_1__DOT__MemRead));
        bufp->chgBit(oldp+858,(vlSelfRef.top__DOT__cpu_1__DOT__MemWrite));
        bufp->chgBit(oldp+859,(vlSelfRef.top__DOT__cpu_1__DOT__MemToReg));
        bufp->chgBit(oldp+860,(vlSelfRef.top__DOT__cpu_1__DOT__ALUSrc));
        bufp->chgBit(oldp+861,(vlSelfRef.top__DOT__cpu_1__DOT__PCSrc));
        bufp->chgBit(oldp+862,(vlSelfRef.top__DOT__cpu_1__DOT__RegWrite));
        bufp->chgBit(oldp+863,(vlSelfRef.top__DOT__cpu_1__DOT__Jump));
        bufp->chgBit(oldp+864,(vlSelfRef.top__DOT__cpu_1__DOT__JumpJALR));
        bufp->chgCData(oldp+865,(vlSelfRef.top__DOT__cpu_1__DOT__reg_type),2);
        bufp->chgBit(oldp+866,(vlSelfRef.top__DOT__cpu_1__DOT__Branch));
        bufp->chgBit(oldp+867,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_Branch));
        bufp->chgBit(oldp+868,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_Branch));
        bufp->chgBit(oldp+869,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_exmem));
        bufp->chgCData(oldp+870,((0x7fU & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr)),7);
        bufp->chgCData(oldp+871,((7U & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+872,(vlSelfRef.top__DOT__cpu_1__DOT__ALUcntrl),3);
        bufp->chgIData(oldp+873,(vlSelfRef.top__DOT__cpu_1__DOT__csr_data),32);
        bufp->chgIData(oldp+874,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_data),32);
        bufp->chgIData(oldp+875,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_data),32);
        bufp->chgSData(oldp+876,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                  >> 0x14U)),12);
        bufp->chgSData(oldp+877,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_addr),12);
        bufp->chgSData(oldp+878,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_addr),12);
        bufp->chgSData(oldp+879,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_addr),12);
        bufp->chgBit(oldp+880,(((1U == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__reg_type)) 
                                && ((0U != (3U & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                  >> 0xcU))) 
                                    && ((1U == (3U 
                                                & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0xcU))) 
                                        || (0U != (0x1fU 
                                                   & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                      >> 0xfU))))))));
        bufp->chgBit(oldp+881,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_write_allowed));
        bufp->chgBit(oldp+882,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_write_allowed));
        bufp->chgBit(oldp+883,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_write_allowed));
        bufp->chgBit(oldp+884,(vlSelfRef.top__DOT__cpu_1__DOT__csr_immidiate));
        bufp->chgCData(oldp+885,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+886,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+887,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+888,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                           >> 7U))),5);
        bufp->chgCData(oldp+889,(((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_RegDst)
                                   ? (IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rd)
                                   : (IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_instr_rs2))),5);
        bufp->chgCData(oldp+890,(vlSelfRef.top__DOT__cpu_1__DOT__ALUOp),4);
        bufp->chgIData(oldp+891,(vlSelfRef.top__DOT__cpu_1__DOT__imm_i),32);
        bufp->chgIData(oldp+892,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+893,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
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
        bufp->chgIData(oldp+894,((0xfffff000U & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr)),32);
        bufp->chgIData(oldp+895,((((- (IData)((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr) 
                                                 | (0x800U 
                                                    & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+896,((0x1fU & (vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                           >> 0x16U))),32);
        bufp->chgBit(oldp+897,(vlSelfRef.top__DOT__cpu_1__DOT__keepDelayInstr));
        bufp->chgBit(oldp+898,(vlSelfRef.top__DOT__cpu_1__DOT__int_taken));
        bufp->chgBit(oldp+899,(vlSelfRef.top__DOT__cpu_1__DOT__syscall));
        bufp->chgBit(oldp+900,(vlSelfRef.top__DOT__cpu_1__DOT__trap_in_ID));
        bufp->chgBit(oldp+901,(vlSelfRef.top__DOT__cpu_1__DOT__write_pc_delayed));
        bufp->chgBit(oldp+902,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid_delayed));
        bufp->chgIData(oldp+903,(vlSelfRef.top__DOT__cpu_1__DOT__newmepc),32);
        bufp->chgWData(oldp+904,(vlSelfRef.top__DOT__cpu_1__DOT__pc_string),2040);
        bufp->chgBit(oldp+968,(vlSelfRef.top__DOT__cpu_1__DOT__pc_jumped));
        bufp->chgBit(oldp+969,(vlSelfRef.top__DOT__cpu_1__DOT__mepc_state));
        bufp->chgBit(oldp+970,(vlSelfRef.top__DOT__cpu_1__DOT__flushPipeline));
        bufp->chgQData(oldp+971,(vlSelfRef.top__DOT__cpu_1__DOT__control_alu__DOT__debug_string),64);
        bufp->chgBit(oldp+973,((vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut 
                                >> 0x1fU)));
        bufp->chgIData(oldp+974,(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_csr_addr),32);
        bufp->chgIData(oldp+975,(vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_csr_addr),32);
        bufp->chgIData(oldp+976,(vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_csr_addr),32);
        bufp->chgCData(oldp+977,(vlSelfRef.top__DOT__cpu_1__DOT__control_bypass_ex__DOT__bypassA),2);
        bufp->chgCData(oldp+978,(vlSelfRef.top__DOT__cpu_1__DOT__control_bypass_ex__DOT__bypassB),2);
        bufp->chgBit(oldp+979,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__bubble_memwb));
        bufp->chgQData(oldp+980,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__debug_string),64);
        bufp->chgIData(oldp+982,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__i),32);
        bufp->chgIData(oldp+983,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[0]),32);
        bufp->chgIData(oldp+984,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[1]),32);
        bufp->chgIData(oldp+985,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[2]),32);
        bufp->chgIData(oldp+986,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[3]),32);
        bufp->chgIData(oldp+987,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[4]),32);
        bufp->chgIData(oldp+988,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[5]),32);
        bufp->chgIData(oldp+989,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[6]),32);
        bufp->chgIData(oldp+990,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[7]),32);
        bufp->chgIData(oldp+991,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[8]),32);
        bufp->chgIData(oldp+992,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[9]),32);
        bufp->chgIData(oldp+993,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[10]),32);
        bufp->chgIData(oldp+994,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[11]),32);
        bufp->chgIData(oldp+995,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[12]),32);
        bufp->chgIData(oldp+996,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[13]),32);
        bufp->chgIData(oldp+997,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[14]),32);
        bufp->chgIData(oldp+998,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[15]),32);
        bufp->chgIData(oldp+999,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[16]),32);
        bufp->chgIData(oldp+1000,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[17]),32);
        bufp->chgIData(oldp+1001,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[18]),32);
        bufp->chgIData(oldp+1002,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[19]),32);
        bufp->chgIData(oldp+1003,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[20]),32);
        bufp->chgIData(oldp+1004,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[21]),32);
        bufp->chgIData(oldp+1005,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[22]),32);
        bufp->chgIData(oldp+1006,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[23]),32);
        bufp->chgIData(oldp+1007,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[24]),32);
        bufp->chgIData(oldp+1008,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[25]),32);
        bufp->chgIData(oldp+1009,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[26]),32);
        bufp->chgIData(oldp+1010,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[27]),32);
        bufp->chgIData(oldp+1011,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[28]),32);
        bufp->chgIData(oldp+1012,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[29]),32);
        bufp->chgIData(oldp+1013,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[30]),32);
        bufp->chgIData(oldp+1014,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_regs__DOT__data[31]),32);
        bufp->chgBit(oldp+1015,((1U == (IData)(vlSelfRef.top__DOT__cpu_1__DOT__reg_type))));
        bufp->chgIData(oldp+1016,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mstatus),32);
        bufp->chgIData(oldp+1017,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mstatush),32);
        bufp->chgIData(oldp+1018,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__misa),32);
        bufp->chgIData(oldp+1019,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mie),32);
        bufp->chgIData(oldp+1020,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mtvec),32);
        bufp->chgIData(oldp+1021,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mscratch),32);
        bufp->chgIData(oldp+1022,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mepc),32);
        bufp->chgIData(oldp+1023,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mcause),32);
        bufp->chgIData(oldp+1024,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mtval),32);
        bufp->chgIData(oldp+1025,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__mip),32);
        bufp->chgCData(oldp+1026,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__enableInterrupts),3);
        bufp->chgCData(oldp+1027,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__pipeline_flush_count),4);
        bufp->chgWData(oldp+1028,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__debug),320);
        bufp->chgWData(oldp+1038,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__debug2),320);
        bufp->chgIData(oldp+1048,(vlSelfRef.top__DOT__cpu_1__DOT__csrFile__DOT__trap_vector_reg),32);
        bufp->chgCData(oldp+1049,((3U & vlSelfRef.top__DOT__cpu_1__DOT__MEMWB_ALUOut)),2);
        bufp->chgCData(oldp+1050,(vlSelfRef.top__DOT__cpu_1__DOT__mem_read_selector__DOT__byte_sel),8);
        bufp->chgSData(oldp+1051,(vlSelfRef.top__DOT__cpu_1__DOT__mem_read_selector__DOT__half),16);
        bufp->chgCData(oldp+1052,((3U & vlSelfRef.top__DOT__cpu_1__DOT__EXMEM_ALUOut)),2);
        bufp->chgIData(oldp+1053,((vlSelfRef.top__DOT__cpu_1__DOT__IFID_instr 
                                   >> 7U)),25);
        bufp->chgCData(oldp+1054,(vlSelfRef.top__DOT__flashController__DOT__stateDebug),5);
        bufp->chgBit(oldp+1055,(vlSelfRef.top__DOT__ppu_inst__DOT__textEn));
        bufp->chgBit(oldp+1056,(vlSelfRef.top__DOT__ppu_inst__DOT__spritesEn));
        bufp->chgCData(oldp+1057,(vlSelfRef.top__DOT__ppu_inst__DOT__writeAttr),8);
        bufp->chgCData(oldp+1058,(vlSelfRef.top__DOT__ppu_inst__DOT__writeText),8);
        bufp->chgCData(oldp+1059,(vlSelfRef.top__DOT__ppu_inst__DOT__writeSprite),8);
        bufp->chgCData(oldp+1060,(vlSelfRef.top__DOT__ppu_inst__DOT__spriteID),7);
        bufp->chgIData(oldp+1061,(vlSelfRef.top__DOT__ppu_inst__DOT__text_address),32);
        bufp->chgCData(oldp+1062,(vlSelfRef.top__DOT__ppu_inst__DOT__cur_sprite_buf),5);
        bufp->chgSData(oldp+1063,(vlSelfRef.top__DOT__ppu_inst__DOT__buffer_counter),9);
        bufp->chgSData(oldp+1064,(vlSelfRef.top__DOT__ppu_inst__DOT__obj_line_buffer),16);
        bufp->chgBit(oldp+1065,(vlSelfRef.top__DOT__ppu_inst__DOT__hasStarted));
        bufp->chgSData(oldp+1066,((0x7ffU & (vlSelfRef.top__DOT__ppu_inst__DOT__text_address 
                                             >> 1U))),11);
        bufp->chgSData(oldp+1067,((0x3fffU & ((vlSelfRef.top__DOT__ppu_inst__DOT__text_address 
                                               >> 1U) 
                                              - (IData)(0x800U)))),14);
        bufp->chgCData(oldp+1068,(vlSelfRef.top__DOT__uart_controller__DOT__byte_out),8);
        bufp->chgCData(oldp+1069,(vlSelfRef.top__DOT__uart_controller__DOT__tx_data),8);
        bufp->chgBit(oldp+1070,(vlSelfRef.top__DOT__uart_controller__DOT__ena_tx));
        bufp->chgCData(oldp+1071,(vlSelfRef.top__DOT__uart_controller__DOT__ier),8);
        bufp->chgCData(oldp+1072,(vlSelfRef.top__DOT__uart_controller__DOT__lcr),8);
        bufp->chgCData(oldp+1073,(vlSelfRef.top__DOT__uart_controller__DOT__dll),8);
        bufp->chgCData(oldp+1074,(vlSelfRef.top__DOT__uart_controller__DOT__dlm),8);
        bufp->chgBit(oldp+1075,((1U & ((IData)(vlSelfRef.top__DOT__uart_controller__DOT__lcr) 
                                       >> 7U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+1076,(vlSelfRef.top__DOT__R_tmp),5);
        bufp->chgCData(oldp+1077,(vlSelfRef.top__DOT__G_tmp),6);
        bufp->chgCData(oldp+1078,(vlSelfRef.top__DOT__B_tmp),5);
        bufp->chgCData(oldp+1079,(vlSelfRef.top__DOT__ppu_inst__DOT__r),8);
        bufp->chgCData(oldp+1080,(vlSelfRef.top__DOT__ppu_inst__DOT__g),8);
        bufp->chgCData(oldp+1081,(vlSelfRef.top__DOT__ppu_inst__DOT__b),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgCData(oldp+1082,(vlSelfRef.top__DOT__O_sdram_dqm),4);
        bufp->chgBit(oldp+1083,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_s__DOT__S));
        bufp->chgBit(oldp+1084,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn26_2));
        bufp->chgBit(oldp+1085,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn25_2));
        bufp->chgBit(oldp+1086,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn24_2));
        bufp->chgBit(oldp+1087,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn23_2));
        bufp->chgBit(oldp+1088,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn22_2));
        bufp->chgBit(oldp+1089,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn21_2));
        bufp->chgBit(oldp+1090,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn20_2));
        bufp->chgBit(oldp+1091,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn19_2));
        bufp->chgBit(oldp+1092,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn18_2));
        bufp->chgBit(oldp+1093,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn17_2));
        bufp->chgBit(oldp+1094,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn16_2));
        bufp->chgBit(oldp+1095,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn15_2));
        bufp->chgBit(oldp+1096,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn14_2));
        bufp->chgBit(oldp+1097,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fn13_2));
        bufp->chgSData(oldp+1098,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1099,(vlSelfRef.top__DOT__cpu_1__DOT__write_idex));
        bufp->chgBit(oldp+1100,(vlSelfRef.top__DOT__cpu_1__DOT__write_exmem));
        bufp->chgBit(oldp+1101,(vlSelfRef.top__DOT__cpu_1__DOT__write_memwb));
        bufp->chgIData(oldp+1102,(vlSelfRef.top__DOT__flashController__DOT__flash_data_out),32);
        bufp->chgCData(oldp+1103,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__currentByteOut),8);
        bufp->chgCData(oldp+1104,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__currentByteNum),8);
        bufp->chgWData(oldp+1105,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataIn),256);
        bufp->chgWData(oldp+1113,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataInBuffer),256);
        bufp->chgBit(oldp+1121,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__enabling_done));
        bufp->chgIData(oldp+1122,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataToSend),24);
        bufp->chgSData(oldp+1123,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__bitsToSend),9);
        bufp->chgQData(oldp+1124,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__counter),33);
        bufp->chgCData(oldp+1126,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__state),4);
        bufp->chgCData(oldp+1127,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__returnState),4);
        bufp->chgBit(oldp+1128,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__dataReady));
        bufp->chgBit(oldp+1129,(vlSelfRef.top__DOT__flashController__DOT__navigator__DOT__write_progress));
        bufp->chgCData(oldp+1130,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutAttr),8);
        bufp->chgCData(oldp+1131,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutSprite),8);
        bufp->chgBit(oldp+1132,(vlSelfRef.top__DOT__uart_controller__DOT__rx_rdy));
        bufp->chgCData(oldp+1133,(vlSelfRef.top__DOT__uart_controller__DOT__rx_data),8);
        bufp->chgCData(oldp+1134,(vlSelfRef.top__DOT__uart_controller__DOT__lsr),8);
        bufp->chgBit(oldp+1135,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_sample_pulse));
        bufp->chgSData(oldp+1136,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_period),16);
        bufp->chgCData(oldp+1137,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_position),4);
        bufp->chgSData(oldp+1138,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_byte),10);
        bufp->chgBit(oldp+1139,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rxd_reg));
        bufp->chgBit(oldp+1140,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__last_rxd));
        bufp->chgBit(oldp+1141,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_busy));
        bufp->chgBit(oldp+1142,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_last_busy));
        bufp->chgBit(oldp+1143,(vlSelfRef.top__DOT__uart_controller__DOT__uart_inst__DOT__rx_trigger));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+1144,(vlSelfRef.top__DOT__overflow));
        bufp->chgIData(oldp+1145,(vlSelfRef.top__DOT__instr),32);
        bufp->chgIData(oldp+1146,(vlSelfRef.top__DOT__cpu_1__DOT__MemWriteData),32);
        bufp->chgSData(oldp+1147,(vlSelfRef.top__DOT__xcursor),14);
        bufp->chgSData(oldp+1148,(vlSelfRef.top__DOT__ycursor),14);
        bufp->chgBit(oldp+1149,((0x320U <= (IData)(vlSelfRef.top__DOT__xcursor))));
        bufp->chgBit(oldp+1150,((0x320U >= (IData)(vlSelfRef.top__DOT__xcursor))));
        bufp->chgBit(oldp+1151,((0x1e0U >= (IData)(vlSelfRef.top__DOT__ycursor))));
        bufp->chgIData(oldp+1152,(vlSelfRef.top__DOT__cpu_1__DOT__PC_new),32);
        bufp->chgIData(oldp+1153,(vlSelfRef.top__DOT__cpu_1__DOT__ALUInA),32);
        bufp->chgIData(oldp+1154,(vlSelfRef.top__DOT__cpu_1__DOT__ALUInB),32);
        bufp->chgIData(oldp+1155,(vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA),32);
        bufp->chgIData(oldp+1156,(vlSelfRef.top__DOT__cpu_1__DOT__bypassOutB),32);
        bufp->chgIData(oldp+1157,(vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__out_val),32);
        bufp->chgIData(oldp+1158,(vlSelfRef.top__DOT__cpu_1__DOT__WB_csr_data),32);
        bufp->chgBit(oldp+1159,((0U == vlSelfRef.top__DOT__cpu_1__DOT__cpu_alu__DOT__out_val)));
        bufp->chgBit(oldp+1160,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid));
        bufp->chgBit(oldp+1161,(vlSelfRef.top__DOT__cpu_1__DOT__bubble_idex));
        bufp->chgBit(oldp+1162,(vlSelfRef.top__DOT__cpu_1__DOT__write_ifid));
        bufp->chgBit(oldp+1163,(vlSelfRef.top__DOT__cpu_1__DOT__write_pc));
        bufp->chgIData(oldp+1164,(vlSelfRef.top__DOT__cpu_1__DOT__trap_vector),32);
        bufp->chgBit(oldp+1165,(vlSelfRef.top__DOT__cpu_1__DOT__trap_waiting));
        bufp->chgWData(oldp+1166,(vlSelfRef.top__DOT__cpu_1__DOT__debug_str),160);
        bufp->chgBit(oldp+1171,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__suppressTrap));
        bufp->chgCData(oldp+1172,(vlSelfRef.top__DOT__cpu_1__DOT__control_stall_id__DOT__state),4);
        bufp->chgQData(oldp+1173,((0x1ffffffffULL & 
                                   ((QData)((IData)(vlSelfRef.top__DOT__cpu_1__DOT__ALUInA)) 
                                    - (QData)((IData)(vlSelfRef.top__DOT__cpu_1__DOT__ALUInB))))),33);
        bufp->chgBit(oldp+1175,(vlSelfRef.top__DOT__flashController__DOT__flash_enable));
        bufp->chgBit(oldp+1176,(vlSelfRef.top__DOT__flashController__DOT__flash_wen));
        bufp->chgBit(oldp+1177,(vlSelfRef.top__DOT__flashController__DOT__flash_ren));
        bufp->chgIData(oldp+1178,(vlSelfRef.top__DOT__flashController__DOT__flash_address),24);
        bufp->chgIData(oldp+1179,(vlSelfRef.top__DOT__flashController__DOT__flash_data_in),32);
        bufp->chgIData(oldp+1180,((0xffffffU & ((IData)(0x500000U) 
                                                + vlSelfRef.top__DOT__flashController__DOT__flash_address))),24);
        bufp->chgIData(oldp+1181,((0xffffffU & vlSelfRef.top__DOT__flashController__DOT__flash_data_in)),24);
        bufp->chgSData(oldp+1182,((0x3fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.top__DOT__xcursor)))),14);
        bufp->chgSData(oldp+1183,((0x3fffU & ((IData)(vlSelfRef.top__DOT__ycursor) 
                                              - (IData)(1U)))),14);
        bufp->chgSData(oldp+1184,((0x3fffU & VL_SHIFTL_III(14,14,14, 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.top__DOT__xcursor) 
                                                               >> 1U)), 1U))),14);
        bufp->chgSData(oldp+1185,((0x1fffU & ((IData)(vlSelfRef.top__DOT__xcursor) 
                                              >> 1U))),13);
        bufp->chgSData(oldp+1186,((0x1fffU & ((IData)(vlSelfRef.top__DOT__ycursor) 
                                              >> 1U))),13);
        bufp->chgSData(oldp+1187,(vlSelfRef.top__DOT__ppu_inst__DOT__spritePointer),15);
        bufp->chgIData(oldp+1188,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[0]),32);
        bufp->chgIData(oldp+1189,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[1]),32);
        bufp->chgIData(oldp+1190,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[2]),32);
        bufp->chgIData(oldp+1191,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[3]),32);
        bufp->chgIData(oldp+1192,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[4]),32);
        bufp->chgIData(oldp+1193,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[5]),32);
        bufp->chgIData(oldp+1194,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[6]),32);
        bufp->chgIData(oldp+1195,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[7]),32);
        bufp->chgIData(oldp+1196,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[8]),32);
        bufp->chgIData(oldp+1197,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[9]),32);
        bufp->chgIData(oldp+1198,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[10]),32);
        bufp->chgIData(oldp+1199,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[11]),32);
        bufp->chgIData(oldp+1200,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[12]),32);
        bufp->chgIData(oldp+1201,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[13]),32);
        bufp->chgIData(oldp+1202,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[14]),32);
        bufp->chgIData(oldp+1203,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[15]),32);
        bufp->chgIData(oldp+1204,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[16]),32);
        bufp->chgIData(oldp+1205,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[17]),32);
        bufp->chgIData(oldp+1206,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[18]),32);
        bufp->chgIData(oldp+1207,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes[19]),32);
        bufp->chgIData(oldp+1208,(vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                                  [0U]),32);
        bufp->chgSData(oldp+1209,((0x1ffU & (vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                                             [0U] >> 0x10U))),9);
        bufp->chgSData(oldp+1210,((0x1ffU & vlSelfRef.top__DOT__ppu_inst__DOT__objectAttributes
                                   [0U])),9);
        bufp->chgSData(oldp+1211,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[0]),16);
        bufp->chgSData(oldp+1212,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[1]),16);
        bufp->chgSData(oldp+1213,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[2]),16);
        bufp->chgSData(oldp+1214,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[3]),16);
        bufp->chgSData(oldp+1215,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[4]),16);
        bufp->chgSData(oldp+1216,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[5]),16);
        bufp->chgSData(oldp+1217,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[6]),16);
        bufp->chgSData(oldp+1218,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[7]),16);
        bufp->chgSData(oldp+1219,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[8]),16);
        bufp->chgSData(oldp+1220,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[9]),16);
        bufp->chgSData(oldp+1221,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[10]),16);
        bufp->chgSData(oldp+1222,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[11]),16);
        bufp->chgSData(oldp+1223,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[12]),16);
        bufp->chgSData(oldp+1224,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[13]),16);
        bufp->chgSData(oldp+1225,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[14]),16);
        bufp->chgSData(oldp+1226,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[15]),16);
        bufp->chgSData(oldp+1227,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[16]),16);
        bufp->chgSData(oldp+1228,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[17]),16);
        bufp->chgSData(oldp+1229,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[18]),16);
        bufp->chgSData(oldp+1230,(vlSelfRef.top__DOT__ppu_inst__DOT__lineBuffer[19]),16);
        bufp->chgSData(oldp+1231,(vlSelfRef.top__DOT__ppu_inst__DOT__objectPointer),10);
        bufp->chgBit(oldp+1232,(vlSelfRef.top__DOT__ppu_inst__DOT__hblank));
        bufp->chgSData(oldp+1233,(vlSelfRef.top__DOT__ppu_inst__DOT__data_in_half),16);
        bufp->chgSData(oldp+1234,((0x3fffU & ((IData)(vlSelfRef.top__DOT__ppu_inst__DOT__hblank)
                                               ? (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__objectPointer)
                                               : (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__spritePointer)))),14);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xbU]))) {
        bufp->chgWData(oldp+1235,(vlSelfRef.top__DOT__sdram_data_out),512);
        bufp->chgBit(oldp+1251,(vlSelfRef.top__DOT__sdram_ready));
        bufp->chgBit(oldp+1252,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd_en));
        bufp->chgCData(oldp+1253,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd),3);
        bufp->chgBit(oldp+1254,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_precharge_ctrl));
        bufp->chgIData(oldp+1255,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr),21);
        bufp->chgCData(oldp+1256,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm),4);
        bufp->chgIData(oldp+1257,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data),32);
        bufp->chgCData(oldp+1258,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len),8);
        bufp->chgCData(oldp+1259,(vlSelfRef.top__DOT__ram_controller_inst__DOT__state),3);
        bufp->chgCData(oldp+1260,(vlSelfRef.top__DOT__ram_controller_inst__DOT__next_state),3);
        bufp->chgCData(oldp+1261,(vlSelfRef.top__DOT__ram_controller_inst__DOT__read_cnt),3);
        bufp->chgWData(oldp+1262,(vlSelfRef.top__DOT__ram_controller_inst__DOT__test_str),801);
        bufp->chgCData(oldp+1288,(vlSelfRef.top__DOT__ram_controller_inst__DOT__ptr),4);
        bufp->chgSData(oldp+1289,(vlSelfRef.top__DOT__ram_controller_inst__DOT__auto_refresh_counter),10);
        bufp->chgBit(oldp+1290,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1291,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1292,((1U & vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data)));
        bufp->chgBit(oldp+1293,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1294,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1295,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1296,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1297,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1298,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1299,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1300,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1301,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1302,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1303,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 1U))));
        bufp->chgBit(oldp+1304,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1305,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1306,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1307,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1308,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1309,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1310,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1311,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1312,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1313,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1314,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 2U))));
        bufp->chgBit(oldp+1315,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1316,((vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1317,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 3U))));
        bufp->chgBit(oldp+1318,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 4U))));
        bufp->chgBit(oldp+1319,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 5U))));
        bufp->chgBit(oldp+1320,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 6U))));
        bufp->chgBit(oldp+1321,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 7U))));
        bufp->chgBit(oldp+1322,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 8U))));
        bufp->chgBit(oldp+1323,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data 
                                       >> 9U))));
        bufp->chgBit(oldp+1324,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm))));
        bufp->chgBit(oldp+1325,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                       >> 1U))));
        bufp->chgBit(oldp+1326,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                       >> 2U))));
        bufp->chgBit(oldp+1327,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_dqm) 
                                       >> 3U))));
        bufp->chgBit(oldp+1328,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len))));
        bufp->chgBit(oldp+1329,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 1U))));
        bufp->chgBit(oldp+1330,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 2U))));
        bufp->chgBit(oldp+1331,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 3U))));
        bufp->chgBit(oldp+1332,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 4U))));
        bufp->chgBit(oldp+1333,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 5U))));
        bufp->chgBit(oldp+1334,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 6U))));
        bufp->chgBit(oldp+1335,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_data_len) 
                                       >> 7U))));
        bufp->chgBit(oldp+1336,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd) 
                                       >> 1U))));
        bufp->chgBit(oldp+1337,((1U & (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd))));
        bufp->chgBit(oldp+1338,((1U & ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_cmd) 
                                       >> 2U))));
        bufp->chgBit(oldp+1339,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1340,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1341,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1342,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 7U))));
        bufp->chgBit(oldp+1343,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1344,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 6U))));
        bufp->chgBit(oldp+1345,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1346,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1347,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 5U))));
        bufp->chgBit(oldp+1348,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 4U))));
        bufp->chgBit(oldp+1349,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1350,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 3U))));
        bufp->chgBit(oldp+1351,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1352,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 2U))));
        bufp->chgBit(oldp+1353,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1354,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 1U))));
        bufp->chgBit(oldp+1355,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 9U))));
        bufp->chgBit(oldp+1356,((1U & vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr)));
        bufp->chgBit(oldp+1357,((1U & (vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdrc_addr 
                                       >> 8U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+1358,(vlSelfRef.top__DOT__cpuclk));
        bufp->chgBit(oldp+1359,(vlSelfRef.top__DOT__reset));
        bufp->chgCData(oldp+1360,(vlSelfRef.top__DOT__state),3);
        bufp->chgIData(oldp+1361,(vlSelfRef.top__DOT__txCounter),23);
        bufp->chgBit(oldp+1362,(vlSelfRef.top__DOT__flashController__DOT__flash_ready));
        bufp->chgCData(oldp+1363,(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt),8);
        __Vtemp_1[0U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                           - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                           ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                                   ((IData)(1U) + (0x1ffU 
                                                   & (((IData)(0x3f80U) 
                                                       - 
                                                       VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                         | (Vtop__ConstPool__CONST_hd74c513e_0[
                            (0x1ffU & (((IData)(0x3f80U) 
                                        - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                       >> 5U))] >> 
                            (0x1fU & ((IData)(0x3f80U) 
                                      - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
        __Vtemp_1[1U] = (((0U == (0x1fU & ((IData)(0x3f80U) 
                                           - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U))))
                           ? 0U : (Vtop__ConstPool__CONST_hd74c513e_0[
                                   ((IData)(2U) + (0x1ffU 
                                                   & (((IData)(0x3f80U) 
                                                       - 
                                                       VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                         | (Vtop__ConstPool__CONST_hd74c513e_0[
                            ((IData)(1U) + (0x1ffU 
                                            & (((IData)(0x3f80U) 
                                                - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
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
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                         | (Vtop__ConstPool__CONST_hd74c513e_0[
                            ((IData)(2U) + (0x1ffU 
                                            & (((IData)(0x3f80U) 
                                                - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
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
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3f80U) 
                                                   - 
                                                   VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))))) 
                         | (Vtop__ConstPool__CONST_hd74c513e_0[
                            ((IData)(3U) + (0x1ffU 
                                            & (((IData)(0x3f80U) 
                                                - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)) 
                                               >> 5U)))] 
                            >> (0x1fU & ((IData)(0x3f80U) 
                                         - VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.top__DOT__ppu_inst__DOT__dataOutTxt), 7U)))));
        bufp->chgWData(oldp+1364,(__Vtemp_1),128);
        bufp->chgBit(oldp+1368,((1U & (~ (IData)(vlSelfRef.top__DOT__reset)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xdU]))) {
        bufp->chgIData(oldp+1369,(vlSelfRef.top__DOT__data_addr),32);
        bufp->chgIData(oldp+1370,(vlSelfRef.top__DOT__data_read),32);
        bufp->chgBit(oldp+1371,(vlSelfRef.top__DOT__mem_ren));
        bufp->chgBit(oldp+1372,(vlSelfRef.top__DOT__mem_wen));
        bufp->chgBit(oldp+1373,(vlSelfRef.top__DOT__screen_wen));
        bufp->chgBit(oldp+1374,(vlSelfRef.top__DOT__second_stage_mem_ren));
        bufp->chgBit(oldp+1375,(vlSelfRef.top__DOT__second_stage_mem_wen));
        bufp->chgBit(oldp+1376,(vlSelfRef.top__DOT__program_mem_ren));
        bufp->chgBit(oldp+1377,(vlSelfRef.top__DOT__program_mem_wen));
        bufp->chgBit(oldp+1378,(vlSelfRef.top__DOT__uart_ren));
        bufp->chgBit(oldp+1379,(vlSelfRef.top__DOT__uart_wen));
        bufp->chgBit(oldp+1380,(vlSelfRef.top__DOT__clint_ren));
        bufp->chgBit(oldp+1381,(vlSelfRef.top__DOT__clint_wen));
        bufp->chgBit(oldp+1382,(vlSelfRef.top__DOT__btn_ren));
        bufp->chgBit(oldp+1383,(vlSelfRef.top__DOT__flash_ren));
        bufp->chgBit(oldp+1384,(vlSelfRef.top__DOT__flash_wen));
        bufp->chgIData(oldp+1385,((0x3ffffU & (vlSelfRef.top__DOT__data_addr 
                                               >> 2U))),18);
        bufp->chgIData(oldp+1386,((0xffU & vlSelfRef.top__DOT__data_addr)),32);
        bufp->chgBit(oldp+1387,(vlSelfRef.top__DOT__bu__DOT__usb_ren));
        bufp->chgCData(oldp+1388,((0xffU & vlSelfRef.top__DOT__data_addr)),8);
        bufp->chgSData(oldp+1389,((0xffffU & vlSelfRef.top__DOT__data_addr)),16);
        bufp->chgSData(oldp+1390,((0x7fffU & (vlSelfRef.top__DOT__data_addr 
                                              >> 1U))),16);
        bufp->chgCData(oldp+1391,((0x7fU & (vlSelfRef.top__DOT__data_addr 
                                            >> 7U))),7);
        bufp->chgCData(oldp+1392,((7U & vlSelfRef.top__DOT__data_addr)),3);
        bufp->chgCData(oldp+1393,(vlSelfRef.top__DOT__uart_controller__DOT__data_in),8);
    }
    bufp->chgBit(oldp+1394,(vlSelfRef.clk));
    bufp->chgBit(oldp+1395,(vlSelfRef.LCD_CLK));
    bufp->chgBit(oldp+1396,(vlSelfRef.LCD_HYNC));
    bufp->chgBit(oldp+1397,(vlSelfRef.LCD_SYNC));
    bufp->chgBit(oldp+1398,(vlSelfRef.LCD_DEN));
    bufp->chgCData(oldp+1399,(vlSelfRef.LCD_R),5);
    bufp->chgCData(oldp+1400,(vlSelfRef.LCD_G),6);
    bufp->chgCData(oldp+1401,(vlSelfRef.LCD_B),5);
    bufp->chgBit(oldp+1402,(vlSelfRef.flashMiso));
    bufp->chgBit(oldp+1403,(vlSelfRef.flashClk));
    bufp->chgBit(oldp+1404,(vlSelfRef.flashMosi));
    bufp->chgBit(oldp+1405,(vlSelfRef.flashCs));
    bufp->chgBit(oldp+1406,(vlSelfRef.uart_rx));
    bufp->chgBit(oldp+1407,(vlSelfRef.uart_tx));
    bufp->chgBit(oldp+1408,(vlSelfRef.btnDownL));
    bufp->chgBit(oldp+1409,(vlSelfRef.btnUpL));
    bufp->chgBit(oldp+1410,(vlSelfRef.btnLeftL));
    bufp->chgBit(oldp+1411,(vlSelfRef.btnRightL));
    bufp->chgBit(oldp+1412,(vlSelfRef.btnDownR));
    bufp->chgBit(oldp+1413,(vlSelfRef.btnUpR));
    bufp->chgBit(oldp+1414,(vlSelfRef.btnLeftR));
    bufp->chgBit(oldp+1415,(vlSelfRef.btnRightR));
    bufp->chgBit(oldp+1416,(vlSelfRef.top__DOT__O_sdram_clk));
    bufp->chgIData(oldp+1417,(((0U == vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr)
                                ? vlSelfRef.top__DOT__instr
                                : (((IData)(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid_delayed) 
                                    | (IData)(vlSelfRef.top__DOT__cpu_1__DOT__bubble_ifid))
                                    ? 0U : vlSelfRef.top__DOT__cpu_1__DOT__delayed_instr))),32);
    bufp->chgIData(oldp+1418,(((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR)
                                ? vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA
                                : vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC)),32);
    bufp->chgIData(oldp+1419,((((IData)(vlSelfRef.top__DOT__cpu_1__DOT__IDEX_JumpJALR)
                                 ? vlSelfRef.top__DOT__cpu_1__DOT__bypassOutA
                                 : vlSelfRef.top__DOT__cpu_1__DOT__IDEX_PC) 
                               + vlSelfRef.top__DOT__cpu_1__DOT__IDEX_signExtend)),32);
    bufp->chgSData(oldp+1420,(vlSelfRef.top__DOT__ppu_inst__DOT____Vcellinp__attributes_Buffer__addr_b),15);
    bufp->chgIData(oldp+1421,(vlSelfRef.top__DOT__ppu_inst__DOT__i),32);
    bufp->chgSData(oldp+1422,(vlSelfRef.top__DOT__ppu_inst__DOT____Vcellinp__attributes_Buffer__addr_b),11);
    bufp->chgBit(oldp+1423,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdram_power_down));
    bufp->chgBit(oldp+1424,(vlSelfRef.top__DOT__ram_controller_inst__DOT__I_sdram_selfrefresh));
    bufp->chgBit(oldp+1425,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_2));
    bufp->chgBit(oldp+1426,(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT1));
    bufp->chgIData(oldp+1427,(vlSelfRef.top__DOT__sdram__DOT__Dq_reg),32);
    bufp->chgBit(oldp+1428,(vlSelfRef.top__DOT__sdram__DOT__CkeZ));
    bufp->chgBit(oldp+1429,(vlSelfRef.top__DOT__sdram__DOT__Sys_clk));
    bufp->chgBit(oldp+1430,(((IData)(vlSelfRef.top__DOT__sdram__DOT__Data_in_enable) 
                             & (IData)(vlSelfRef.top__DOT__sdram__DOT__Sys_clk))));
    bufp->chgCData(oldp+1431,((0xffU & ((1U & (IData)(vlSelfRef.top__DOT__cpu_1__DOT__byte_select_vector))
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

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
}
