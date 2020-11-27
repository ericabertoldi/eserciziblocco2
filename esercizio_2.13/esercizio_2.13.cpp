/* SUP che prende in input (oppure scritti direttamente nel codice, nell'inizializzazione dell'array)
20 numerie ristampa l'array ordinato per ordine ascendente. Usare due cicli innestati,
dove quello più interno confronta due numeri adiacenti, scambiandoli se fuori ordine.
Il ciclo esterno continua ntanto che durante un ciclo completo non avvengono più scambi,
quando quindi tutti i numeri sono in ordine. */

#include <iostream>
using namespace std;
#define N 10

void swap(int a, int b);

int main()

{
    int numbers[N];
    int out[N];
    cout << "insert " << N << " different numbers" << endl;

    //ciclo for per inserire numeri
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }


    int temp, min;
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++)
            if ( numbers[j] < numbers[min]){
                min = j;
                swap (numbers[min], numbers [j]);
            }
        temp = numbers[min];
        numbers[min] = numbers[i];
        numbers[i] = temp;
    }

    cout << "New array : " << endl;

    for (int i = 1; i <= N; i++) {
        cout << numbers[i] << " ";
    }
    return 0;
}

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
