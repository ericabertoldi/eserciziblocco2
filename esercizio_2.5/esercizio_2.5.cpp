//SUP che calcola l'ipotenusa dati i due cateti

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
    float cateto1, cateto2;
    float a, b = 0;
    cout<<"inserire cateti"<<endl;
    cin>>cateto1;
    cin>>cateto2;
    a= cateto1*cateto1;
    b= cateto2*cateto2;
    float i;
    i= sqrt (a+b);
    cout<<"ipotenusa uguale a "<<i<<endl;
    
    return 0;
}