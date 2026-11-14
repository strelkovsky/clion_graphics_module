#pragma once

#include "renderbuffer.hpp"
#include "texture.hpp"

namespace graphics::opengl
{
    class framebuffer final : public Object
    {
    public:
        auto create() -> void override;
        auto destroy() const -> void override;

        auto attach(const Texture& texture, uint32_t attachment, int32_t level) -> void;
        auto attach(const Renderbuffer& buffer, uint32_t attachment) -> void;

        auto clear(const float* color, int32_t level) const -> void; // TODO try it with span?
        auto clear(float depth) const -> void;
       // auto clear(float value, uint32_t buffer_type, int32_t level) const -> void;

        auto bind() const -> void;
    };
}
