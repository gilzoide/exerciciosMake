objs = main.o aux.o
includeDir = $(ROOTDIR)/include
CFLAGS = -Wall -g -O2 -I$(includeDir)
exe = main
CC = gcc

all : $(objs)
	gcc -o $(exe) $^ $(CFLAGS)
