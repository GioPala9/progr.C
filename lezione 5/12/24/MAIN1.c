#include <stdio.h>
#include <stdlib.h>

int main () {

    float ciccio, belino;
    printf("insertisci i valori delle due variabili");
    scanf("%f %f", &ciccio, &belino);

    if(ciccio==belino) 
    {
    printf("ciccio e belino valgono entrambe %f", ciccio);
    }
    else {

        if(ciccio > belino){
        printf("il valore maggiore fra i  due è ciccio: %f", ciccio);
        }
        else
        {
        printf("il valore minore fra i  due è belino: %f", belino);
        }
    }
    return 0;


}