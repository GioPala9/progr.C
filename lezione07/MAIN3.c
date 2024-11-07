#include <stdio.h>
#include <stdlib.h>
#define gio 4.3
/*
programma che chiede all'utente un dato numero, che successivamente viene moltiplicato e diviso per le variabili
 */

int main () {

    int pippo = 3;
    float jj = 2.5;
    float nino;
    float risultato;
    printf("inserisci un numero");
    scanf("%f", &nino);
    printf("%d * %f / %f * %f = &%f" , pippo, jj, gio, nino, pippo*jj/gio*nino);
    return 0;


}