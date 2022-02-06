#include <iostream>
using namespace std;

int main(){

double L, a, b, t;
cout<<"Menghitung Luas Trapesium \n========================================="<<endl;
cout<<"masukkan nilai atas \t = ";
cin>>a;
cout<<"masukkan nilai bawah \t = ";
cin>>b;
cout<<"masukkan nilai tinggi \t = ";
cin>>t; 

L = (a + b) * t /2;

cout<<"luas Trapesium yang diketahui : "<<endl;
cout<<"atas \t = "<<a <<"cm"<<endl;
cout<<"bawah \t = "<<b <<"cm"<<endl;
cout<<"tinggi \t = "<<t <<"cm"<<endl;
cout<<"adalah : "<<endl;
cout<<"L = (a + b) * t /2 \nL = ("<<a<<" + "<<b<<") *<<t<< /2"<<endl;
cout<<"L = "<<L<<" cm"<<endl;
cout<<"Luas Trapesium tersebut adalah = "<<L<<" cm"<<endl;


}
