#include <stdio.h>

int elevar_cuadrado (int numero) {
    return numero*numero;
}

void elevar_cuadrado2 (int *numero) {
    *numero = (*numero)*(*numero);
}

void invertir (int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden (int *a, int *b) {
    if (*a > *b)
    {
        invertir(a,b);
    }
}

int main () {

    int a,b,cuadrado, c=9;
    printf("Ingrese el primer valor: \n");
    scanf("%d", &a);

    printf("Ingrese el segundo valor: \n");
    scanf("%d", &b);

    printf("La direccion de la variable es: %d\n", &a);
    printf("El contenido de la variable es: %d\n", a);

    cuadrado = elevar_cuadrado(a);
    printf("El cuadrado es: %d\n", cuadrado);

    elevar_cuadrado2(&c);
    printf("El cuadrado por referencia es: %d\n", c);

    invertir (&a,&b);
    printf("Los numeros invertidos son: %d y %d\n", a,b);

    orden (&a,&b);
    printf("Los numeros ordenados quedan: %d,%d\n", a,b);

    return 0;
}