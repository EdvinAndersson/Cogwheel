#include "Physics.h"

void Physics_OnAwake(CW::GameObject game_object, Physics& comp) {
}
void Physics_OnStart(CW::GameObject game_object, Physics& comp) {
}
void Physics_OnUpdate(CW::GameObject game_object, Physics& comp) {
    CW::Transform& transform = game_object.GetComponent<CW::Transform>(_init_data.component_manager);

    comp.vel += -0.0001;

    transform.position.y += comp.vel;

    if (transform.position.y < 1.0) {
        comp.vel = 0;
        transform.position.y = 1.0;
    }
}
void Physics_OnDestroy(CW::GameObject game_object, Physics& comp) {
}
