#pragma once

#include <glad/glad.h>
#include <filesystem>

namespace bloom::openGL {

    struct Texture {
        explicit Texture(const std::filesystem::path& imagePath);
        ~Texture();
        GLuint id = 0;
    };

} // namespace bloom::openGL
