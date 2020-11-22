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
    cout << "insert " << N << " different numbers" << endl;

    //ciclo for per inserire numeri
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    //ciclo for per mettere in ordine numeri
    for (int i = 0; i < N; i++) {
        if (numbers[i] > numbers[i + 1]) {
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = numbers[i];
            cout << numbers[i] << endl;
        }
    }

    return 0;
}