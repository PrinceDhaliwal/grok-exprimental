#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "vm/var-store.h"
#include "common/util.h"

namespace grok {
namespace vm {

//====-------------------------------------------------------------------====
// Defines Global Context for Virtual Machine
//====-------------------------------------------------------------------====
class VMContext {
    DELETE_COPY_AND_MOVE_CONSTRUCTORS(VMContext)
public:
    VMContext();

    /// GetVStore ::= returns the VStore object VS
    VStore *GetVStore();

    /// SetVStore ::= sets the VS
    void SetVStore(VStore *ptr);
private:
    std::unique_ptr<VStore> VS;
};

extern VMContext Gcontext;

/// InitializeVMContext ::= initializes the Gcontext
extern void InitializeVMContext();

/// GetGlobalContext ::= returns pointer to Gcontext
extern VMContext *GetGlobalVMContext();

/// GetVStore ::= returns the VStore object from context
extern VStore *GetVStore(VMContext *context);

} // vm
} // grok
#endif // context.h