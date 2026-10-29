#pragma once

#include <cstdint>

namespace graphics::opengl
{
    // можно здесь реаализовать кеш конвейера
    class Pipeline
    {
    public:
        static auto enable(uint32_t option) -> void;
        static auto disable(uint32_t option) -> void;

        Pipeline() = default;
    };
}
