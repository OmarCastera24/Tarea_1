#include <stdio.h>
#include <math.h>

int main (){
    float a, b,c;
    printf("Elige un valor par a:");
    scanf("%f", &a);
    printf("Elige un valor par b:");
    scanf("%f", &b);
    printf("Elige un valor par c:");
    scanf("%f", &c);

    float pot = pow(b,2);
    float ri = pot -(4*a*c);
    float r1 =((-1*b)+(sqrt(ri)))/(2*a);
    float r2 =((-1*b)-(sqrt(ri)))/(2*a);

    if (ri<0) {
       printf("Error");
    }
    else {
        printf("R1: %.4f\n",r1);
        printf("R2: %.4f\n",r2);
    }
}
