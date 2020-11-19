/* SUP che legge 10 numeri dall'utente e ne calcola la somma. Fermarsi a leggere numeri quando l'utente
inserisce tutti i 10 numeri oppure quando inserisce 0, stabilendo un numero massimo a priori.
Info: Il limite massimo dipende da quanto grandi decidiamo che siano le strutture in fase di compilazione.
Impareremo che è possibile scrivere programmi che non hanno questo tipo di limite */

#include <iostream>
using namespace std;
int main()
{
int a, b, c, d, e, f, g, h, i, l;
int somma;
cout<<"inserire numeri"<<endl;
cin>>a,b,c,d,e,f,g,h,i,l;
somma = a+b+c+d+e+f+g+h+i+l;
 if (a==0) {
 cout<<0<<endl; }
if (b==0) {
    cout<<a<<endl; }
if (c==0) {
    cout<<a+b<<endl;
}
if  (d==0) {
    cout<<a+b+c<<endl;
}
if (e==0) {
    cout<<a+b+c+d<<endl;
}
if (f==0) {
    cout<<a+b+c+d+e<<endl;
}
if (g==0) {
    cout<<a+b+c+d+e+f<<endl;
}
if (h==0) {
    cout<<a+b+c+d+e+f+g<<endl;
}
if (i==0) {
    cout<<a+b+c+d+e+f+g+h<<endl;
}
if (l==0) {
    cout<<a+b+c+d+e+f+g+h+i<<endl;
}
cout<<somma<<endl;

return 0;
}