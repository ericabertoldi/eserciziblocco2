/* Un intero è detto perfetto quando la somma dei suoi fattori restituisce il numero stesso. Ad esempio 6 è
numero perfetto essendo che 1 + 2 + 3 = 6. Scrivere una funzione che determina se un numero è perfetto.
Usarla per ricavare tutti i numeri perfetti da 1 a 1000. */

#include <iostream>
using namespace std;
bool perf(int n)  //bool perchè ho bisogno che la f mi ritorni true/false
{
    int fact = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            fact += i;
        }
    }
    if (n == fact) {
        return true;
    }
    else return false;
}

int main()
{
    int N = 1000;
    cout << "numeri perfetti da 1 a 1000 " << endl;
    for (int j = 1; j <= N; j++) {
        if (perf(j)) {
            cout<<j<<endl;
        }

    }

    return 0;
}