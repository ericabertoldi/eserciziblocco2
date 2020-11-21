/* Un intero è detto perfetto quando la somma dei suoi fattori restituisce il numero stesso. Ad esempio 6 è
numero perfetto essendo che 1 + 2 + 3 = 6. Scrivere una funzione che determina se un numero è perfetto.
Usarla per ricavare tutti i numeri perfetti da 1 a 1000. */

#include <iostream>
using namespace std;

int perf(int n)
{
    int fact[500];
    int count = 0;
    for (int i = 1; i <= 500; i++) {
        if (n % i == 0) {
            fact[i] = i;
        }
        count++;
    }
    int sum = fact[0];
    for (int i = 1; i <= count; i++) {
        sum += fact[i];
    }
    if (n == sum) {
        cout << n << " numero perfetto" << endl;
    }
    return n;
}
int main()
{
    for (int j = 1; j <= 1000; j++) {
        cout << "numeri perfetti da 1 a 1000 " << perf(j) << endl;
    }

    return 0;
}