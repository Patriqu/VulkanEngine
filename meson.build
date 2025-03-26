project('VulkanEngine', 'cpp',
  default_options : ['cpp_std=c++23']
)

glfw = dependency('glfw3')
vulkan = dependency('vulkan')

src = files('src/VulkanApplication.cpp')

executable('VulkanEngine', src, dependencies: [glfw, vulkan] #,
#  include_directories: include_directories('include')
)
