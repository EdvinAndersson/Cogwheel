#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"

#include "Core/src/assets/ScriptManager.h"

struct Gravity {
    CW::Transform *transform;
    float velocity_y;
};

extern CW::DLLInitData _init_data;
void Gravity_OnAwake(CW::GameObject game_object, Gravity& comp);
void Gravity_OnStart(CW::GameObject game_object, Gravity& comp);
void Gravity_OnUpdate(CW::GameObject game_object, Gravity& comp);
void Gravity_OnDestroy(CW::GameObject game_object, Gravity& comp);
