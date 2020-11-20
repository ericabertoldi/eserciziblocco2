/* Trovare il numero più grande in un array è un problema ricorrente in programmazione. SUP che dati 10
numeri, inseriti dall'utente, restituisce il numero più grande. */
#include <iostream>
using namespace std;
#define N 10
int main()
{
    int num[N];
    cout << "inserire 10 numeri" << endl;

    //per fare cin dell'array bisogna usare ciclo for
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    int max = num[0]; //poniamo il massimo uguale al primo elemento

    for (int i = 0; i < N; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    cout << "numero massimo " << max << endl;

    return 0;
}
