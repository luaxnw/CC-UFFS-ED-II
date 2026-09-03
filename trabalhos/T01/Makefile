CC = gcc
CFLAGS = -Wall
TARGET = test
SRCS = impressao.c leitura.c ordenacao.c main.c 

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f ($TARGET)