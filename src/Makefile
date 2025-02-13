# Определение компилятора и флагов
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Папки
SRC_DIR = .
BUILD_DIR = ../build

# Исходные файлы
PRINT_MODULE = $(SRC_DIR)/print_module.c
DOCUMENTATION_MODULE = $(SRC_DIR)/documentation_module.c
BST_MODULE = $(SRC_DIR)/bst.c
MAIN_MODULE = $(SRC_DIR)/main_module_entry_point.c

# Исполняемые файлы
QUEST_1 = $(BUILD_DIR)/Quest_1
QUEST_2 = $(BUILD_DIR)/Quest_2
QUEST_3 = $(BUILD_DIR)/Quest_3
QUEST_4 = $(BUILD_DIR)/Quest_4
QUEST_5 = $(BUILD_DIR)/Quest_5

# Правила сборки
all: $(QUEST_1) $(QUEST_2) $(QUEST_3) $(QUEST_4) $(QUEST_5)

$(QUEST_1): $(PRINT_MODULE) $(SRC_DIR)/print_module.h $(MAIN_MODULE)
	$(CC) $(CFLAGS) -o $@ $^

$(QUEST_2): $(DOCUMENTATION_MODULE) $(SRC_DIR)/documentation_module.h $(MAIN_MODULE) $(PRINT_MODULE)
	$(CC) $(CFLAGS) -o $@ $^

$(QUEST_3): $(BST_MODULE) $(SRC_DIR)/bst.h $(MAIN_MODULE) $(PRINT_MODULE)
	$(CC) $(CFLAGS) -o $@ $^

$(QUEST_4): $(BST_MODULE) $(SRC_DIR)/bst.h $(MAIN_MODULE) $(PRINT_MODULE)
	$(CC) $(CFLAGS) -o $@ $^

$(QUEST_5): $(BST_MODULE) $(SRC_DIR)/bst.h $(MAIN_MODULE) $(PRINT_MODULE)
	$(CC) $(CFLAGS) -o $@ $^

# Создание директории build, если она не существует
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Очистка
clean:
	rm -f $(BUILD_DIR)/*

.PHONY: all clean