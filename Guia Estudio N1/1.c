//Escribe un algoritmo en C que genere la suma de los primero 100 números impares
#include <stdio.h>
int main(){

    int n = 1;
    int sumatotal = 0;
    int contador = 0;
    while (contador<100){
        sumatotal+= n;
        n+=2;
        contador+=1;
    }

    printf("la suma de los primeros 100 numeros impares es: %d\n", sumatotal);
    return 0;


}