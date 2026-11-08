#include "texture.hpp"

#include <glad/glad.h>

#include <cassert>

namespace graphics::opengl
{
    auto Texture::create() -> void
    {
        assert(type != 0); // TODO check for existing texture target types

        glCreateTextures(type, 1, &handle);
    }

    auto Texture::destroy() const -> void
    {
        glDeleteTextures(1, &handle);
    }

    auto Texture::storage(int32_t width, int32_t height, uint32_t format, uint32_t levels) const -> void
    {
        glTextureStorage2D(handle, levels, format, width, height);
    }

    auto Texture::subdata(int32_t width, int32_t height, uint32_t format, uint32_t level, const void *pixels) const -> void
    {
        // TODO expose xoffset and yoffset in the future - maybe we will have case to use them
        // TODO export the type because maybe in the future we will need it as a different values
        glTextureSubImage2D(handle, level, 0, 0, width, height, format, GL_UNSIGNED_BYTE, pixels);
    }

    auto Texture::bind(uint32_t slot) const -> void
    {
        glBindTextureUnit(slot, handle);
    }
}
