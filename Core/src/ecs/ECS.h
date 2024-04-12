#pragma once

#include "../event/IEventListener.h"
#include "../scene/Scene.h"

#include "assets/AssetManager.h"
#include "GameObject.h"
#include "Rendering/Renderer3D.h"
#include "Rendering/WorldCamera.h"

namespace CW {
    class ECS : public IEventListener {
        public:
            ECS(bool build_scripts_dll);

            void AwakeComponents();
            void StartComponents();
            void UpdateComponenets(bool with_generated = true);
            void DestroyComponents();

            void UpdateBaseComponents();
            void OnEvent(Event event) override;
            void LoadScripts(bool compile_scripts = false);
            void CompileScripts();
            void ComplieAndRegisterScripts();
        private:
            bool build_scripts_dll;
    };
}