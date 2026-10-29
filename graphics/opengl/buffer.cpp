#include "buffer.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto Buffer::create() -> void
    {
        glCreateBuffers(1, &handle);
    }

    auto Buffer::destroy() const -> void
    {
        glDeleteBuffers(1, &handle);
    }

    auto Buffer::data(uint32_t size, const void *data) const -> void
    {
        glNamedBufferData(handle, size, data, GL_STATIC_DRAW);
    }

    auto Buffer::bind(uint32_t target) const -> void
    {
        glBindBuffer(target, handle);
    }
}
