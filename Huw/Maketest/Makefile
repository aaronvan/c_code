CC	  = gcc
CFLAGS	  = -Wall -g 
OBJFILES  = test.o main.o
TARGET	  = runtest

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

clean:
	rm -f $(OBJFILES) $(TARGET)
