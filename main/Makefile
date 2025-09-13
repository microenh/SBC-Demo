# Compiler to use
CC = gcc

# Compiler flags:
# -Wall: Enable all warning messages
# -Wextra: Enable extra warning flags
# -g: Include debugging information
CFLAGS = -Wall -Wextra -g

# Target executable name
TARGET = main

# Source files
SRCS = main.c random.c

# Object files (replace .c with .o)
OBJS = $(SRCS:.c=.o)

LIBS = -lm

# Default rule to build the target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)
