#include <stdio.h>
#include <math.h>

int calcularCuadrado(int num);
void calcularCuadradoBis(int num, int *cuadrado);
void direccionYContenido(int num);
void Invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int num, cuadrado, a, b;
    //Pruebo funciones de los incisos 2.4.a, 2.4.b, 2.4.c
    printf("\nIngrese un numero entero: ");
    scanf("%d", &num),
    printf("\nEl cuadrado del numero %d con la funcion de retorno int: %d", num, calcularCuadrado(num));
    calcularCuadradoBis(num, &cuadrado);
    printf("\nEl cuadrado del numero %d con la funcion de retorno void: %d", num, cuadrado);
    printf("\nLlamo a la funcion que muestra la direccion y contenido de la variable num");
    direccionYContenido(num);
    //2.4.f
    printf("\nIngrese un par de valores enteros a y b: ");
    scanf("%d %d", &a, &b);
    printf("\nLos valores a y b son: %d y %d", a,b);
    Invertir(&a, &b);
    printf("\nLos valores a y b invertidos son: %d y %d", a,b);
    printf("\nIngrese otro par de valores enteros a y b: ");
    scanf("%d %d", &a, &b);
    orden(&a,&b);
    printf("\nLos valores a y b utilizando la funcion orden quedan: %d y %d", a,b);
    return 0;
}
//2.4.a
int calcularCuadrado(int num)
{
    return pow(num,2);
}
//2.4.b
void calcularCuadradoBis(int num, int *cuadrado)
{
    *cuadrado = pow(num, 2); 
}
//2.4.c
void direccionYContenido(int num)
{
    printf("\nEl valor de la variable es %d y su dirección de memoria es %p", num, &num);
}
//2.4.d

void Invertir(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
//2.4.e
void orden(int *a, int *b)
{
    if(*a > *b)
    {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}