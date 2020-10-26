#include <stdio.h>

int main () {
    float a;
    printf("Elige el valor de a");
    scanf("%f", &a);
    float b;
    printf("Elige el valor de b");
    scanf("%f", &b);

    float div = a / b;

    if (b==0){
        printf("Error");
    }
    else {
        printf("Resulado:%.2f", div);
    }
}
