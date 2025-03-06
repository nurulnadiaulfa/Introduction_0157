#include <iostream> 
using namespace std; 

//numeric panjang, lebar,luas
double panjang;
double lebar;
double luas;

void input data () {
    cout << "Masukkan Panjangnya = ";
    //accept panjang
    cin >> panjang;
    cout << "Masukkan Lebar = ";
    //accept lebar
    cin >> lebar;
    
}
double hitung luas () {

    return panjang * lebar;

}
void tampil luas () {
    count << "Luasnya adalah = " << hitungluas;
}
int main () {
    //begin
    inputdata();
    tampilluas ();
}