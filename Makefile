CC = g++
LIBPATH = glfw3.dll glew32.dll
LIB = -lglfw3 -lopengl32 -lgdi32 -lglew32
MAIN = main.cpp

all: $(MAIN)
	$(CC) -Wall $(MAIN) $(LIBPATH) $(LIB) -o main