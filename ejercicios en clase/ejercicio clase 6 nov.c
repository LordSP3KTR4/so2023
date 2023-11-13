#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;

//ejecutar
void *hilos(){

    int resultado = 0;

    //bloqueando acceso a seccion critica
    pthread_mutex_lock(&lock);

    //seccion critica
    for(int i=0 ; i<100000 ; i++){
        resultado=+i;
    }
    printf("el resultado de la operacion con hilos es. Resultado suma: %d\n", resultado);

    //desbloqueando acceso a seccion critica
    pthread_mutex_unlock(&lock);

    return 0;
    }

//crear y manejar los hilos
int main(){

    pthread_t hilo1, hilo2;

    pthread_mutex_init(&lock, NULL);

    pthread_create(&hilo1, NULL, hilos, NULL);
    pthread_create(&hilo2, NULL, hilos, NULL);

    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    pthread_mutex_destroy(&lock);

}