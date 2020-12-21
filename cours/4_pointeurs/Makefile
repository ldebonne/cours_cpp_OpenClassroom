CC=g++

CFLAGS=-O2 -Wall 

EXEC=main
SRC=./src/main.cpp ./src/personnage.cpp ./src/arme.cpp ./src/duree.cpp 

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