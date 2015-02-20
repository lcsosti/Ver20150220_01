#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int i;
    int eta[N];
    int maggiorenni;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    for(i=0; i<N; i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(eta[i]));
    }
    
    maggiorenni = 0;
    for(i=0; i<N; i++) {
        if(eta[i] >= 18) {
            maggiorenni++;
        }
    }
    
    printf("I maggiorenni sono: %d\n", maggiorenni);
    
    return (EXIT_SUCCESS);
}

