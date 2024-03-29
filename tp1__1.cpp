#include <stdio.h>

int main()
{
    printf("Hola Mundo \n");
    int num = 5, *punt;
    punt = &num;
    printf("\nContenido del puntero: %d", *punt);
    printf("\nDirección de memoria almacenada por el puntero: %p", punt);
    printf("\nDirección de memoria de la variable: %p", &num);
    printf("\nDirección de memoria del puntero: %p", &punt);
    printf("\nEspacio de memoria utilizado por la variable: %zu bytes", sizeof(num));  
    return 0;
}