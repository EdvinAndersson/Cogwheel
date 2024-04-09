#pragma once

#include "Core/src/Utility.h"
#include "Core/src/ecs/GameObject.h"
#include "Core/src/assets/ScriptManager.h"

extern "C" {
    #ifdef EXPORTING_DLL
        extern __declspec(dllexport) void InitGeneratedComponentsUtility(CW::DLLInitData init_data);
        extern __declspec(dllexport) void RegisterGeneratedComponents();
        extern __declspec(dllexport) void OnAwakeGeneratedComponents();
        extern __declspec(dllexport) void OnStartGeneratedComponents();
        extern __declspec(dllexport) void OnUpdateGeneratedComponents();
        extern __declspec(dllexport) void OnDestroyGeneratedComponents();
        extern __declspec(dllexport) void AddGeneratedComponent(size_t type, CW::GameObject& obj);
        extern __declspec(dllexport) bool HasGeneratedComponent(size_t type, CW::GameObject& obj);
        extern __declspec(dllexport) void RemoveGeneratedComponent(size_t type, CW::GameObject& obj);
    #else
        extern __declspec(dllimport) void InitGeneratedComponentsUtility(CW::DLLInitData init_data);
        extern __declspec(dllimport) void RegisterGeneratedComponents();
        extern __declspec(dllimport) void OnAwakeGeneratedComponents();
        extern __declspec(dllimport) void OnStartGeneratedComponents();
        extern __declspec(dllimport) void OnUpdateGeneratedComponents();
        extern __declspec(dllimport) void OnDestroyGeneratedComponents();
        extern __declspec(dllimport) void AddGeneratedComponent(size_t type, CW::GameObject& obj);
        extern __declspec(dllimport) bool HasGeneratedComponent(size_t type, CW::GameObject& obj);
        extern __declspec(dllimport) void RemoveGeneratedComponent(size_t type, CW::GameObject& obj);
    #endif
};