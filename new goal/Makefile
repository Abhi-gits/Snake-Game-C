# project name (generate executable with this name)
TARGET   = escape

CC       = gcc -c
# compiling flags here
CFLAGS   = -std=c89 -Wall -I.

LINKER   = gcc -o
# linking flags here
LFLAGS   = -std=c89 -Wall

SOURCES  := $(wildcard *.c)
INCLUDES := $(wildcard *.h)
OBJECTS  := $(SOURCES:.c=*.o)
rm       = rm -f

$(TARGET): obj
	@$(LINKER) $(TARGET) $(LFLAGS) $(OBJECTS)
	@echo "Linking complete!"

obj: $(SOURCES) $(INCLUDES)
	@$(CC) $(CFLAGS) $(SOURCES)
	@echo "Compilation complete!"

clean:
	@$(rm) $(TARGET) $(OBJECTS)
	@echo "Cleanup complete!"