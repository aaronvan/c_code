CC	  = gcc
CFLAGS	  = -Wall -g -DNDEBUG 
OBJFILES  = ex23.o 
#FILES.h	  = dbg.h
TARGET	  = device 

all: $(TARGET) 

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

DEBRIS	  = a.out *~ *.dSYM
RM	  = rm -fr

clean:
	$(RM) $(OBJFILES) $(TARGET) $(DEBRIS) 

