//Crear una función en C que permita invertir una cadena de texto, y tome los caracteres
//como argumento y devuelva la cadena invertida. Por ejemplo, si se pasa la cadena "casa", la
//función debe devolver "asac”

#include <stdio.h>
#include <string.h>



void cadenainvertida(char str[]){
    int longitud = strlen(str);
    for (int i = 0; i < longitud/2; i++)
    {
        char temp = str[i];
        str[i] = str[longitud-i-1];
        str[longitud-i-1] = temp;
    }
    
}

int main()
{

    char palabra[] = "";

    printf("ingrese una cadena: ");
    scanf("%s",&palabra);

    cadenainvertida(palabra);
    printf("cadena invertida: %s\n", palabra);

    return 0;
}


//casa
//i 0  largo 4