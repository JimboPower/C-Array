/* main.c */

#include <stdio.h>

void stampaElementiVettore(int vettore[], int lunghezzaArray) {
    for (int i = 0; i != lunghezzaArray; i++) {
        printf("%d\n", vettore[i]);
    }
}

void inserisciUnNumeroAlPOstoDelloZero(int lunghezzaArray, int vettore[]) {
    for (int contatore = 0; contatore != lunghezzaArray; contatore++) {
        if (vettore[contatore] == 0) {
            printf("Inserisci il valore dello zero: ");
            scanf("%d", &vettore[contatore]);
            break;
        }
    }
}

void inserimentoDatiDaTastiera(int lunghezzaArray, int vettore[]) {
    for (int contatore = 0; contatore != lunghezzaArray; contatore++) {
        printf("Scegli il valore del %d: ", contatore);
        scanf("%d", & vettore[contatore]);
    }
}

void azzeramentoElementiVettore(int lunghezzaArray, int vettore[]) {
    for (int contatore = 0; contatore != lunghezzaArray; contatore++) {
        vettore[contatore] = 0;
        printf("%d\n", vettore[contatore]);
    }
}

void mostraMenu() {
    int numeri[150], lunghezzaArray, scelta;
    printf("Inserisci la lunghezza del vettore: ");
    scanf("%d", &lunghezzaArray);
    
    char listaOpzioni[][80] = {
        "Azzeramento del vettore",
        "Inserimento di tutti i dati da tastiera",
        "Inserimento di un solo dato nella prima posizione contenente zero",
        "Inserimento numeri casuali compresi tra 200 e 300 ??????????",
        "Visualizza tutti i dati nel vettore:"
    };
    
    while(1) {
        for (int i = 0; i < 5; i++) {
            printf("| %d. %s\n", i+1, listaOpzioni[i]);
        }
        
        printf("Inserisci un'opzione: ");
        scanf("%d", &scelta);
        switch (scelta) {
            case 1:
                azzeramentoElementiVettore(lunghezzaArray, numeri);
                break;
            case 2:
                inserimentoDatiDaTastiera(lunghezzaArray, numeri);
                break;
            case 3:
                inserisciUnNumeroAlPOstoDelloZero(lunghezzaArray, numeri);
                break;
            case 4:
                break;
            case 5:
                stampaElementiVettore(numeri, lunghezzaArray);
                break;
            default:
                puts("No hai sbagliato riprova!");
                break;
        }
        stampaElementiVettore(numeri, lunghezzaArray);
    }
}

int main() {
    mostraMenu();
    return 0;
}