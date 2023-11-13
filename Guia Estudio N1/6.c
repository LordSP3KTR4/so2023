//Crear un algoritmo capaz de solicitar 3 notas de un estudiante por pantalla y obtener el
//promedio ponderado. Este promedio ponderado es de la siguiente forma:
//Nota 1 = 40%
//Nota 2 = 30%
//Nota 3 = 30%
//Si el estudiante obtiene un promedio inferior a 3.95 se debe imprimir por pantalla que ha
//reprobado la asignatura, si obtuvo un promedio entre 3.95 a 4.94 el estudiante va a examen.
//Si la nota es igual o superior a 4.95 el alumno se exime de la asignatura.

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

    //revision de que todas las notas esten dentro del rango valido (1.0 a 7.0)
    if (n1 >=1.0 && n2 >=1.0 && n3 >=1.0 && n1 <=7.0 && n2 <=7.0 && n3 <=7.0)
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