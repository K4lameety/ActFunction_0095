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

float luasPersegi(int a, int b) {
    return a*b;
}

void output(){
    cout << "Luas Perseginya = " << luasPersegi(p, l) << endl;
}

//Program Utama
int main(){
    input();
    output();
}
