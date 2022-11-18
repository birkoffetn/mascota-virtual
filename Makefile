CC= g++
CXXFLAGS= -Wall
SOURCES= $(wildcard *.cpp)
OBJECTS= $(patsubst %.cpp,%.o,$(SOURCES))
BINARY= game

all: $(BINARY) $(OBJECTS)

run: $(BINARY) $(OBJECTS)
	./$<
clean:
	$(RM) $(BINARY) $(OBJECTS)
