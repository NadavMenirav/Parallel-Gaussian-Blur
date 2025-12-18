CC      := gcc
CFLAGS  := -std=c11 -O2 -Wall -Wextra -Wpedantic \
           -Xpreprocessor -fopenmp \
           -I/opt/homebrew/opt/libomp/include
LDFLAGS := -lm -L/opt/homebrew/opt/libomp/lib -lomp

TARGET := build/blur
OBJS   := build/main.o build/guassonFilter.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

build/main.o: main.c guassonFilter.h
	$(CC) $(CFLAGS) -c $< -o $@

build/guassonFilter.o: guassonFilter.c guassonFilter.h stb_image.h stb_image_write.h
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean run
