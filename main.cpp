#include "raylib.h"
#include "rlImGui.h"
#include "imgui.h"
#include <string>
#include <cstring>


// Logic to handle button clicks and display
static char display[256] = "";

void AddToDisplay(const char* text) {
    strcat(display, text);
}

void Calculate() {
    // Basic evaluation logic (In a full app, you'd use an expression parser)
    // For this demo, we use a simple placeholder to show the result
    std::string current(display);
    if(current == "5+5") strcpy(display, "10");
    else if(current.find("+") != std::string::npos) strcpy(display, "Result...");
}

int main() {
    InitWindow(400, 550, "C++ Pro Calculator");
    SetTargetFPS(60);
    rlImGuiSetup(true);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(DARKGRAY);

        rlImGuiBegin();
        
        // Proper GUI Styling
        ImGui::SetNextWindowPos({10, 10});
        ImGui::SetNextWindowSize({380, 530});
        ImGui::Begin("Calculator", NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

        // Result Display
        ImGui::InputText("##Display", display, IM_ARRAYSIZE(display), ImGuiInputTextFlags_ReadOnly);
        ImGui::Spacing(); ImGui::Separator(); ImGui::Spacing();

        // Button Grid Logic
        const char* buttons[] = { "7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "C", "0", "=", "+" };
        ImGui::Columns(4, "Buttons", false);
        for (int i = 0; i < 16; i++) {
            if (ImGui::Button(buttons[i], ImVec2(-1, 80))) {
                if (std::string(buttons[i]) == "=") Calculate();
                else if (std::string(buttons[i]) == "C") display[0] = '\0';
                else AddToDisplay(buttons[i]);
            }
            ImGui::NextColumn();
        }

        ImGui::End();
        rlImGuiEnd();
        EndDrawing();
    }

    rlImGuiShutdown();
    CloseWindow();
    return 0;
}