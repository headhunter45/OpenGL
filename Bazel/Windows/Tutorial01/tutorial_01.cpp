#include "tutorial_01.h"

#include <OpenGL/gl.h>

GLuint positionBufferObject;
void InitializeOpenGL() { InitializeVertexBuffer(); }
void InitializeVertexBuffer() { glGenBuffers(1, &positionBufferObject); }
