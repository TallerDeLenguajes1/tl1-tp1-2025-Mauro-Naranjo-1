#include <stdio.h>

void invertir_numero(int *p) {
    int entero = *p;
    int invertido = 0;
    while (entero > 0) {
        invertido = (invertido * 10) + (entero % 10);
        entero = entero / 10;
    }
    *p = invertido;
}

void mitad_entera(int *p) {
    *p = *p / 2;
}

void suma_cada_digito(int *p) {
    int entero = *p;
    int suma = 0;
    while (entero > 0) {
        suma = suma + (entero % 10);
        entero = entero / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertir_numero(valor_referencia);
    mitad_entera(valor_referencia);
    suma_cada_digito(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}