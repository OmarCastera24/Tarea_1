#include <stdio.h>

int main () {
    int value1, a;
    printf("Elige un valor para a:");
    scanf ("%d", &value1);
    int value2, b;
    printf("Elige un valor para b:");
    scanf ("%d", &value2);
    printf("Resultado a > b:%d\n", value1 > value2);
    printf("Resultado b > a:%d\n", value2 > value1);
}
