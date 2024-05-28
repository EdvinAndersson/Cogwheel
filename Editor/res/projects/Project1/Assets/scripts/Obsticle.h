#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"

#include "Core/src/assets/ScriptManager.h"

struct Obsticle {
};

extern CW::DLLInitData _init_data;
void Obsticle_OnAwake(CW::GameObject game_object, Obsticle& comp);
void Obsticle_OnStart(CW::GameObject game_object, Obsticle& comp);
void Obsticle_OnUpdate(CW::GameObject game_object, Obsticle& comp);
void Obsticle_OnDestroy(CW::GameObject game_object, Obsticle& comp);
