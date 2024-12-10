#include"trace.h"

int potenza (int A, int B){
    #ifdef DEBUG
    Trace();
    #endif
    int risultato= 1;
    for(int i=0; i<B; i++){
        risultato=risultato*A;
    }
    return risultato;
}
