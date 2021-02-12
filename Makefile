CXX = g++

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CXXFLAGS = -std=c++14 -g -Wall

#OBJECTS = encryptor.o file_io.o hasher.o node.o
#HEADERS := $(shell find    "*.cpp" "*.hpp" )

#main: main.o $(OBJECTS)
#	$(CXX) $(CXXFLAGS) -o $@ $^
#
#$(OBJECTS): $(HEADERS)

Project1: main.o encryptor.o file_io.o hasher.o node.o
	$(CXX) $(CXXFLAGS) -o $@ $^



#clean:
#	rm -rf *.dSYM
#	$(RM) *.o *.gc* main *.o