/* SUP che prende in input (oppure scritti direttamente nel codice, nell'inizializzazione dell'array)
20 numerie ristampa l'array ordinato per ordine ascendente. Usare due cicli innestati,
dove quello più interno confronta due numeri adiacenti, scambiandoli se fuori ordine.
Il ciclo esterno continua ntanto che durante un ciclo completo non avvengono più scambi,
quando quindi tutti i numeri sono in ordine. */

#include <iostream>
using namespace std;
#define N 10
int main()

{
    int numbers[N];
    int out[N];
    cout << "insert " << N << " different numbers" << endl;

    //ciclo for per inserire numeri
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }
    
    // Copying input array in result
    for (int i = 0; i < N; i++) {
        out[i] = numbers[i];
    }


    //ciclo for per mettere in ordine numeri

    for (int i = 0; i < N-1; i++) {
        while (out[i] != out [i+1]) {

        if (out[i] > out[i + 1]) {
            int temp = out[i];
            out[i] = out[i + 1];
            out[i + 1] = temp;
        }
        else out [i] = out [i];
        out [i+1] = out [i+1];
        }
        cout<<out[i]<<endl;
    }

    return 0;
}