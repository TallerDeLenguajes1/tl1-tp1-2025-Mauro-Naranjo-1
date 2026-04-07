#include <stdio.h>

int main () {
    printf ("hola mundo\n");

    int entero = 2, *puntero;
    puntero = &entero;

    printf ("El contenido del puntero es: %d\n", *puntero);
    printf ("La direccion de memoria almacenada por el puntero es: %d\n", puntero);
    printf ("La direccion de memoria de la variable es: %d\n", &entero);
    printf ("La direccion de memoria del puntero es: %d\n", &puntero);
    printf ("El tamaño de memoria de la variable es: %d\n", sizeof(entero));

    return 0;
}