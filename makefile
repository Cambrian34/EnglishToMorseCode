CC = gcc

SRC = main.c morse.c
OBJ = $(SRC:.c=.o)
EXEC = morse

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJ) 



