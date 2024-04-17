#include "PlayerMovement.h"

void PlayerMovement_OnAwake(CW::GameObject game_object, PlayerMovement& comp) {
    printf("PlayerMovement_OnAwake");
}
void PlayerMovement_OnStart(CW::GameObject game_object, PlayerMovement& comp) {
    printf("PlayerMovement_OnStart");
}
void PlayerMovement_OnUpdate(CW::GameObject game_object, PlayerMovement& comp) {
    CW::Transform& transform = game_object.GetComponent<CW::Transform>(_init_data.component_manager);

    if (_init_data.window->GetInputState(CW::W)) {
        transform.position.z += 0.02;
    }
    if (_init_data.window->GetInputState(CW::A)) {
        transform.position.x -= 0.02;
    }
    if (_init_data.window->GetInputState(CW::S)) {
        transform.position.z -= 0.02;
    }
    if (_init_data.window->GetInputState(CW::D)) {
        transform.position.x += 0.02;
    }
    if (game_object.HasComponent<Physics>(_init_data.component_manager, _init_data.entity_manager)) {
        Physics& physics = game_object.GetComponent<Physics>(_init_data.component_manager);

        if (_init_data.window->GetInputState(CW::SPACE) && physics.vel == 0) {
            physics.vel = 0.03;
        }
    }
}
void PlayerMovement_OnDestroy(CW::GameObject game_object, PlayerMovement& comp) {
}
