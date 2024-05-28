#include "PlayerMovement.h"

void PlayerMovement_OnAwake(CW::GameObject game_object, PlayerMovement& comp) {
}
void PlayerMovement_OnStart(CW::GameObject game_object, PlayerMovement& comp) {
    comp.gravity = &game_object.GetComponent<Gravity>(_init_data.component_manager);
    comp.transform = &game_object.GetComponent<CW::Transform>(_init_data.component_manager);

    comp.spawn_position = comp.transform->position;

    for (CW::GameObject obj : _init_data.scene->game_objects) {
        if (obj.HasComponent<CW::Camera>(_init_data.component_manager, _init_data.entity_manager)) {
            comp.camera_transform = &obj.GetComponent<CW::Transform>(_init_data.component_manager);
            comp.camera_spawn_position = comp.camera_transform->position;
        }
    }
}
void PlayerMovement_OnUpdate(CW::GameObject game_object, PlayerMovement& comp) {
    comp.transform->position.x += 0.03f;

    if (_init_data.window->GetInputState(CW::KeyCode::SPACE)) {
        comp.gravity->velocity_y = 0.07f;
    }

    vec2s bounds_x = { comp.transform->position.x - comp.transform->scale.x / 2.0f, comp.transform->scale.x };
    vec2s bounds_y = { comp.transform->position.y - comp.transform->scale.y / 2.0f, comp.transform->scale.y };
    vec2s bounds_z = { comp.transform->position.z - comp.transform->scale.z / 2.0f, comp.transform->scale.z };

    for (CW::GameObject obj : _init_data.scene->game_objects) {
        if (obj.HasComponent<Obsticle>(_init_data.component_manager, _init_data.entity_manager)) {
            CW::Transform t = obj.GetComponent<CW::Transform>(_init_data.component_manager);

            vec2s o_bounds_x = { t.position.x - t.scale.x / 2.0f, t.scale.x };
            vec2s o_bounds_y = { t.position.y - t.scale.y / 2.0f, t.scale.y };
            vec2s o_bounds_z = { t.position.z - t.scale.z / 2.0f, t.scale.z };

            if (bounds_x.x + bounds_x.y > o_bounds_x.x && bounds_x.x < o_bounds_x.x + o_bounds_x.y && 
                bounds_y.x + bounds_y.y > o_bounds_y.x && bounds_y.x < o_bounds_y.x + o_bounds_y.y && 
                bounds_z.x + bounds_z.y > o_bounds_z.x && bounds_z.x < o_bounds_z.x + o_bounds_z.y) {

                comp.transform->position = comp.spawn_position;
                comp.camera_transform->position = comp.camera_spawn_position;
            }
        }
    }
}
void PlayerMovement_OnDestroy(CW::GameObject game_object, PlayerMovement& comp) {
}
