#include "commands.hpp"

namespace graphics::opengl
{
    auto Commands::draw_vertices(uint32_t primitive, int32_t start, int32_t count) -> void
    {
        glDrawArrays(primitive, start, count);
    }

    auto Commands::draw_elements(uint32_t primitive, int32_t start, int32_t count) -> void
    {
        // TODO handle the start/ofset in here

        glDrawElements(primitive, count, GL_UNSIGNED_INT, reinterpret_cast<const void*>(static_cast<uintptr_t>(start) * sizeof(uint32_t)));
    }

    auto Commands::viewport(int32_t x, int32_t y, int32_t width, int32_t height) -> void
    {
        glViewport(x, y, width, height);
    }

    auto Commands::clear(float r, float g, float b, float a) -> void
    {
        glClearColor(r, g, b, a);
    }

    auto Commands::clear(uint32_t mask) -> void
    {
        glClear(mask);
    }

    auto Commands::read_piexels(int32_t x, int32_t y, int32_t width, int32_t height, uint32_t format, uint32_t type, int32_t size) -> void
    {
        // TODO in the future calculate the buffer size inside here? based on width/height and format? remove size parameter after
        // если мы передаем в последний параметр nullptr, то gpu поймет, что мы помещаем пиксели в pbo
        glReadnPixels(x, y, width, height, format, type, size, nullptr);
    }
}
