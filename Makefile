CXX=clang++
CXXFLAGS=-Wall -Wextra -std=c++11 -g
LDFLAGS=-lsfml-system -lsfml-window -lsfml-graphics -lchipmunk
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
EXEC=ecs

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean:
	rm *.o
