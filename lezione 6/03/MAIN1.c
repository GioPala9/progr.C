#include <stdio.h>
#include <stdlib.h>

int main() {
    float power_20min, ftp;
    float zone1, zone2, zone3, zone4, zone5, zone6, zone7;

    // Richiedi all'utente di inserire la potenza media sostenuta durante un test di 20 minuti
    printf("Inserisci la potenza media sostenuta durante un test di 20 minuti (in watt): ");
    scanf("%f", &power_20min);

    // Calcola l'FTP come il 95% della potenza media sostenuta
    ftp = power_20min * 0.95;

    // Calcola le zone di allenamento basate sull'FTP
    zone1 = ftp * 0.55;
    zone2 = ftp * 0.75;
    zone3 = ftp * 0.90;
    zone4 = ftp * 1.05;
    zone5 = ftp * 1.20;
    zone6 = ftp * 1.50;
    zone7 = ftp * 2.00;

    // Stampa il risultato
    printf("Il tuo FTP (Functional Threshold Power) è: %.2f watt\n", ftp);
    printf("Zone di allenamento:\n");
    printf("Zona 1: fino a %.2f watt\n", zone1);
    printf("Zona 2: %.2f - %.2f watt\n", zone1, zone2);
    printf("Zona 3: %.2f - %.2f watt\n", zone2, zone3);
    printf("Zona 4: %.2f - %.2f watt\n", zone3, zone4);
    printf("Zona 5: %.2f - %.2f watt\n", zone4, zone5);
    printf("Zona 6: %.2f - %.2f watt\n", zone5, zone6);
    printf("Zona 7: oltre %.2f watt\n", zone6);

    return 0;
}
