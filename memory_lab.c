#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void memory_leak()
{
	char *ptr = (char *)malloc(sizeof(char) * 20);
}

void stack_overflow() {
    char buf[1024];
    stack_overflow();
}

void out_of_memory() {
    size_t size = 1024 * 1024 * 100; // 100 MB mỗi lần cấp phát

    while (1) {
        int *ptr = (int *)malloc(size);
        if (ptr == NULL) {
            printf("Out of memory!\n");
            break;
        }
    }
}

void main(int arg_count, char *argv[]) {

	char *program_name = argv[0];
	char *bug_name = argv[1];

    if (arg_count != 2) {
        printf("Cách dùng: %s [stack_overflow|memory_leak|out_of_memory]\n", program_name);
    }

    if (strcmp(bug_name, "stack_overflow") == 0) {
        stack_overflow();
    } else if (strcmp(bug_name, "memory_leak") == 0) {
        memory_leak();
    } else if (strcmp(bug_name, "out_of_memory") == 0) {
        out_of_memory();
    } else {
        printf("Tham số không hợp lệ!\n");
    }
}
