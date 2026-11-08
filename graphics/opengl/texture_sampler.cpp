#include "texture_sampler.hpp"

#include <glad/glad.h>

namespace graphics::opengl
{
    auto TextureSampler::create() -> void
    {
        glCreateSamplers(1, &handle);
    }

    auto TextureSampler::destroy() const -> void
    {
        glDeleteSamplers(1, &handle);
    }

    auto TextureSampler::parameter(uint32_t param, int32_t value) const -> void
    {
        glSamplerParameteri(handle, param, value);
    }

    auto TextureSampler::bind(uint32_t slot) const -> void
    {
        glBindSampler(slot, handle);
    }
}
