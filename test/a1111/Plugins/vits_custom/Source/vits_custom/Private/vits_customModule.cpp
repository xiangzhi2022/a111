#include "Modules/ModuleManager.h"

class FVitsCustomModule : public IModuleInterface
{
public:
    virtual void StartupModule() override {}
    virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE(FVitsCustomModule, vits_custom)

