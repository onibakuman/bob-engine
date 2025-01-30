#include <cstdint>
class vulkan_handler {
public:
    vulkan_handler();
    vulkan_handler(vulkan_handler &&) = default;
    vulkan_handler(const vulkan_handler &) = default;
    vulkan_handler &operator=(vulkan_handler &&) = default;
    vulkan_handler &operator=(const vulkan_handler &) = default;
    ~vulkan_handler();

private:
    void initialize_vulkan_instances();
    
    char const *const *required_extensions;
    std::uint32_t extensions_count;

};
