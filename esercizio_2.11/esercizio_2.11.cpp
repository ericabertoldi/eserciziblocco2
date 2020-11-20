/* Un intero è detto perfetto quando la somma dei suoi fattori restituisce il numero stesso. Ad esempio 6 è
numero perfetto essendo che 1 + 2 + 3 = 6. Scrivere una funzione che determina se un numero è perfetto.
Usarla per ricavare tutti i numeri perfetti da 1 a 1000. */

#include <iostream>
#define N 1000
using namespace std;
int main()
{
    int n;
    cout << "inserire numero" << endl;
    cin >> n;
    int num[N];
    int fact[N];

    //ciclo for per vedere quali N sono fattori
    for (int i = 1; i < N; i++) {
        if (n % num[i] == 0) {
            fact[i] = num[i];
        }
    }
    int sum = fact [0];

    //ciclo for per calcolare la somma dei fattori
    for (int i = 1; i < N; i++) {
        sum += fact[i];
    }

    if (n==sum) {
        cout << n << " numero perfetto" << endl;
    } else
        cout << n << " non numero perfetto" << endl;

    return 0;
}
