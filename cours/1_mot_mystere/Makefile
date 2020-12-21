CC=g++

#CFLAGS=-O2 -Wall -I../../systemc-2.3.0/include -m32
#LDFLAGS=-L../../systemc-2.3.0/lib-linux -lsystemc -m32 -lpthread

CFLAGS=-O2 -Wall 

EXEC=main
SRC=./src/main.cpp ./src/melange.cpp

OBJ= $(SRC:.cpp=.o)

all: $(EXEC)

main: $(OBJ)
	$(CC) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean mrproper

clean:
	find -name "*.o" -delete
	rm ./bin/$(EXEC)

mrproper: clean
	rm $(EXEC)