//Library
#include<iostream>
using namespace std;

//Deklarasi
float p, l;

//Prosedur & Fungsi
void input(){
    cout << "Masukkan Panjang Persegi : ";
    cin >> p;
    cout << "Masukkan Lebar Persegi : ";
    cin >> l;
}

float luasPersegi() {
    return p*l;
}

void output(){
    cout << "Luas Persegi = " << luasPersegi() << endl;
}

//Program Utama
int main(){
    input();
    output();
}
