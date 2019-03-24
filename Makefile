CC = g++
LIBPATH = glfw3.dll
LIB = -lglfw3 -lopengl32
MAIN = main.cpp

all: $(MAIN)
	$(CC) -Wall $(MAIN) $(LIBPATH) $(LIB) -o main