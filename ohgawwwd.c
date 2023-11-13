#include <stdio.h>
#include <unistd.h>
#include <time.h>



 
    

int funcionh(void){

    return 0;
}

int main(void)
{
int hijos = 50;
pid_t pidC;

for (int i = 0; i < hijos; i++){
    clock_t t; 
    t = clock(); 
    pidC = fork();
    if (pidC > 0){
        return 0;
    }
    else if (pidC == 0){
        t = clock() - t; 
        double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
        printf("Hijo nro %i creado en %f segundos\n", i+1, time_taken); 
    }
}
return 0;
}