CC = gcc
CFLAGS = -Wall
TARGET = test
SRCS = cria_vetores.c in_out.c sorters.c main.c 

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f ($TARGET)