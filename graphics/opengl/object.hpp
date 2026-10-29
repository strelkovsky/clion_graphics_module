#pragma once

#include <cstdint>

namespace graphics::opengl
{
    class Object
    {
    public:
        virtual auto create() -> void = 0;
        virtual auto destroy() const -> void = 0; // TODO destroy should be something with the handle also?

        virtual ~Object() = default;
    //protected:
        uint32_t handle; // TODO make this private and have ahandle getter
    };
}
