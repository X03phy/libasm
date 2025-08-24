NAME=libasm.a
TEST=libasm

CC=gcc
NASM=nasm
NASMFLAGS=-f elf64
AR=ar
ARFLAGS=rcs
CFLAGS=-Werror -Wall -Wextra -g -MMD
SRC_DIR=src
TEST_DIR=test
BUILD=.build
INCLUDE=-Iinclude

# source files
SRC=$(wildcard $(SRC_DIR)/*.s)
TEST_SRC=$(wildcard $(TEST_DIR)/*.c)

# object files
OBJ=$(patsubst $(SRC_DIR)/%.s, $(BUILD)/%.o, $(SRC))
TEST_OBJ=$(patsubst $(TEST_DIR)/%.c, $(BUILD)/%.o, $(TEST_SRC))

# dependencies
DEP=$(TEST_OBJ:%.o=%.d)

all: create_dir $(NAME)

test: all $(TEST)

create_dir: | $(BUILD)

$(BUILD):
	@mkdir -p $(BUILD)

# compile nasm files
$(BUILD)/%.o: $(SRC_DIR)/%.s
	$(NASM) $(NASMFLAGS) $< -o $@

# compile c files
$(BUILD)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# static library
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

# test program
$(TEST): $(TEST_OBJ) $(NAME)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lasm -o $@

# clean rules
clean:
	@if [ -d $(BUILD) ]; then rm -rf $(BUILD) && printf "\033[1;31m\tDeleted: $(NAME) $(BUILD)\033[0m\n"; fi

fclean:
	@make --no-print-directory clean
	@if [ -f $(NAME) ]; then rm -rf $(NAME) && printf "\033[1;31m\tDeleted: $(NAME)\033[0m\n"; fi
	@if [ -f $(TEST) ]; then rm -rf $(TEST) && printf "\033[1;31m\tDeleted: $(TEST)\033[0m\n"; fi

re:
	@make --no-print-directory fclean
	@make --no-print-directory all

-include $(DEP)

.PHONY=all clean fclean re create_dir test