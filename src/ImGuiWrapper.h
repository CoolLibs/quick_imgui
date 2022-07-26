#pragma once

#include <imgui/imgui.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace ImGuiWrapper {

GLFWwindow* create_window(const char* title);
void        begin_frame();
void        end_frame(GLFWwindow* window, ImVec4 background_color = {0.45f, 0.55f, 0.60f, 1.00f});
void        shutdown(GLFWwindow* window);

} // namespace ImGuiWrapper