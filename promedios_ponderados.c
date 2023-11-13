//toma 3 numeros enteros y saca el promedio segun la ponderacion de la tarea (40%, 30% y 30%) para la 1era, 2da y 3ra nota respectivamente
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    float prom_pom;

    printf("primera nota: ");
    scanf("%d",&n1);
    printf("segunda nota: ");
    scanf("%d",&n2);

    printf("tercera nota: ");
    scanf("%d",&n3);

    prom_pom= (float)(n1*0.4)+(n2*0.3)+(n3*0.3);

    printf("promedio ponderado es: %.3f",prom_pom);

    return 0;
}