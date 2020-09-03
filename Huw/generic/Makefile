CC	  = gcc
CFLAGS	  = -Wall -g 
OBJFILES  = gen.o
TARGET	  = gentest

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
