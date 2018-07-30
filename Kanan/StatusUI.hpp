#pragma once

#include <string>

#include <imgui.h>

#include "Mod.hpp"

namespace kanan {
    class StatusUI : public Mod {
    public:
        StatusUI();

        void onFrame() override;
        void onUI() override;

        void onConfigLoad(const Config& cfg) override;
        void onConfigSave(Config& cfg) override;

    private:
        bool m_isShowing;
        std::string m_hp;
        std::string m_mp;
        std::string m_sp;

        void progressBar(float fraction, const ImVec2& sizeArg, ImU32 color, const char* overlay);
    };
}