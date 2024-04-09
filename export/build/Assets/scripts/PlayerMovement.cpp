#include "PlayerMovement.h"

void PlayerMovement_OnAwake(CW::GameObject game_object, PlayerMovement& comp) {
}
void PlayerMovement_OnStart(CW::GameObject game_object, PlayerMovement& comp) {
}
void PlayerMovement_OnUpdate(CW::GameObject game_object, PlayerMovement& comp) {
    CW::Transform& transform = game_object.GetComponent<CW::Transform>(_init_data.component_manager);

    if (_init_data.window->GetInputState(CW::W)) {
        transform.position.z += 0.002;
    }
    if (_init_data.window->GetInputState(CW::A)) {
        transform.position.x -= 0.002;
    }
    if (_init_data.window->GetInputState(CW::S)) {
        transform.position.z -= 0.002;
    }
    if (_init_data.window->GetInputState(CW::D)) {
        transform.position.x += 0.002;
    }
}
void PlayerMovement_OnDestroy(CW::GameObject game_object, PlayerMovement& comp) {
}
