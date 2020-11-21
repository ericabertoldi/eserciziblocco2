/* SUB che sceglie un numero a random tra 1 e 1000. Usare la funzione rand per fare questo. L'utente poi
inserisce numeri ntanto che non azzecca la risposta corretta. Il programma guida l'utente rispondendo
se il tentativo era maggiore o minore del numero estratto. È una ricerca di tipo binario. */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL)); //inizializza i valori
        //cout<<rand()%1000+1<<endl; -> COSI' STAMPEREBBE UN NUMERO COMPRESO TRA 1 E 1000
    int rd;
    rd = rand() % 1000 + 1;
    int n;
    cout << "guess random number" << endl;
    cin >> n;

    if (n == rd) {
        cout << "correct!" << endl;
    }
    else if (n != rd) {
        while (n < rd) {
            cout << "try with a larger number" << endl;
            cin >> n;
        }
        while (n > rd) {
            cout << "try with a smaller number" << endl;
            cin >> n;
        }
    }
}