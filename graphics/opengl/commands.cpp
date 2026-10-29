#include "commands.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto Commands::draw_vertices(uint32_t primitive, int32_t start, int32_t count) -> void
    {
        glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(uint32_t primitive, int32_t start, int32_t count) -> void
    {
        glDrawElements(primitive, count, GL_UNSIGNED_INT, nullptr);
    }

    auto Commands::clear(float r, float g, float b, float a) -> void
    {
        glClearColor(r, g, b, a);
    }

    auto Commands::clear(uint32_t mask) -> void
    {
        glClear(mask);
    }
}
