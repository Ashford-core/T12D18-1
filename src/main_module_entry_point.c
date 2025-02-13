#include <stdio.h>
#include "print_module.h"

// Объявление сообщения
const char* module_load_success_message = "Загрузка модуля успешна!";

int main() {
    // Используем приведение типов для устранения предупреждения
    print_log(print_char, (char*)module_load_success_message);
    return 0;
}
