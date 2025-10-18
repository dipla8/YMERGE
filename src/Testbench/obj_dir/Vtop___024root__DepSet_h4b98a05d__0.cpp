// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__sdram__DOT__Dq_dqm__strong__out13;
    top__DOT__sdram__DOT__Dq_dqm__strong__out13 = 0;
    IData/*31:0*/ top__DOT__sdram__DOT__Dq_dqm__strong__out14;
    top__DOT__sdram__DOT__Dq_dqm__strong__out14 = 0;
    IData/*31:0*/ top__DOT__sdram__DOT__Dq_dqm__strong__out15;
    top__DOT__sdram__DOT__Dq_dqm__strong__out15 = 0;
    IData/*31:0*/ top__DOT__sdram__DOT__Dq_dqm__strong__out16;
    top__DOT__sdram__DOT__Dq_dqm__strong__out16 = 0;
    // Body
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h1462465a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top.sdram.Sys_clk)", 
                                                             "Simulation/MT48LC2M32B2.v", 
                                                             188);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.top__DOT__sdram__DOT__Command[0U] 
            = vlSelfRef.top__DOT__sdram__DOT__Command
            [1U];
        vlSelfRef.top__DOT__sdram__DOT__Command[1U] 
            = vlSelfRef.top__DOT__sdram__DOT__Command
            [2U];
        vlSelfRef.top__DOT__sdram__DOT__Command[2U] 
            = vlSelfRef.top__DOT__sdram__DOT__Command
            [3U];
        vlSelfRef.top__DOT__sdram__DOT__Command[3U] = 1U;
        vlSelfRef.top__DOT__sdram__DOT__Col_addr[0U] 
            = vlSelfRef.top__DOT__sdram__DOT__Col_addr
            [1U];
        vlSelfRef.top__DOT__sdram__DOT__Col_addr[1U] 
            = vlSelfRef.top__DOT__sdram__DOT__Col_addr
            [2U];
        vlSelfRef.top__DOT__sdram__DOT__Col_addr[2U] 
            = vlSelfRef.top__DOT__sdram__DOT__Col_addr
            [3U];
        vlSelfRef.top__DOT__sdram__DOT__Col_addr[3U] = 0U;
        vlSelfRef.top__DOT__sdram__DOT__Bank_addr[0U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_addr
            [1U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_addr[1U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_addr
            [2U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_addr[2U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_addr
            [3U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_addr[3U] = 0U;
        vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[0U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_precharge
            [1U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[1U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_precharge
            [2U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[2U] 
            = vlSelfRef.top__DOT__sdram__DOT__Bank_precharge
            [3U];
        vlSelfRef.top__DOT__sdram__DOT__Bank_precharge[3U] = 0U;
        vlSelfRef.top__DOT__sdram__DOT__A10_precharge[0U] 
            = vlSelfRef.top__DOT__sdram__DOT__A10_precharge
            [1U];
        vlSelfRef.top__DOT__sdram__DOT__A10_precharge[1U] 
            = vlSelfRef.top__DOT__sdram__DOT__A10_precharge
            [2U];
        vlSelfRef.top__DOT__sdram__DOT__A10_precharge[2U] 
            = vlSelfRef.top__DOT__sdram__DOT__A10_precharge
            [3U];
        vlSelfRef.top__DOT__sdram__DOT__A10_precharge[3U] = 0U;
        vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0 = vlSelfRef.top__DOT__sdram__DOT__Dqm_reg1;
        vlSelfRef.top__DOT__sdram__DOT__Dqm_reg1 = vlSelfRef.top__DOT__O_sdram_dqm;
        if (vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
            [0U]) {
            vlSelfRef.top__DOT__sdram__DOT__Count_precharge[0U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                   [0U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
            [1U]) {
            vlSelfRef.top__DOT__sdram__DOT__Count_precharge[1U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                   [1U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
            [2U]) {
            vlSelfRef.top__DOT__sdram__DOT__Count_precharge[2U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                   [2U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
            [3U]) {
            vlSelfRef.top__DOT__sdram__DOT__Count_precharge[3U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                   [3U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
            [0U]) {
            vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[0U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                   [0U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
            [1U]) {
            vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[1U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                   [1U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
            [2U]) {
            vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[2U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                   [2U]);
        }
        if (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
            [3U]) {
            vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter[3U] 
                = ((IData)(1U) + vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                   [3U]);
        }
        vlSelfRef.top__DOT__sdram__DOT__MRD_chk = (1ULL 
                                                   + vlSelfRef.top__DOT__sdram__DOT__MRD_chk);
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_controller__DOT__u_sdrc_hs_top__02fu_sdrc_control_fsm__02fO_sdram_cs_n_s0__DOT__Q_reg)))))) {
            VL_WRITEF_NX("%Ntop.sdram : at time %t LMR  : Load Mode Register\n",0,
                         vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.top__DOT__sdram__DOT__Mode_reg = 0U;
            VL_WRITEF_NX("%Ntop.sdram :                             CAS Latency      = Reserved\n",0,
                         vlSymsp->name());
            VL_WRITEF_NX("%Ntop.sdram :                             Burst Length     = 1\n",0,
                         vlSymsp->name());
            VL_WRITEF_NX("%Ntop.sdram :                             Burst Type       = Sequential\n",0,
                         vlSymsp->name());
            VL_WRITEF_NX("%Ntop.sdram :                             Write Burst Mode = Programmed Burst Length\n",0,
                         vlSymsp->name());
            if (VL_UNLIKELY(((1U & ((((~ (IData)(vlSelfRef.top__DOT__sdram__DOT__Pc_b0)) 
                                      & (~ (IData)(vlSelfRef.top__DOT__sdram__DOT__Pc_b1))) 
                                     & (~ (IData)(vlSelfRef.top__DOT__sdram__DOT__Pc_b2))) 
                                    & (~ (IData)(vlSelfRef.top__DOT__sdram__DOT__Pc_b3))))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t ERROR: all banks must be Precharge before Load Mode Register\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            if (VL_UNLIKELY((((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                  - vlSelfRef.top__DOT__sdram__DOT__RP_chk0)) 
                                 < 18.0) | (VL_ITOR_D_Q(64, 
                                                        ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                         - vlSelfRef.top__DOT__sdram__DOT__RP_chk1)) 
                                            < 18.0)) 
                               | (VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                   - vlSelfRef.top__DOT__sdram__DOT__RP_chk2)) 
                                  < 18.0)) | (VL_ITOR_D_Q(64, 
                                                          ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                           - vlSelfRef.top__DOT__sdram__DOT__RP_chk3)) 
                                              < 18.0))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t ERROR: tRP violation during Load Mode Register\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            if (VL_UNLIKELY(((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                               - vlSelfRef.top__DOT__sdram__DOT__RFC_chk)) 
                              < 60.0)))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t ERROR: tRFC violation during Load Mode Register\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            if (VL_UNLIKELY(((VL_ITOR_D_Q(64, vlSelfRef.top__DOT__sdram__DOT__MRD_chk) 
                              < 2.0)))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t ERROR: tMRD violation during Load Mode Register\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            vlSelfRef.top__DOT__sdram__DOT__MRD_chk = 0ULL;
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [0U] & vlSelfRef.top__DOT__sdram__DOT__Write_precharge
             [0U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk0)) 
                                >= 42.0) & ((((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                                | (IData)(vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode)) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [0U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [0U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [0U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [0U])))) 
                              | (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
                                 [0U] & VL_LTES_III(32, 1U, 
                                                    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                                                    [0U])))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 0\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[0U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Write_precharge[0U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[0U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Pc_b0 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b0 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk0 
                    = VL_RTOIROUND_Q_D((6.0 + VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000))));
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [1U] & vlSelfRef.top__DOT__sdram__DOT__Write_precharge
             [1U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk1)) 
                                >= 42.0) & ((((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                                | (IData)(vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode)) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [1U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [1U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [1U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [1U])))) 
                              | (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
                                 [1U] & VL_LTES_III(32, 1U, 
                                                    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                                                    [1U])))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 1\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[1U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Write_precharge[1U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[1U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Pc_b1 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b1 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk1 
                    = VL_RTOIROUND_Q_D((6.0 + VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000))));
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [2U] & vlSelfRef.top__DOT__sdram__DOT__Write_precharge
             [2U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk2)) 
                                >= 42.0) & ((((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                                | (IData)(vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode)) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [2U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [2U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [2U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [2U])))) 
                              | (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
                                 [2U] & VL_LTES_III(32, 1U, 
                                                    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                                                    [2U])))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 2\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[2U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Write_precharge[2U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[2U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Pc_b2 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b2 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk2 
                    = VL_RTOIROUND_Q_D((6.0 + VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000))));
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [3U] & vlSelfRef.top__DOT__sdram__DOT__Write_precharge
             [3U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk3)) 
                                >= 42.0) & ((((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                                | (IData)(vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode)) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [3U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [3U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [3U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [3U])))) 
                              | (vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write
                                 [3U] & VL_LTES_III(32, 1U, 
                                                    vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_counter
                                                    [3U])))))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 3\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[3U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Write_precharge[3U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_write[3U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Pc_b3 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b3 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk3 
                    = VL_RTOIROUND_Q_D((6.0 + VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000))));
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [0U] & vlSelfRef.top__DOT__sdram__DOT__Read_precharge
             [0U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk0)) 
                                >= 42.0) & (((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [0U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [0U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [0U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [0U])))) 
                              | vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read
                              [0U])))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 0\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Pc_b0 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b0 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk0 
                    = VL_TIME_UNITED_Q(1000);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[0U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Read_precharge[0U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[0U] = 0U;
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [1U] & vlSelfRef.top__DOT__sdram__DOT__Read_precharge
             [1U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk1)) 
                                >= 42.0) & (((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [1U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [1U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [1U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [1U])))) 
                              | vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read
                              [1U])))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 1\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Pc_b1 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b1 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk1 
                    = VL_TIME_UNITED_Q(1000);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[1U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Read_precharge[1U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[1U] = 0U;
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [2U] & vlSelfRef.top__DOT__sdram__DOT__Read_precharge
             [2U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk2)) 
                                >= 42.0) & (((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [2U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [2U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [2U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [2U])))) 
                              | vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read
                              [2U])))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 2\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Pc_b2 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b2 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk2 
                    = VL_TIME_UNITED_Q(1000);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[2U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Read_precharge[2U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[2U] = 0U;
            }
        }
        if ((vlSelfRef.top__DOT__sdram__DOT__Auto_precharge
             [3U] & vlSelfRef.top__DOT__sdram__DOT__Read_precharge
             [3U])) {
            if (VL_UNLIKELY(((((VL_ITOR_D_Q(64, ((QData)(VL_TIME_UNITED_Q(1000)) 
                                                 - vlSelfRef.top__DOT__sdram__DOT__RAS_chk3)) 
                                >= 42.0) & (((((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) 
                                               & VL_LTES_III(32, 1U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [3U])) 
                                              | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) 
                                                 & VL_LTES_III(32, 2U, 
                                                               vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                               [3U]))) 
                                             | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) 
                                                & VL_LTES_III(32, 4U, 
                                                              vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                              [3U]))) 
                                            | ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) 
                                               & VL_LTES_III(32, 8U, 
                                                             vlSelfRef.top__DOT__sdram__DOT__Count_precharge
                                                             [3U])))) 
                              | vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read
                              [3U])))) {
                VL_WRITEF_NX("%Ntop.sdram : at time %t NOTE : Start Internal Auto Precharge for Bank 3\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9);
                vlSelfRef.top__DOT__sdram__DOT__Pc_b3 = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Act_b3 = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RP_chk3 
                    = VL_TIME_UNITED_Q(1000);
                vlSelfRef.top__DOT__sdram__DOT__Auto_precharge[3U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__Read_precharge[3U] = 0U;
                vlSelfRef.top__DOT__sdram__DOT__RW_interrupt_read[3U] = 0U;
            }
        }
        if ((4U == vlSelfRef.top__DOT__sdram__DOT__Command
             [0U])) {
            if (((vlSelfRef.top__DOT__sdram__DOT__Bank_precharge
                  [0U] == (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank)) 
                 | vlSelfRef.top__DOT__sdram__DOT__A10_precharge
                 [0U])) {
                if (vlSelfRef.top__DOT__sdram__DOT__Data_out_enable) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            }
        } else if ((6U == vlSelfRef.top__DOT__sdram__DOT__Command
                    [0U])) {
            if (vlSelfRef.top__DOT__sdram__DOT__Data_out_enable) {
                vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__sdram__DOT__Data_out_enable)))) {
            vlSelfRef.__VdlySet__top__DOT__sdram__DOT__Dq_reg__v0 = 1U;
        }
        if ((2U == vlSelfRef.top__DOT__sdram__DOT__Command
             [0U])) {
            vlSelfRef.top__DOT__sdram__DOT__Bank = 
                vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Col = vlSelfRef.top__DOT__sdram__DOT__Col_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Burst_counter = 0U;
            vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
            vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 1U;
            vlSelfRef.top__DOT__sdram__DOT__Col_brst 
                = vlSelfRef.top__DOT__sdram__DOT__Col_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Row = (
                                                   (2U 
                                                    & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                    [0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                     [0U])
                                                     ? (IData)(vlSelfRef.top__DOT__sdram__DOT__B3_row_addr)
                                                     : (IData)(vlSelfRef.top__DOT__sdram__DOT__B2_row_addr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                     [0U])
                                                     ? (IData)(vlSelfRef.top__DOT__sdram__DOT__B1_row_addr)
                                                     : (IData)(vlSelfRef.top__DOT__sdram__DOT__B0_row_addr)));
        } else if ((3U == vlSelfRef.top__DOT__sdram__DOT__Command
                    [0U])) {
            vlSelfRef.top__DOT__sdram__DOT__Bank = 
                vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Col = vlSelfRef.top__DOT__sdram__DOT__Col_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Burst_counter = 0U;
            vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 1U;
            vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
            vlSelfRef.top__DOT__sdram__DOT__Col_brst 
                = vlSelfRef.top__DOT__sdram__DOT__Col_addr
                [0U];
            vlSelfRef.top__DOT__sdram__DOT__Row = (
                                                   (2U 
                                                    & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                    [0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                     [0U])
                                                     ? (IData)(vlSelfRef.top__DOT__sdram__DOT__B3_row_addr)
                                                     : (IData)(vlSelfRef.top__DOT__sdram__DOT__B2_row_addr))
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.top__DOT__sdram__DOT__Bank_addr
                                                     [0U])
                                                     ? (IData)(vlSelfRef.top__DOT__sdram__DOT__B1_row_addr)
                                                     : (IData)(vlSelfRef.top__DOT__sdram__DOT__B0_row_addr)));
        }
        if (vlSelfRef.top__DOT__sdram__DOT__Data_in_enable) {
            if ((2U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                    vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out4 
                        = vlSelfRef.top__DOT__sdram__DOT__Bank3
                        [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                           << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                    vlSelfRef.top__DOT__sdram__DOT__Bank3[(
                                                           ((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))] 
                        = vlSelfRef.top__DOT__sdram__DOT__Dq_dqm;
                } else {
                    vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out3 
                        = vlSelfRef.top__DOT__sdram__DOT__Bank2
                        [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                           << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                    vlSelfRef.top__DOT__sdram__DOT__Bank2[(
                                                           ((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                                                            << 8U) 
                                                           | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))] 
                        = vlSelfRef.top__DOT__sdram__DOT__Dq_dqm;
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out2 
                    = vlSelfRef.top__DOT__sdram__DOT__Bank1
                    [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                       << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                vlSelfRef.top__DOT__sdram__DOT__Bank1[(
                                                       ((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))] 
                    = vlSelfRef.top__DOT__sdram__DOT__Dq_dqm;
            } else {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out1 
                    = vlSelfRef.top__DOT__sdram__DOT__Bank0
                    [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                       << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                vlSelfRef.top__DOT__sdram__DOT__Bank0[(
                                                       ((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))] 
                    = vlSelfRef.top__DOT__sdram__DOT__Dq_dqm;
            }
            if ((1U & (~ (IData)(vlSelfRef.top__DOT__O_sdram_dqm)))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out5 
                    = ((0xffffff00U & vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out5) 
                       | (0xffU & vlSelfRef.top__DOT__IO_sdram_dq));
            }
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__O_sdram_dqm) 
                          >> 1U)))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out6 
                    = ((0xffff00ffU & vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out6) 
                       | (0xff00U & vlSelfRef.top__DOT__IO_sdram_dq));
            }
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__O_sdram_dqm) 
                          >> 2U)))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out7 
                    = ((0xff00ffffU & vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out7) 
                       | (0xff0000U & vlSelfRef.top__DOT__IO_sdram_dq));
            }
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__O_sdram_dqm) 
                          >> 3U)))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out8 
                    = ((0xffffffU & vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out8) 
                       | (0xff000000U & vlSelfRef.top__DOT__IO_sdram_dq));
            }
            if ((0xfU != (IData)(vlSelfRef.top__DOT__O_sdram_dqm))) {
                vlSelfRef.top__DOT__sdram__DOT__WR_chkm[vlSelfRef.top__DOT__sdram__DOT__Bank] 
                    = VL_TIME_UNITED_Q(1000);
                VL_WRITEF_NX("%Ntop.sdram : at time %t WRITE: Bank = %1# Row = %4#, Col = %3#, Data = %x\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9,2,(IData)(vlSelfRef.top__DOT__sdram__DOT__Bank),
                             11,vlSelfRef.top__DOT__sdram__DOT__Row,
                             8,(IData)(vlSelfRef.top__DOT__sdram__DOT__Col),
                             32,vlSelfRef.top__DOT__sdram__DOT__Dq_dqm);
            } else {
                VL_WRITEF_NX("%Ntop.sdram : at time %t WRITE: Bank = %1# Row = %4#, Col = %3#, Data = Hi-Z due to DQM\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9,2,(IData)(vlSelfRef.top__DOT__sdram__DOT__Bank),
                             11,vlSelfRef.top__DOT__sdram__DOT__Row,
                             8,(IData)(vlSelfRef.top__DOT__sdram__DOT__Col));
            }
            co_await vlSelfRef.__VdlySched.delay(0x157cULL, 
                                                 nullptr, 
                                                 "Simulation/MT48LC2M32B2.v", 
                                                 968);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.top__DOT__sdram__DOT__Burst_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter)));
            if ((8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))) {
                    vlSelfRef.top__DOT__sdram__DOT__Col_temp 
                        = ((0xf8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter) 
                                    ^ (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_brst))));
                }
            } else {
                vlSelfRef.top__DOT__sdram__DOT__Col_temp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)));
            }
            vlSelfRef.top__DOT__sdram__DOT__Col = ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2)
                                                    ? 
                                                   ((0xfeU 
                                                     & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4)
                                                     ? 
                                                    ((0xfcU 
                                                      & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                     | (3U 
                                                        & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8)
                                                      ? 
                                                     ((0xf8U 
                                                       & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                      | (7U 
                                                         & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                      : (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp))));
            if (vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode) {
                vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
            }
            if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) {
                if ((1U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) {
                if ((2U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) {
                if ((4U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) {
                if ((8U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            }
        } else if (vlSelfRef.top__DOT__sdram__DOT__Data_out_enable) {
            if ((2U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                if ((1U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                    vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out12 
                        = vlSelfRef.top__DOT__sdram__DOT__Bank3
                        [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                           << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                } else {
                    vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out11 
                        = vlSelfRef.top__DOT__sdram__DOT__Bank2
                        [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                           << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
                }
            } else if ((1U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Bank))) {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out10 
                    = vlSelfRef.top__DOT__sdram__DOT__Bank1
                    [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                       << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
            } else {
                vlSelfRef.top__DOT__sdram__DOT__Dq_dqm__strong__out9 
                    = vlSelfRef.top__DOT__sdram__DOT__Bank0
                    [(((IData)(vlSelfRef.top__DOT__sdram__DOT__Row) 
                       << 8U) | (IData)(vlSelfRef.top__DOT__sdram__DOT__Col))];
            }
            if ((1U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0))) {
                top__DOT__sdram__DOT__Dq_dqm__strong__out13 
                    = (0xffffff00U & top__DOT__sdram__DOT__Dq_dqm__strong__out13);
            }
            if ((2U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0))) {
                top__DOT__sdram__DOT__Dq_dqm__strong__out14 
                    = (0xffff00ffU & top__DOT__sdram__DOT__Dq_dqm__strong__out14);
            }
            if ((4U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0))) {
                top__DOT__sdram__DOT__Dq_dqm__strong__out15 
                    = (0xff00ffffU & top__DOT__sdram__DOT__Dq_dqm__strong__out15);
            }
            if ((8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0))) {
                top__DOT__sdram__DOT__Dq_dqm__strong__out16 
                    = (0xffffffU & top__DOT__sdram__DOT__Dq_dqm__strong__out16);
            }
            if ((0xfU != (IData)(vlSelfRef.top__DOT__sdram__DOT__Dqm_reg0))) {
                vlSelfRef.__Vintraval_h26db0b2c__0 
                    = vlSelfRef.top__DOT__sdram__DOT__Dq_dqm;
                co_await vlSelfRef.__VdlySched.delay(0x157cULL, 
                                                     nullptr, 
                                                     "Simulation/MT48LC2M32B2.v", 
                                                     995);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Dq_reg 
                    = vlSelfRef.__Vintraval_h26db0b2c__0;
                VL_WRITEF_NX("%Ntop.sdram : at time %t READ : Bank = %1# Row = %4#, Col = %3#, Data = %x\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9,2,(IData)(vlSelfRef.top__DOT__sdram__DOT__Bank),
                             11,vlSelfRef.top__DOT__sdram__DOT__Row,
                             8,(IData)(vlSelfRef.top__DOT__sdram__DOT__Col),
                             32,vlSelfRef.top__DOT__sdram__DOT__Dq_reg);
            } else {
                vlSelfRef.__Vintraval_hf24f60bd__0 = 0U;
                co_await vlSelfRef.__VdlySched.delay(0x157cULL, 
                                                     nullptr, 
                                                     "Simulation/MT48LC2M32B2.v", 
                                                     1000);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.top__DOT__sdram__DOT__Dq_reg 
                    = vlSelfRef.__Vintraval_hf24f60bd__0;
                VL_WRITEF_NX("%Ntop.sdram : at time %t READ : Bank = %1# Row = %4#, Col = %3#, Data = Hi-Z due to DQM\n",0,
                             vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                             -9,2,(IData)(vlSelfRef.top__DOT__sdram__DOT__Bank),
                             11,vlSelfRef.top__DOT__sdram__DOT__Row,
                             8,(IData)(vlSelfRef.top__DOT__sdram__DOT__Col));
            }
            vlSelfRef.top__DOT__sdram__DOT__Burst_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter)));
            if ((8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))) {
                if ((8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Mode_reg))) {
                    vlSelfRef.top__DOT__sdram__DOT__Col_temp 
                        = ((0xf8U & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)) 
                           | (7U & ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter) 
                                    ^ (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_brst))));
                }
            } else {
                vlSelfRef.top__DOT__sdram__DOT__Col_temp 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)));
            }
            vlSelfRef.top__DOT__sdram__DOT__Col = ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_2)
                                                    ? 
                                                   ((0xfeU 
                                                     & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                    | (1U 
                                                       & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_4)
                                                     ? 
                                                    ((0xfcU 
                                                      & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                     | (3U 
                                                        & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                     : 
                                                    ((IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_length_8)
                                                      ? 
                                                     ((0xf8U 
                                                       & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col)) 
                                                      | (7U 
                                                         & (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp)))
                                                      : (IData)(vlSelfRef.top__DOT__sdram__DOT__Col_temp))));
            if (vlSelfRef.top__DOT__sdram__DOT__Write_burst_mode) {
                vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
            }
            if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_1) {
                if ((1U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_2) {
                if ((2U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_4) {
                if ((4U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            } else if (vlSelfRef.top__DOT__sdram__DOT__Burst_length_8) {
                if ((8U <= (IData)(vlSelfRef.top__DOT__sdram__DOT__Burst_counter))) {
                    vlSelfRef.top__DOT__sdram__DOT__Data_in_enable = 0U;
                    vlSelfRef.top__DOT__sdram__DOT__Data_out_enable = 0U;
                }
            }
        }
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.top__DOT__reset)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__reset__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__cpu_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ram_controller_inst__DOT__cpu_clk__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ram_controller_inst__DOT__sdram_clk__0))));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ram_controller_inst__DOT__sdram_clk__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.top__DOT__xcursor) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__xcursor__0)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.top__DOT__ycursor) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ycursor__0)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.top__DOT__sdram__DOT__Sys_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__sdram__DOT__Sys_clk__0))));
    vlSelfRef.__VactTriggered.set(8U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.top__DOT__O_sdram_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__O_sdram_clk__0))));
    vlSelfRef.__VactTriggered.set(0xaU, ((~ (IData)(vlSelfRef.top__DOT__O_sdram_clk)) 
                                         & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__O_sdram_clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__reset__0 
        = vlSelfRef.top__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ram_controller_inst__DOT__cpu_clk__0 
        = vlSelfRef.top__DOT__ram_controller_inst__DOT__cpu_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ram_controller_inst__DOT__sdram_clk__0 
        = vlSelfRef.top__DOT__ram_controller_inst__DOT__sdram_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__xcursor__0 
        = vlSelfRef.top__DOT__xcursor;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ycursor__0 
        = vlSelfRef.top__DOT__ycursor;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__sdram__DOT__Sys_clk__0 
        = vlSelfRef.top__DOT__sdram__DOT__Sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__O_sdram_clk__0 
        = vlSelfRef.top__DOT__O_sdram_clk;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
