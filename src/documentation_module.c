#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "documentation_module.h"

// Пример доступного документа
const char* available_document = "Документ_1"; // Замените на актуальные названия документов

// Функция для валидации документа
int validate(char* data) {
    int validation_result = !strcmp(data, available_document);
    return validation_result;
}

// Функция для проверки доступности документов
int* check_available_documentation_module(int (*validate)(char*), int document_count, ...) {
    // Выделяем память для массива доступности
    int* availability = malloc(document_count * sizeof(int));
    if (availability == NULL) {
        return NULL; // Проверка на успешное выделение памяти
    }

    va_list args;
    va_start(args, document_count);

    // Проверяем каждый документ
    for (int i = 0; i < document_count; i++) {
        char* document = va_arg(args, char*);
        availability[i] = validate(document);
    }

    va_end(args);
    return availability;
}
