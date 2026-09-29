CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = calculator

OBJS = main.o mathfuncs.o randfuncs.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp

clean:
	rm -f $(OBJS) $(TARGET)
