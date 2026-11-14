#include "pipeline.hpp"

namespace graphics::opengl
{
    auto Pipeline::enable(uint32_t option) -> void
    {
        glEnable(option);
    }

    auto Pipeline::disable(uint32_t option) -> void
    {
        glDisable(option);
    }
}

