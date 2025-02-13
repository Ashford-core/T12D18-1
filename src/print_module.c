#include <stdio.h>
#include <time.h>
#include "print_module.h"

// Функция для вывода одного символа
char print_char(char ch) {
    return putchar(ch);
}

// Функция для вывода лог-сообщения
void print_log(char (*print)(char), char* message) {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    char time_str[9]; // HH:MM:SS

    // Форматируем текущее время
    strftime(time_str, sizeof(time_str), "%H:%M:%S", t);

    // Формируем лог-сообщение
    char log_message[256];
    snprintf(log_message, sizeof(log_message), "%s %s %s", Log_prefix, time_str, message);

    // Выводим лог-сообщение с помощью переданной функции
    for (int i = 0; log_message[i] != '\0'; i++) {
        print(log_message[i]);
    }
}