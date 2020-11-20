// Modificare il programma 1.2 perché l'utente possa inserire 
// frasi anziché numeri, lunghe fino a 100 caratteri.

#include <iostream>
//#include <string>

#define N 100 //così si scrive solo qui, N non è una variabile

using namespace std;

int main()
{
    char phrase[N];
    int p;
    int i = 0;
    char a;

    cout << "Insert sentence: "<<endl;
    cin.getline(phrase, N)>>phrase[i];
    /*if (phrase[j] != '0')   //virgole singole per caratteri array
        break;*/

    cout << "Insert position: " << endl;
    cin >> p;

    cout<<endl<<endl;

    while (i <= p){
        a = phrase [i];
        i++;
    }

    cout << "Character at the " << p << " position is: " << a;
}