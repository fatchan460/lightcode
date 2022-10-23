#include <iostream>

using namespace std;

int main()
{

    float berat, tinggi, bmi, meter;

    cout<<"Masukkan berat = ";
    cin>> berat;
    cout<<"Masukkan tinggi = ";
    cin>> tinggi;

    meter=tinggi/100;

    bmi=(berat/(meter*meter));
    cout<<endl;

    cout<<"BMI"<<bmi<<"  ";

    if (bmi<18.5){
        cout<<"(Kurus)"<<endl;
    }else if (bmi<=24.9){
        cout<<"(Normal)"<<endl;
    }else if (bmi<29.9){
        cout<<"(Kelebihan berat badan)"<<endl;
    }else {
        cout<<"(Obesitas)"<<endl;
    }

    return 0;
}
