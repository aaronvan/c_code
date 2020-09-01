CC	  = gcc
CFLAGS	  = -Wall -g -DNDEBUG
OBJFILES  = ex22.o ex22_main.o
FILES.h	  = ex22.h dbg.h
TARGET	  = stacktest

all: $(TARGET) 

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES)

ex22.o:	      $(FILES.h)
ex22_main.o:  $(FILES.h)

DEBRIS	  = a.out *~ *.dSYM
RM	  = rm -fr

clean:
	$(RM) $(OBJFILES) $(TARGET) $(DEBRIS) 

