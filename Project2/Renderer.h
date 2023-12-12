#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h>
#include <SDL.h>

// Renderer class handles the basic rendering operations using OpenGL.
class Renderer {
public:
    Renderer();
    ~Renderer();

    // Initializes the renderer with the SDL window.
    void Initialize(SDL_Window* window);

    // Renders a frame. This is called every loop iteration in the main game loop.
    void RenderFrame();

    // Cleans up OpenGL context and resources.
    void Cleanup();

private:
    SDL_GLContext glContext; // The OpenGL context associated with the SDL window.
};

#endif // RENDERER_H
