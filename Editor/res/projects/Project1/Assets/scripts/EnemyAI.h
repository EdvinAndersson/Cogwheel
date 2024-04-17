#pragma once

#include "Core/src/ecs/GameObject.h"
#include "Core/src/ecs/Components.h"

#include "Core/src/assets/ScriptManager.h"

struct EnemyAI {
};

extern CW::DLLInitData _init_data;
void EnemyAI_OnAwake(CW::GameObject game_object, EnemyAI& comp);
void EnemyAI_OnStart(CW::GameObject game_object, EnemyAI& comp);
void EnemyAI_OnUpdate(CW::GameObject game_object, EnemyAI& comp);
void EnemyAI_OnDestroy(CW::GameObject game_object, EnemyAI& comp);
