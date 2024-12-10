#include<stdio.h>

#include"math.h"
#include"pow.h"
#include"trace.h"

int main (void){
    
    int A, B;
    float risultato;
    char scelta;

    printf ("Quale operazione vuoi eseguire:\n");
    printf ("a) somma b)sotrazione c) moltiplicazione d)divisione e)potenza\n");
    scanf ("%c", &scelta);

    switch (scelta){
        case 'a':
            printf ("inserire il primo valore\n");
            scanf ("%d", &A);

            printf ("inserire il secondo valore\n");
            scanf ("%d", &B);

            risultato = somma(A, B);
            printf ("%f\n", risultato);
            break;
    
        case 'b':
            printf ("inserire il primo valore\n");
            scanf ("%d", &A);

            printf ("inserire il secondo valore\n");
            scanf ("%d", &B);

            risultato = sotrazione(A, B);
            printf ("%f\n", risultato);
            break;

        case 'c':
            printf ("inserire il primo valore\n");
            scanf ("%d", &A);

            printf ("inserire il secondo valore\n");
            scanf ("%d", &B);

            risultato = moltiplicazione(A, B);
            printf ("%f\n", risultato);
            break;
    
        case 'd':
            printf ("inserire il primo valore\n");
            scanf ("%d", &A);

            printf ("inserire il secondo valore\n");
            scanf ("%d", &B);

            risultato = divisione(A, B);
            printf ("%f\n", risultato);
            break;

        case 'e':
            printf ("inserire la base\n");
            scanf ("%d", &A);

            printf ("inserire l'esponente\n");
            scanf ("%d", &B);

            risultato = potenza(A, B);
            printf ("%f\n", risultato);
            break;

        default:
            printf("operazione non compresa\n");
    }
    
}