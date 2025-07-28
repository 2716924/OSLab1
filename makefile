CC=gcc #defines the compiler
CFLAGS=-Wall -g #warnings and debug information respectively

all: helloworld echoargs reverse wordcount nullterm #make with no arguments ties hello and echo

helloworld: helloworld.o
	$(CC) $(CFLAGS) -o helloworld helloworld.o

echoargs: echoargs.o
	$(CC) $(CFLAGS) -o echoargs echoargs.o

reverse: reverse.o
	$(CC) $(CFLAGS) -o reverse reverse.o

wordcount: wordcount.o
	$(CC) $(CFLAGS) -o wordcount wordcount.o

nullterm: nullterm.o
	$(CC) $(CFLAGS) -o nullterm nullterm.o

clean: #removes the executables
	rm -f *.o helloworld echoargs reverse wordcount nullterm