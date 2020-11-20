/* SUP che legge 10 numeri dall'utente e ne calcola la somma. Fermarsi a leggere numeri quando l'utente
inserisce tutti i 10 numeri oppure quando inserisce 0, stabilendo un numero massimo a priori.
Info: Il limite massimo dipende da quanto grandi decidiamo che siano le strutture in fase di compilazione.
Impareremo che è possibile scrivere programmi che non hanno questo tipo di limite */

#include <iostream>
#define N 10  //inizializzazione, scritta così poi posso usarla anche in altre funzioni
//scritta così N non è una variabile, per avere variabile dovrei scrivere int N dentro al main
using namespace std;
int main()
{
int numbers[N];
int count=0;

cout<<"insert "<<N<<" numbers: "<<endl;
for (int i=0; i<=N; i++) {
    cin>>numbers [i];
    if (numbers [i]==0) 
        break;
    count++;
}
int sum = numbers[0];
for (int i=1; i<=count; i++) {
    sum+=numbers[i];
}
cout<<"sum= "<<sum<<endl;

return 0;
}