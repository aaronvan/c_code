CC	  = gcc
CFLAGS	  = -Wall -g
OBJFILES  = queue.o
TARGET	  = qoo

all: $(TARGET) $(OBJFILES)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
