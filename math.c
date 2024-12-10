#include"trace.h"

int somma (int A, int B){
    #ifdef DEBUG
    Trace();
    #endif
    int risultato= A+B;
    return risultato;
}

int sotrazione (int A, int B){
    #ifdef DEBUG
    Trace();
    #endif
    int risultato= A-B;
    return risultato;
}

int moltiplicazione (int A, int B){
    #ifdef DEBUG
    Trace();
    #endif
    int risultato= A*B;
    return risultato;
}

float divisione (int A, int B){
    #ifdef DEBUG
    Trace();
    #endif
    float risultato= A/B;
    return risultato;
}