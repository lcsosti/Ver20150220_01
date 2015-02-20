#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    float media;
    int massimo,minimo,presidenti;
    int vettore[N];
    int etaPresidente = 50;
    int i;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(vettore[i]));
        minimo = vettore[0];
        
        if(vettore[i]>=massimo) {
            massimo = vettore[i];
        }
        if(vettore[i]<minimo) {
            minimo = vettore[i];
        }
        
        media += vettore[i];
        
        if(vettore[i]>=etaPresidente) {
            presidenti += 1;
        }
    }
    media /= N;
    
    printf("\nEta' media: %f", media);
    printf("\nEta' massima: %d", massimo);
    printf("\nEta' minima: %d", minimo);
    printf("\nNumero di potenziali Presidenti della Repubblica: %d", presidenti);
    return (EXIT_SUCCESS);
}
