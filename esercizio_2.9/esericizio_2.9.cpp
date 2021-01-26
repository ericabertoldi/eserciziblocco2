/* Modificare il programma precedente in modo che trovi i due numeri più grandi. */

#include <iostream>
using namespace std;
#define N 10
int main()
{
    int num[N];
    cout << "inserire 10 numeri" << endl;

    //ciclo for per inserire num array
    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    int max1 = num[0];
    for (int i = 0; i < N; i++) {
        if (num[i] > max1) {
            max1 = num[i];
        }
    }
    int max2 = num[0];
    for (int i = 0; i < N; i++) {
        if (num[i] < max1) {
            if (num[i] > max2) {
                max2 = num[i];
            }
        }
    }
    cout << "numeri massimi   " << max1 << "  " << max2 << endl;

    return 0;
}