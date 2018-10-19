#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D;
    cout<< "Masukkan bilang 1: ";
    cin>> A;
    cout<< "Masukkan bilang 2: ";
    cin>> B;
    cout<< "Masukkan bilang 3: ";
    cin>> C;
    cout<< "Masukkan bilang 4: ";
    cin>> D;

    if (A>B && A>C && A>D) cout << "bilangan terbesar = " << A << endl;
    else

    if (B>A && B>C && B>D) cout << "bilangan terbesar = " << B << endl;

    else {
        if (C>A && C>B && C>D) cout << "bilangan terbesar = " << C << endl;
        else
            cout << "bilangan terbesar = " << D;
    }
}
