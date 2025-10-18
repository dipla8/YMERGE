// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_2;
    VlWide<7>/*223:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    vlSelfRef.top__DOT__mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2002U, vlSelfRef.top__DOT__mem__DOT__i)) {
        vlSelfRef.top__DOT__mem__DOT____Vlvbound_h03e4b710__0 = 0U;
        if (VL_LIKELY(((0x2001U >= (0x3fffU & vlSelfRef.top__DOT__mem__DOT__i))))) {
            vlSelfRef.top__DOT__mem__DOT__data_mem[(0x3fffU 
                                                    & vlSelfRef.top__DOT__mem__DOT__i)] 
                = vlSelfRef.top__DOT__mem__DOT____Vlvbound_h03e4b710__0;
        }
        vlSelfRef.top__DOT__mem__DOT__i = ((IData)(1U) 
                                           + vlSelfRef.top__DOT__mem__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x61646572U;
    __Vtemp_2[2U] = 0x6f746c6fU;
    __Vtemp_2[3U] = 0x732f626fU;
    __Vtemp_2[4U] = 0x6c756465U;
    __Vtemp_2[5U] = 0x2f696e63U;
    __Vtemp_2[6U] = 0x2e2eU;
    VL_READMEM_N(true, 32, 8194, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_2)
                 ,  &(vlSelfRef.top__DOT__mem__DOT__data_mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__sdram__DOT__Dq_reg = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Act_b0 = 1U;
    vlSelfRef.top__DOT__sdram__DOT__Act_b1 = 1U;
    vlSelfRef.top__DOT__sdram__DOT__Act_b2 = 1U;
    vlSelfRef.top__DOT__sdram__DOT__Act_b3 = 1U;
    vlSelfRef.top__DOT__sdram__DOT__Pc_b0 = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Pc_b1 = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Pc_b2 = 0U;
    vlSelfRef.top__DOT__sdram__DOT__Pc_b3 = 0U;
    vlSelfRef.top__DOT__sdram__DOT__WR_chkm[0U] = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__WR_chkm[1U] = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__WR_chkm[2U] = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__WR_chkm[3U] = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[0U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[1U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[2U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[3U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[0U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[1U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[2U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[3U] = 0U;
    vlSelfRef.top__DOT__sdram__DOT__MRD_chk = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RFC_chk = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RRD_chk = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RAS_chk0 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RAS_chk1 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RAS_chk2 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RAS_chk3 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RCD_chk0 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RCD_chk1 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RCD_chk2 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RCD_chk3 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RC_chk0 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RC_chk1 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RC_chk2 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RC_chk3 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RP_chk0 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RP_chk1 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RP_chk2 = 0ULL;
    vlSelfRef.top__DOT__sdram__DOT__RP_chk3 = 0ULL;
    VL_TIMEFORMAT_IINI(0xfffffff7U, 1U, std::string{" ns"}, 0xcU, vlSymsp->_vm_contextp__);
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_14_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_13_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_12_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_11_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_10_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_9_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_8_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_7_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_6_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_5_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_4_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCount_init_delay_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGEALL_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH1_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_AUTOREFRESH2_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_LOAD_MODEREG_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_INIT_DONE_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_finish_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_cmd_init_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fSdram_ba_init_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fCmd_init_state__02eINIT_STATE_IDLE_s0__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_15_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fInit_cnt_0_s2__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_0 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_1 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd0_2 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_0 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_1 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Dd1_2 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx0 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__Ttx1 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT0 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fU_ODDR_clk__DOT__DT1 = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay_0_s0__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_cmd_delay2_0_s0__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_31_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_30_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_29_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_28_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_27_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_26_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_25_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_24_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_23_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_22_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_21_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_20_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_19_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_18_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_17_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_16_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_15_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_14_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_13_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_12_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_11_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_10_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_9_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_8_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_7_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_6_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_5_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_4_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_data_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_dqm_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fPrecharge_flag_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_7_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_6_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_5_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_4_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fSdrc_wrd_len_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_bk_wrd_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_AUTOREFRESH_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_IDLE_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_ACTIVE2RW_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_READ_WITHOUT_AUTOPRE_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_WRITE_WITHOUT_AUTOPRE_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_DATAIN2ACTIVE_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_PRECHARGE_DELAY_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_INIT_s0__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_POWER_DOWN_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_WAIT_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCmd_fsm_state__02eSDRC_STATE_SELFREFRESH_EXIT_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_31_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_30_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_29_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_28_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_27_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_26_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_25_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_24_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_23_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_22_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_21_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_20_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_19_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_18_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_17_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_16_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_15_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_14_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_13_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_12_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_11_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_10_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_9_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_8_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_7_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_6_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_5_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_4_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_data_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_wen_n_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cas_n_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ras_n_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_ba_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_10_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_9_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_8_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_7_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_6_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_5_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_4_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_3_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_2_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_1_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_addr_0_s0__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_7_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_6_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_5_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_4_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_3_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_2_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_1_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_fsm_addr_col_wrd_0_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCtrl_wr_data_valid_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdrc_cmd_ack_s4__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_8_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_7_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_6_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_5_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_4_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_3_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_2_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_1_s1__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cke_s3__DOT__Q_reg = 1U;
    vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fCount_burst_num_0_s2__DOT__Q_reg = 0U;
    vlSelfRef.top__DOT__SecondStageRAM__DOT__i = 0U;
    while (VL_GTS_III(32, 0x40000U, vlSelfRef.top__DOT__SecondStageRAM__DOT__i)) {
        vlSelfRef.top__DOT__SecondStageRAM__DOT__data_mem[(0x3ffffU 
                                                           & vlSelfRef.top__DOT__SecondStageRAM__DOT__i)] = 0U;
        vlSelfRef.top__DOT__SecondStageRAM__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__SecondStageRAM__DOT__i);
    }
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x74616765U;
    __Vtemp_4[2U] = 0x6f6e6453U;
    __Vtemp_4[3U] = 0x2f736563U;
    __Vtemp_4[4U] = 0x75646573U;
    __Vtemp_4[5U] = 0x696e636cU;
    __Vtemp_4[6U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 262144, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_4)
                 ,  &(vlSelfRef.top__DOT__SecondStageRAM__DOT__data_mem)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__RAM__DOT__i = 0U;
    while (VL_GTS_III(32, 0x40000U, vlSelfRef.top__DOT__RAM__DOT__i)) {
        vlSelfRef.top__DOT__RAM__DOT__data_mem[(0x3ffffU 
                                                & vlSelfRef.top__DOT__RAM__DOT__i)] = 0U;
        vlSelfRef.top__DOT__RAM__DOT__i = ((IData)(1U) 
                                           + vlSelfRef.top__DOT__RAM__DOT__i);
    }
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x2f52414dU;
    __Vtemp_6[2U] = 0x75646573U;
    __Vtemp_6[3U] = 0x696e636cU;
    __Vtemp_6[4U] = 0x2e2e2fU;
    VL_READMEM_N(true, 32, 262144, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_6)
                 ,  &(vlSelfRef.top__DOT__RAM__DOT__data_mem)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
