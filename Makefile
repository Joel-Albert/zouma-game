CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf

SRC = src/main.c src/game.c src/graphics.c
OBJ = $(SRC:.c=.o)
EXEC = zuma

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(EXEC)

fclean: clean
	rm -f $(EXEC)

re: fclean all
