#include <stdio.h>

int main() {
    char buffer[32];
    printf("enter your name:");
    fgets(buffer,32,stdin);
    printf("hello %c\n", buffer[3]);
    float pi = 3.14159;
    printf("The value of pi:%.2f\n",pi); //.2 beschränkt auf 2 die anzahl der Zahlen nach dem komma.
    return 0;
}
