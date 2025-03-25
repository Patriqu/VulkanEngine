CFLAGS = -std=c++23 -O2

LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

Main: main.cpp
	g++ $(CFLAGS) -o main main.cpp $(LDFLAGS)

.PHONY: test clean

test: Main
	./main

clean:
	rm -f main
