#include "renderbuffer.hpp"

namespace graphics::opengl
{
    auto Renderbuffer::create() -> void
    {
        glCreateRenderbuffers(1, &handle);
    }

    auto Renderbuffer::destroy() const -> void
    {
        glDeleteRenderbuffers(1, &handle);
    }

    auto Renderbuffer::storage(uint32_t width, uint32_t height, uint32_t format) const -> void
    {
        glNamedRenderbufferStorage(handle, format, width, height);
    }
}
