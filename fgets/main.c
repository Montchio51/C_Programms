#include <stdio.h>

int main() {
    char buffer[32];
    printf("enter your name:");
    fgets(buffer,32,stdin);
    printf("hello %c", buffer[3]);
    return 0;
}
