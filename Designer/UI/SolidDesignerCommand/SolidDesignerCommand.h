#pragma once
#include "AliceMacroDefinitions.h"
#include <iostream>
#ifdef SOLID_DESIGNER_COMMAND_HOME
#define SOLID_DESIGNER_COMMAND_EXPORT DLL_EXPORT
#else
#define SOLID_DESIGNER_COMMAND_EXPORT DLL_IMPORT
#endif

#include "AliceGuidUtils.h"
namespace soliddesignercommand
{
	extern const Guid MODULE_ID;
}

namespace
{
    void InitTest()
    {
        int i = 0;
        std::cout << "Here is init test..." << std::endl;
    }

    void UnInitTest()
    {
        int i = 0;
        std::cout << "Here is uninit test..." << std::endl;
    }
}


extern "C" void InitializePlugin()
{
    InitTest();
}


extern "C" void UnInitializePlugin()
{
    UnInitTest();
}



