#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"
#include "Core/src/assets/ScriptManager.h"

struct PlayerMovement {
};

extern CW::DLLInitData _init_data;
void PlayerMovement_OnAwake(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnStart(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnUpdate(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnDestroy(CW::GameObject game_object, PlayerMovement& comp);
