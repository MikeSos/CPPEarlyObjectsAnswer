#Makefile

#Compiler name
CXX = g++

#Compile flags
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


#Source and header files
SRC1 = Numbers.cpp
SRC2 = Main.cpp
SRCS = ${SRC1} ${SRC2}

HEADER1 = Numbers.hpp

HEADERS = ${HEADER1} 

PROG1 = my_prog1
PROGS = ${PROG1}

#Build section

#Type make will call the default and make this
default:
	${CXX} ${SRCS} ${HEADERS} -o ${PROG1}

# typing make all calls this build
all:
	${CXX} ${CXXFLAGS} ${SRC3} ${HEADERS} -o ${PROG1}


#Typing 'make clean' calls this build
#It's designed to clean up the folder
clean:
	rm -f ${PROGS} *.o *~


