//toma 3 notas y saca el promedio segun la ponderacion de la tarea (40%, 30% y 30%) para la 1era, 2da y 3ra nota respectivamente 
//e indica si pasa o no la asignatura
#include <stdio.h>
int main()
{
    float n1, n2, n3;
    float prom_pom;

    printf("primera nota: ");
    scanf("%f",&n1);
    printf("segunda nota: ");
    scanf("%f",&n2);
    printf("tercera nota: ");
    scanf("%f",&n3);

    //revision de que todas las notas sean positivas
    if (n1 >=1.0 && n2 >=1.0 && n3 >=1.0)
    {
        prom_pom= (float)(n1*0.4)+(n2*0.3)+(n3*0.3);
        printf("promedio ponderado es: %.3f \n",prom_pom);

        if (prom_pom < 3.95)
        {
            printf("ha reprobado la asignatura\n");
        }
        else if (prom_pom >= 3.95 && prom_pom < 4.94 )
        {
            printf("debe rendir examen\n");

        }
        else if (prom_pom >= 4.95 )
        {
            printf("ha eximido la asignatura\n");
        }
        return 0;
    }
    
    else
    {
        printf("ha ingresado una nota invalida\n");
        return 0;
    }


}