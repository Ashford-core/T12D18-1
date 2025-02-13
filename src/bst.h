#ifndef BST_H
#define BST_H

#include <stdlib.h>

// Определение структуры узла бинарного дерева поиска
typedef struct s_btree {
    struct s_btree *left;  // Указатель на левое поддерево
    struct s_btree *right; // Указатель на правое поддерево
    int item;              // Значение узла
} t_btree;

// Прототипы функций для работы с бинарным деревом поиска
t_btree *bstree_create_node(int item); // Создание узла
void bstree_insert(t_btree *root, int item, int (*cmpf)(int, int)); // Вставка узла
void bstree_apply_infix(t_btree *root, void (*applyf)(int)); // Обход дерева в инфиксном порядке
void bstree_apply_prefix(t_btree *root, void (*applyf)(int)); // Обход дерева в префиксном порядке
void bstree_apply_postfix(t_btree *root, void (*applyf)(int)); // Обход дерева в постфиксном порядке

#endif // BST_H
