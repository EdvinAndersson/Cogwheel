#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"

#include "Core/src/assets/ScriptManager.h"

struct Physics {
    float vel = 0;
};

extern CW::DLLInitData _init_data;
void Physics_OnAwake(CW::GameObject game_object, Physics& comp);
void Physics_OnStart(CW::GameObject game_object, Physics& comp);
void Physics_OnUpdate(CW::GameObject game_object, Physics& comp);
void Physics_OnDestroy(CW::GameObject game_object, Physics& comp);
