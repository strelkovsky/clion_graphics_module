#include "buffer.hpp"

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

    auto Buffer::storage(uint32_t size, const void *data, uint32_t flags) const -> void
    {
        glNamedBufferStorage(handle, size, data, flags);
    }

    auto Buffer::bind(uint32_t target) const -> void
    {
        // TODO assert the correct/desired type of buffer

        glBindBuffer(target, handle);
    }

    auto Buffer::bind(uint32_t target, uint32_t index) const -> void
    {
        // TODO assert the correct/desired type of buffer

        glBindBufferBase(target, index, handle);
    }

    auto Buffer::bind(uint32_t target, uint32_t index, uint32_t start, uint32_t size) const -> void
    {
        // TODO assert the correct/desired type of buffer

        glBindBufferRange(target, index, handle, start, size);
    }

    auto Buffer::subdata(uint32_t start, uint32_t size, const void *data) const -> void
    {
        glNamedBufferSubData(handle, start, size, data);
    }

    auto Buffer::map(uint32_t start, uint32_t size, uint32_t flags) const -> void*
    {
        return glMapNamedBufferRange(handle, start, size, flags);
    }

    auto Buffer::unmap() const -> void
    {
        glUnmapNamedBuffer(handle);
    }
}
