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

    auto Pipeline::pixel_store(uint32_t param, int32_t value) -> void
    {
        glPixelStorei(param, value);
    }

    auto Pipeline::blend(uint32_t rgb_src, uint32_t rgb_dst, uint32_t alpha_src, uint32_t alpha_dst) -> void
    {
        glBlendFuncSeparate(rgb_src, rgb_dst, alpha_src, alpha_dst);
    }
}

