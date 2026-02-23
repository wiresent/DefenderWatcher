#include "Watcher.h"
#include <iostream>
#include <Wbemidl.h>
#include <comdef.h>
#include "Logger.cpp"
#pragma comment(lib, "wbemuuid.lib")

void DefenderWatcher::Start() {
    HRESULT hres = CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hres)) {
        Logger::Log("COM initialization failed.");
        return;
    }

    hres = CoInitializeSecurity(NULL, -1, NULL, NULL, 
                                RPC_C_AUTHN_LEVEL_DEFAULT, RPC_C_IMP_LEVEL_IMPERSONATE, 
                                NULL, EOAC_NONE, NULL);
    if (FAILED(hres)) {
        Logger::Log("COM security init failed.");
        return;
    }

    Logger::Log("DefenderWatcher initialized.");
    // Extend: subscribe to WMI/ETW events
}
