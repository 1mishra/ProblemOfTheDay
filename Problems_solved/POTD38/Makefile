EXENAME = q29

OBJS = main.o func.o

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	    $(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o: main.cpp func.h
	    $(CXX) $(CXXFLAGS) main.cpp

func.o: func.cpp func.h
	    $(CXX) $(CXXFLAGS) func.cpp

clean:
	rm *.o q29
