#include <stdio.h>
#include <math.h>

int main () {
    float radio;
    printf ("Radio del circulo:");
    scanf("%f", &radio);
    float potencia = pow(radio,2), pi = 3.1416;

    float area = (radio,potencia) * pi;
    float perimetro = radio * 2 * pi;

    printf ("Area: %.4f\n",area);
    printf ("Perimetro: %.4f\n",perimetro);
}
