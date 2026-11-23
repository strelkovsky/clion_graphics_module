target_precompile_headers(${PROJECT_NAME} PUBLIC "$<$<COMPILE_LANGUAGE:CXX>:${CMAKE_CURRENT_SOURCE_DIR}/headers.hpp>")
