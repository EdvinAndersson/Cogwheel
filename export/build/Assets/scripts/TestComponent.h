#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"
#include "Core/src/assets/ScriptManager.h"

struct TestComponent {
};

extern CW::DLLInitData _init_data;

void TestComponent_OnAwake(CW::GameObject game_object, TestComponent& comp);
void TestComponent_OnStart(CW::GameObject game_object, TestComponent& comp);
void TestComponent_OnUpdate(CW::GameObject game_object, TestComponent& comp);
void TestComponent_OnDestroy(CW::GameObject game_object, TestComponent& comp);