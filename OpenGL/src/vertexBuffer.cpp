#include "vertexBuffer.h"

vertexBuffer::vertexBuffer(i32 s, ui32 buffer) : s(s), buffer(buffer)
{

	float pos[6] = {
		-0.5f, -0.5f,
		 0.5f, -0.5f,
		 0.0f,  0.5f
	};

	glGenBuffers(s, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(float) * 6, pos, GL_STATIC_DRAW);

	index = 0;
	glEnableVertexAttribArray(index);

	vertexSize = 2;
	stride = sizeof(float) * vertexSize;
	glVertexAttribPointer(index, vertexSize, GL_FLOAT, GL_FALSE, stride, (const void*)0);

	glBindBuffer(GL_ARRAY_BUFFER, buffer);
}

vertexBuffer::~vertexBuffer()
{
	glDeleteBuffers(s, &buffer);
}