target_link_libraries(${PROJECT_NAME} PUBLIC glad)

target_precompile_headers(${PROJECT_NAME} PRIVATE "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/headers.hpp>")
target_sources(${PROJECT_NAME} PRIVATE buffer.cpp vertex_array.cpp commands.cpp pipeline.cpp renderbuffer.cpp
                                       shader_stage.cpp shader_program.cpp texture_sampler.cpp texture.cpp
        framebuffer.cpp)
