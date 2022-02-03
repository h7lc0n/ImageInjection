GXX 		= g++
XXFLAG		= -o
PROGRAM 	= ImageInjection

CXXFILES	= $(wildcard src/*.cpp)
CXXMAIN		= main.cpp

BINFOLDER = bin/

all: setup

run: setup
	@echo "[info] Make: running program ..."
	./${BINFOLDER}${PROGRAM}
	@echo "[info] Make: program done successfully !"

setup:
	@echo "[info] Make: compiling files ..."
	@${GXX} ${CXXMAIN} ${CXXFILES} ${XXFLAG} ${BINFOLDER}${PROGRAM}
	@echo "[info] Make: done compiling !"

test:

