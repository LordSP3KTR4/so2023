//Tomando como base el código anterior, obtener el cálculo del perímetro, semi perímetro y
//área del triángulo según la fórmula de Herón.
#include <stdio.h>
#include <math.h>

void revisiontriag(int lados[]){
    //si es un triangulo valido entonces se realiza la revision 
    if(lados[0] + lados[1] > lados[2] && lados[0] + lados[2] > lados[1] && lados[1] + lados[2] > lados[0]){
        if (lados[0]==lados[1] || lados[0]==lados[2] || lados[1]==lados[2])
        {
            printf("es un triangulo isosceles\n");
        }
        else if ( lados[0]==lados[1] && lados[1]==lados[2])
        {
            printf("es un triangulo equilatero\n");

        }
        else{
            printf("es un triangulo escaleno\n");
        }
        //se sacan los calculos

        //perimetro
        int perimetro = lados[0] + lados[1] + lados[2];
        printf("perimetro: %d\n", perimetro);

        //semi perimetro
        float semiperimetro = perimetro/2;
        printf("semiperimetro: %.2f\n",semiperimetro);

        //area segun heron
        float area = sqrt(
            semiperimetro*(
                (semiperimetro - lados[0]) * (semiperimetro - lados[1]) * (semiperimetro - lados[2])
                )
            );
        printf("area: %.2f\n",area);
        
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