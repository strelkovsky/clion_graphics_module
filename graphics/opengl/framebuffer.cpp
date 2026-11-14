#include "framebuffer.hpp"

namespace graphics::opengl
{
    auto framebuffer::create() -> void
    {
        glCreateFramebuffers(1,&handle);
    }

    auto framebuffer::destroy() const -> void
    {
        glDeleteFramebuffers(1, &handle);
    }

    auto framebuffer::attach(const Texture &texture, uint32_t attachment, int32_t level) -> void
    {
        glNamedFramebufferTexture(handle, attachment, texture.handle, level);
    }

    auto framebuffer::attach(const Renderbuffer &buffer, uint32_t attachment) -> void
    {
        glNamedFramebufferRenderbuffer(handle, attachment, GL_RENDERBUFFER, buffer.handle);
    }

    auto framebuffer::clear(const float *color, int32_t level) const -> void
    {
        glClearNamedFramebufferfv(handle, GL_COLOR, level, color);
    }

    auto framebuffer::clear(float depth) const -> void
    {
        glClearNamedFramebufferfv(handle, GL_DEPTH, 0, &depth);
    }

    // auto framebuffer::clear(float value, uint32_t buffer_type, int32_t level) const -> void
    // {
    //     glClearNamedFramebufferfv(handle, buffer_type, level, &value);
    // }

    auto framebuffer::bind() const -> void
    {
        glBindFramebuffer(GL_FRAMEBUFFER, handle);
    }
}

