/* SUP che calcola la media dei voti di un esame. Il programma si fa dare prima il numero totale di studenti,
poi i voti. Supporre un limite massimo di studenti */

#include <iostream>
using namespace std;
int main()
{
    int N;
    int* voti = new int[N];
    cout << "inserire numero studenti (max 20)" << endl;
    cin >> N;
    while (N > 20) {
        cout << "inserire numero studenti (MAX 20!!!)" << endl;
        cin >> N;
    }

    cout << "inserire voti" << endl;
    for (int i = 0; i < N; i++) {
        cin >> voti[i];
    }

    int sum=0;
    for (int i =0; i<N; i++){
        sum += voti[i];
    }

    cout<<"average is "<<sum/N<<endl;
    
    delete[] voti;
    return 0;
}