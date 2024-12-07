#include <stdio.h>
#include <stdlib.h>

int main () {

    char op;
    double n1, n2;
    printf("inserisci un'operatore: +, -, *, /");
    scanf("%c");
    printf("inserisci due operandi:")
    scanf("%lf", n1, n2);
    switch (op) {

        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1 + n2 = n1+n2);
            break;
        
        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1 - n2 = n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1 * n2 = n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf", n1 / n2 = n1/n2);
            break;
             
        default:
            printf("Error! operator is not correct");
}
return 0;
}

            


    
    
   
    
