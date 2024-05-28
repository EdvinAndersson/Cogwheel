#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"

#include "Core/src/assets/ScriptManager.h"
#include "Gravity.h"
#include "Obsticle.h"

struct PlayerMovement {
    Gravity *gravity;
    CW::Transform *transform, *camera_transform;

    vec3s spawn_position, camera_spawn_position;
};

extern CW::DLLInitData _init_data;
void PlayerMovement_OnAwake(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnStart(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnUpdate(CW::GameObject game_object, PlayerMovement& comp);
void PlayerMovement_OnDestroy(CW::GameObject game_object, PlayerMovement& comp);
