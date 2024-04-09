#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"
#include "Core/src/assets/ScriptManager.h"

struct TestComponent2 {
};

extern CW::DLLInitData _init_data;

void TestComponent2_OnAwake(CW::GameObject game_object, TestComponent2& comp);
void TestComponent2_OnStart(CW::GameObject game_object, TestComponent2& comp);
void TestComponent2_OnUpdate(CW::GameObject game_object, TestComponent2& comp);
void TestComponent2_OnDestroy(CW::GameObject game_object, TestComponent2& comp);