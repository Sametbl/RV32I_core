// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprocessor_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vprocessor_tb::Vprocessor_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vprocessor_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vprocessor_tb::Vprocessor_tb(const char* _vcname__)
    : Vprocessor_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vprocessor_tb::~Vprocessor_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vprocessor_tb___024root___eval_debug_assertions(Vprocessor_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vprocessor_tb___024root___eval_static(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___eval_initial(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___eval_settle(Vprocessor_tb___024root* vlSelf);
void Vprocessor_tb___024root___eval(Vprocessor_tb___024root* vlSelf);

void Vprocessor_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprocessor_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprocessor_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vprocessor_tb___024root___eval_static(&(vlSymsp->TOP));
        Vprocessor_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vprocessor_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vprocessor_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vprocessor_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vprocessor_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vprocessor_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vprocessor_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vprocessor_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vprocessor_tb___024root___eval_final(Vprocessor_tb___024root* vlSelf);

VL_ATTR_COLD void Vprocessor_tb::final() {
    Vprocessor_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vprocessor_tb::hierName() const { return vlSymsp->name(); }
const char* Vprocessor_tb::modelName() const { return "Vprocessor_tb"; }
unsigned Vprocessor_tb::threads() const { return 1; }
void Vprocessor_tb::prepareClone() const { contextp()->prepareClone(); }
void Vprocessor_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vprocessor_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vprocessor_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vprocessor_tb___024root__trace_init_top(Vprocessor_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vprocessor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprocessor_tb___024root*>(voidSelf);
    Vprocessor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vprocessor_tb___024root__trace_decl_types(tracep);
    Vprocessor_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vprocessor_tb___024root__trace_register(Vprocessor_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vprocessor_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vprocessor_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vprocessor_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
