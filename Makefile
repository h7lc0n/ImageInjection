GXX 			= g++
XXFLAG		= -o
PROGRAM 	= ImageInjection

CXXFILES	= $(wildcard src/*.cpp)


all: setup

run: setup
	@echo -e -n "[info] Make: running program ..."
	./${PROGRAM}
	@echo -e -n "[info] Make: program done successfully !"

setup:
	@echo -e -n "[info] Make: compiling files ..."
	${GXX} ${CXXFILES} ${XXFLAG} ${PROGRAM}
	@echo -e -n "[info] Make: done compiling !"

test:

