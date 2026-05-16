#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int angka;
    int umur;
    int nilai;
    cout << "Masukkan angka untuk positif atau negatif: "; cin >> nilai;
    cout << "Masukkan umur: "; cin >> umur;
    cout << "Masukkan angka: "; cin >> angka;

    if (nilai > 0) {
        cout << "Angka positif" << endl;
    } else if (nilai < 0) {
        cout << "Angka negatif" << endl;
    } else {
        cout << "Angka nol" << endl;
    }

    if (umur >= 17) {
        cout << "Boleh masuk" << endl;
    } else {
        cout << "Tidak boleh masuk" << endl;
    }

    if (angka % 2 == 0) {
        cout << "Angka genap" << endl;
    } else {
        cout << "Angka ganjil" << endl;
    }

    return 0;
}
