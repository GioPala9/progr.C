#include <stdio.h>
#include <stdlib.h>
#define gio 4.3
/*
programma che chiede all'utente un dato numero, che successivamente viene moltiplicato e diviso per le variabili
 */

int main () {

    int pippo = 3;
    double jj = 2.5;
    double nino;             /*il double  è uguale al float, è solamente più preciso*/
    double risultato;
    printf("inserisci un numero");
    scanf("%lf", &nino);
    // printf("%d * %f / %f * %f. Il tuo risultato è %f" , pippo, jj, gio, nino, pippo*jj/gio*nino);
    printf("Il tuo risultato è: \n %f" , pippo*jj/gio*nino);
    return 0;


}