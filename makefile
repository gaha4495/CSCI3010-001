# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++20  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: main test

# runs for "make main"
# the line below this one must be TABBED in (not spaces!)
# files functions_to_implement.o and main.cpp will be monitored for changes to know if it needs to be re-made
main: functions_to_implement.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp functions_to_implement.o -o main # name of output should be consistent

# Compiles functions_to_implement.cpp to functions_to_implement.o
# functions_to_implement.o depends on functions_to_implement.cpp and functions_to_implement.h
functions_to_implement.o: functions_to_implement.cpp functions_to_implement.h
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# runs for "make test"
# Compiles test.cpp to test.o and links to functions_to_implement.o
test: test.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.o functions_to_implement.o -o test

# Compiles test.cpp to test.o
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp

# runs for "make clean"
clean:
	rm -f functions_to_implement.o main test test.o  # include all targets here
