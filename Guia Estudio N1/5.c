//Desarrollar un programa que solicite 4 notas en punto flotante por pantalla y se obtenga el
//promedio simple.
#include <stdio.h>
int main()
{
    float n1, n2, n3, n4;
    float prom_pom;

    printf("primera nota: ");
    scanf("%f",&n1);
    printf("segunda nota: ");
    scanf("%f",&n2);
    printf("tercera nota: ");
    scanf("%f",&n3);
    printf("cuarta nota: ");
    scanf("%f",&n4);



    //revision de que todas las notas esten dentro del rango valido (1.0 a 7.0)
    if (n1 >=1.0 && n2 >=1.0 && n3 >=1.0 && n1 <=7.0 && n2 <=7.0 && n3 <=7.0)
    {
        prom_pom= (float)((n1+n2+n3+n4)/4.0);
        printf("promedio simple es: %.3f",prom_pom);
        return 0;
    }
    
    else
    {
        printf("ha ingresado una nota invalida\n");
        return 0;
    }

}