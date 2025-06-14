// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__clk;
        CData/*0:0*/ testbench__DOT__rst_n;
        CData/*7:0*/ testbench__DOT__A;
        CData/*7:0*/ testbench__DOT__B;
        CData/*2:0*/ testbench__DOT__op_sel;
        CData/*7:0*/ testbench__DOT__result;
        CData/*0:0*/ testbench__DOT__carry;
        CData/*7:0*/ testbench__DOT__expected_result;
        CData/*0:0*/ testbench__DOT__expected_carry;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__A_reg;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__B_reg;
        CData/*2:0*/ testbench__DOT__my_dutty__DOT__op_sel_reg;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__carry_reg;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__A;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__B;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__result_d;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__shift_out_bit;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit0____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit1____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit2____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit3____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit4____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit5____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit6____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_A__DOT____Vcellout__bit7____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit0____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit1____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit2____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit3____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit4____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit5____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit6____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__fetch_B__DOT____Vcellout__bit7____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_SUB__DOT__wire2;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__check_for_LEFT_SHIFT__DOT__wire2;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u1____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u2____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u3____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u3____pinNumber2;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u4____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u5____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u6____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellinp__u6____pinNumber2;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT____Vcellout__u7____pinNumber5;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u1__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u2__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u3__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u4__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u5__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u6__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u7__DOT__w1;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u01__DOT__u8__DOT__u8__DOT__w1;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage1;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage2;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage3;
        CData/*7:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__stage4;
        CData/*1:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__u67__DOT__sel_output;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit0____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit1____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit2____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit3____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit4____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit5____pinNumber4;
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit6____pinNumber4;
    };
    struct {
        CData/*0:0*/ testbench__DOT__my_dutty__DOT__dutty__DOT__S_buff__DOT____Vcellout__bit7____pinNumber4;
        CData/*1:0*/ __VdfgRegularize_hd87f99a1_2_0;
        CData/*1:0*/ __VdfgRegularize_hd87f99a1_2_1;
        CData/*1:0*/ __VdfgRegularize_hd87f99a1_2_2;
        CData/*0:0*/ __VdlyVal__testbench__DOT__clk__v0;
        CData/*0:0*/ __VdlySet__testbench__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ testbench__DOT__passed;
        IData/*31:0*/ testbench__DOT__failed;
        IData/*31:0*/ testbench__DOT__a_val;
        IData/*31:0*/ testbench__DOT__b_val;
        IData/*31:0*/ testbench__DOT__MAIN__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h51b63ebd__0;
    VlTriggerScheduler __VtrigSched_hf827cc8e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;
    VlUnpacked<std::string, 8> testbench__DOT__op_name;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
