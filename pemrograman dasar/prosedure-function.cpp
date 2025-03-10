#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput () {
    cout << "Masukkan Nilai Alas : ";
    cin >> alas;

    cout << "Masukkan Nilai Tinggi : ";
    cin >> tinggi;
}

void procedurHitungLuas() {
    luas = 1/2* alas * tinggi;
}

void procedurOutput (){
    cout << "Luas Segitiga = " << luas << endl;
}

int main () {
    procedurInput();
    procedurHitungLuas();
    procedurOutput();
}
