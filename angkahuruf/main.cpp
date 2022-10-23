#include <iostream>

using namespace std;

int main()
{
    //PROGRAM MENENTUKAN SEBUAH KARAKTER
    //KAMUS
    char karakter;

    //ALGORITMA
    cout << "Masukkan sebuah karakter: ";
    cin >> karakter;

    if(karakter>='A'&&karakter<='Z')
        cout <<"Ini adalah huruf kapital";
    else if(karakter>='a'&&karakter<='z')
        cout <<"Ini adalah huruf kecil";

    else if(karakter>='0'&&karakter<='9')
        cout <<"Ini adalah angka";

    else cout <<"Ini bukan sebuah karakter";


    return 0;
}
