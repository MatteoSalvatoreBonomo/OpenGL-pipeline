#include <GLEW/glew.h>
#include <GLFW/glfw3.h>
#include "values.h"

static class vertexBuffer {
public:
	vertexBuffer(i32 s, ui32 buffer);
	~vertexBuffer();
private:
	i32 s;
	i32 vertexSize;
	ui32 buffer;
	ui32 stride;
	ui32 index;
};