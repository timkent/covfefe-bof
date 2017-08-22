#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%p\n", getenv("SHELLCODE"));
}
