//Desarrollar un programa que sea capaz de determinar si un triángulo es equilátero,
//escaleno o isósceles, según sus lados (valores enteros) que serán ingresados por teclado por
//el usuario.

#include <stdio.h>


void revisiontriag(int lados[]){
    //si es un triangulo valido entonces se realiza la revision 
    if(lados[0] + lados[1] > lados[2] && lados[0] + lados[2] > lados[1] && lados[1] + lados[2] > lados[0]){
        if (lados[0]==lados[1] || lados[0]==lados[2] || lados[1]==lados[2])
        {
            printf("es un triangulo isosceles");
        }
        else if ( lados[0]==lados[1] && lados[1]==lados[2])
        {
            printf("es un triangulo equilatero");

        }
        else{
            printf("es un triangulo escaleno");
        }
        return 0;
    }
    //en el caso contrario se termina el programa
    else
    {
        printf("es un triangulo no valido");
        return 0;
    }
    
}


int main(){
    //se inicializan las variables
    int l1,l2,l3;

    //se toma el input
    printf("primer lado: ");
    scanf("%d",&l1);
    printf("segundo lado: ");
    scanf("%d",&l2);
    printf("tercer lado: ");
    scanf("%d",&l3);

    //se crea un array que contiene los 3 lados
    int lados[] = {l1,l2,l3};


    //se inicia la funcion con el array que contiene los lados
    revisiontriag(lados);

    return 0;
}