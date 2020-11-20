/* SUP che legge diversi numeri decimali e successivamente ristampa questi approssimati all'intero più
vicino. Usare la funzione di libreria round. Stampare i numeri come interi, quindi non 42.0 ma 42. */

/*
#include <iostream>
#include <cmath>
#define N 10
using namespace std;

int  main()
{
    float numbers [N];
    int count=0;

    cout<<"insert "<<N<<" numbers: "<<endl;
    for (int i=0; i<=N; i++) {
        cin>>numbers [i];
        if (numbers [i]==0) 
            break;
        count++;
    }
    
    for (int i=0; i<count; i++) {
        numApprox[i] = round(numbers [i]);
    }
    cout<< "approx number is "<<numApprox[N]<<endl;
    
}*/


#include <iostream>
#include <cmath>

#define N 10
using namespace std;

int main()
{
    float numbers[N];
    int count=0;

    cout<<"Insert max 10 numbers to round up or down (press 0 to stop): "<<endl;
    for (int i = 0; i < N; i++){
        cin>>numbers[i];
        if (numbers[i]==0)
            break;
        count ++;
    }


    cout<<"New array: "<<endl;
    for (int z = 0; z < count; z++){
        cout<<round(numbers[z])<<endl;
    }
}