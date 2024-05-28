#pragma once

#include "CWAssert.h"
#include "Utility.h"
#include <Shlwapi.h>

#include "Core/src/ecs/GameObject.h"
#include "Core/src/Window.h"
#include "Core/src/scene/Scene.h"

namespace CW {

    struct DLLInitData {
        Window *window;
        ComponentManager *component_manager;
        EntityManager *entity_manager;
        Scene *scene;
    };

    typedef void(*PFNInitGeneratedComponentsUtility)(DLLInitData data);
    typedef void(*PFNRegisterGeneratedComponents)();
    typedef void(*PFNOnAwakeGeneratedComponents)();
    typedef void(*PFNOnStartGeneratedComponents)();
    typedef void(*PFNOnUpdateGeneratedComponents)();
    typedef void(*PFNOnDestroyGeneratedComponents)();
    typedef void(*PFNAddGeneratedComponent)(size_t type, GameObject& obj);
    typedef bool(*PFNHasGeneratedComponent)(size_t type, GameObject& obj);
    typedef void(*PFNRemoveGeneratedComponent)(size_t type, GameObject& obj);


    void BuildDLL();
    void FreeDLL();
    void LoadDLLFunctions();

    void InitGeneratedComponentsUtility(Scene *scene);
    void RegisterGeneratedComponents();
    void OnAwakeGeneratedComponents();
    void OnStartGeneratedComponents();
    void OnUpdateGeneratedComponents();
    void OnDestroyGeneratedComponents();
    void AddGeneratedComponent(size_t type, GameObject& obj);
    bool HasGeneratedComponent(size_t type, GameObject& obj);
    void RemoveGeneratedComponent(size_t type, GameObject& obj);
}