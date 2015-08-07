
#pragma once

#include <Atomic/Container/Str.h>

using namespace Atomic;

class JSBFunction;
class JSBPackage;
class JSBModule;

namespace ToolCore
{

    class JSBFunctionType;

    class JSBHaxe
    {

    public:

        void Emit(JSBPackage* package, const String& path);

    private:

        String source_;

        void Begin();

        void End();

        void ExportFunction(JSBFunction* function);

        String GetScriptType(JSBFunctionType* ftype);

        bool checkV(JSBClass* clazz, const String name, const String type);
        bool IsOverride(JSBFunction* function);
        JSBFunction* findFunctionInBase(JSBFunction* function);

        void ExportEnums(JSBModule* moduleName);
        void RegisterEnums(JSBModule* moduleName);
        void ExportModuleConstants(JSBModule*  moduleName);
        void ExportModuleClasses(JSBModule*  moduleName);

        void WriteToFile(const String& path);

        JSBPackage* package_;


    };

}
