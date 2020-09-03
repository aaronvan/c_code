CC	  = gcc
CFLAGS	  = -Wall -g 
OBJFILES  = arg.o
TARGET	  = argtest

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
