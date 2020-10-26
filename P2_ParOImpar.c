#include <stdio.h>

int main () {
    int value, v;
    printf("Elige un numero:");
    scanf("%d", &value);
    v=value%2;

    if (v==0) {
        printf("El numero es Par");
    }
    else {
        printf("El numero es Impar");
    }

}
