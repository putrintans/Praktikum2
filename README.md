# Praktikum2


## Latihan1.cpp : Program Menghitung Bilangan Terbesar dari 3 Bilangan

**Alur algoritma**
1. Mendeklarasikan variabel `int A, B, C` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dan **B**
4. Kondisi **TRUE** , maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **FALSE** , maka bandingkan nilai variabel **B** dengan **C**

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/putrintans/Praktikum2/master/Flowchart1.png)

**code program lengkap:**
```c++
#include<iostream>

using namespace std;

int main() {
    int A,B,C;

    cout << "Masukkan bilang 1: ";
    cin >> A;

    cout << "Masukkan bilang 2: ";
    cin >> B;

    cout << "Masukkan bilang 3: ";
    cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah: " << B << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    }
}
```

hasilnya:
![ing](https://raw.githubusercontent.com/putrintans/Praktikum2/master/Hasil1.png)

## Latihan2.cpp : Menghitung Bilangan Terbesar dari 4 Bilangan

**Alur algoritma**
1. Mendeklarasikan variabel `int A, B, C, D` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C >> D`
3. Membandingkan nilai variabel **A** dengan variabel **B & C & D**
4. Jika kondisi **TRUE** , maka cetaklah variabel **A**
5. Dan bandingkan nilai **B** dengan **A , C & D**
6. Jika kondisi **TRUE** , maka cetaklah **B**
7. Dan variabel **C** dibandingkan lagi dengan **B , A & D**
8. Jika kondisi **TRUE** , maka cetaklah **C**
9. Dan jika kondisi **FALSE** , maka cetaklah **D**

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/putrintans/Praktikum2/master/Flowchart2.png)

**code program lengkap:**
```c++
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
```

hasilnya:
![ing](https://raw.githubusercontent.com/putrintans/Praktikum2/master/Hasil2.png)