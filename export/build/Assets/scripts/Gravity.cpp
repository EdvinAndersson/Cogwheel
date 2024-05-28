#include "Gravity.h"

void Gravity_OnAwake(CW::GameObject game_object, Gravity& comp) {
}
void Gravity_OnStart(CW::GameObject game_object, Gravity& comp) {
    comp.transform = &game_object.GetComponent<CW::Transform>(_init_data.component_manager);

    comp.velocity_y = 0;
}
void Gravity_OnUpdate(CW::GameObject game_object, Gravity& comp) {
    comp.velocity_y -= 0.002f;

    comp.transform->position.y += comp.velocity_y;
}
void Gravity_OnDestroy(CW::GameObject game_object, Gravity& comp) {
}
