#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

using namespace std;

int main() {
  glfwInit();

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  GLFWwindow* window = glfwCreateWindow(1280, 720, "Hello Vulkan", nullptr, nullptr);

  uint32_t extensionCount = 0;
  vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

  // todo: do not use cout, replace with print or other modern c++ solution
  std::cout << extensionCount << " extensions supported\n";

  // testing glm library
  glm::mat4 matrix;
  glm::vec4 vec;
  auto test = matrix * vec; 

  // main loop
  while(!glfwWindowShouldClose(window)) {
	 glfwPollEvents();
  }

  glfwDestroyWindow(window);

  glfwTerminate();  

  return 0;
}
