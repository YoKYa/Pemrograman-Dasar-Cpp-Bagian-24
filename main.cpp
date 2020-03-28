#include <iostream>

using namespace std;

// Prototype Nilai Default
int LuasPersegiPanjang(int P, int L = 1);

int main(){
    system("cls");
    // Menampilkan Hasil Fungsi
    cout << "Hasil : " << LuasPersegiPanjang(5);

    cin.get();
    return 0;
}

// Fungsi Luas Persegi Panjang
int LuasPersegiPanjang(int P, int L){
    return P*L;
}