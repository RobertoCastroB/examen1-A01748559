#include <stdio.h>
#define I2S(x) ((short *) x)

int main() {
    int i, x[10];

    for(i=0; i<10; i++) {
        x[i] = i;
    }

    // ¿Por qué se imprimen alternados con 0 los numeros asignados en el for anterior?
    // R= Debido al manejo de bytes, short contiene solo 2 bytes por lo que se imprime un segmento. Podemos ver que los
    // valores cambian si aumentamos el rango de i.
    for(i=0; i<30; i++) {
        printf("%d\n", *I2S(x+i));
        printf("direccion de x + i : %p\n", I2S(x+i));
    }
    
}
