#include "../include/vulkan-handler.h"

#include <volk.h>
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_core.h>
#include <SDL3/SDL_vulkan.h>

vulkan_handler::vulkan_handler() {
    initialize_vulkan_instances();
}

vulkan_handler::~vulkan_handler() {

}

void vulkan_handler::initialize_vulkan_instances() {
    SDL_Vulkan_LoadLibrary(nullptr);
    volkInitializeCustom((PFN_vkGetInstanceProcAddr) SDL_Vulkan_GetVkGetInstanceProcAddr());

    required_extensions = SDL_Vulkan_GetInstanceExtensions(&extensions_count);

#ifdef __MACOS__
    char **extensions = SDL_malloc(sizeof(char *) * (extensionsCount + 1));
    SDL_memcpy(extensions, requiredExtensions, sizeof(char *) * extensionsCount);
#endif
}
