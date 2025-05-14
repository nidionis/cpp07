# Makefile

# Compiler
CC = c++

# Compiler flags
CFLAGS = -Wall -Wextra -ansi -pedantic -std=c++98

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)
OBJS_DIR = obj
OBJS_PATH = $(addprefix $(OBJS_DIR)/, $(OBJS))

# Executable name
NAME = executable

# Default target
all: $(NAME)

# Create object directory
$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

# Compile object files
$(OBJS_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files to create executable
$(NAME): $(OBJS_DIR) $(OBJS_PATH)
	$(CC) $(CFLAGS) $(OBJS_PATH) -o $(NAME)

# Clean object files and executable
clean:
	rm -rf $(OBJS_DIR)

# Fclean object files, executable and .DS_Store files
fclean: clean
	rm -f $(NAME)

# Rebuild all
re: fclean all

# Phony targets
.PHONY: all clean fclean re