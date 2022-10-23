#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float x1,x2,y1,y2,A,B,jarak;
    jarak=0;

    cout<<"Mengitung jarak antara 2 titik"<<endl;
    cout<<"Masukkan titik A(x1) = ";
    cin>>x1;
    cout<<"Masukkan titik A(x2) = ";
    cin>>x2;
    cout<<"Masukkan titik B(y1) = ";
    cin>>y1;
    cout<<"Masukkan titik B(y2) = ";
    cin>>y2;

    A=(y2-x2)*(y2-x2);
    B=(y1-x1)*(y1-x1);
    jarak=sqrt(A+B);
    cout<<endl;
    cout<<"Jarak titik A ke titik B = "<< jarak<<endl;
    cout<<endl;
    system("PAUSE");

    return EXIT_SUCCESS;
}
