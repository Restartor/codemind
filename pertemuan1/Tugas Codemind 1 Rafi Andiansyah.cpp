#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int pilihan;
    float uang = 10000;
    int harga;
    string namaMakanan;
    string namaMinuman;

    system("cls");

        cout << "Vending Machine" << endl;
        cout << "1. Roti" << endl;
        cout << "2. Mizone" << endl;
        cout << "3. Aqua" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan pilihan: "; cin >> pilihan;

        if (pilihan == 1) {
            namaMakanan = "Roti";
            harga = 5000;

            if (uang < harga) {
                cout << "Uang Anda tidak cukup untuk membeli " << namaMakanan << endl;
            } else {
                uang -= harga;
            cout << "Anda Membeli " << namaMakanan << " dengan harga " << harga << endl;
            cout << "Sisa uang Anda: " << uang << endl;}

        } else if (pilihan == 2) {
            namaMinuman = "Mizone";
            harga = 3000;

            if (uang < harga) {
                cout << "Uang Anda tidak cukup untuk membeli " << namaMinuman << endl;
            } else {
                            uang -= harga;
                cout << "Anda Membeli " << namaMinuman << " dengan harga " << harga << endl;
                cout << "Sisa uang Anda: " << uang << endl;
            }

        } else if (pilihan == 3) {
            namaMinuman = "Aqua";
            harga = 2000;

            if (uang < harga) {
                cout << "Uang Anda tidak cukup untuk membeli " << namaMinuman << endl;
            } else {
                cout << "Anda Membeli " << namaMinuman << " dengan harga " << harga << endl;
                cout << "Sisa uang Anda: " << uang << endl;
                uang -= harga;
            }
            
        } 
        else if (pilihan == 4) {
            cout << "Terima kasih telah menggunakan Vending Machine!" << endl;
            cout << "Sisa uang Anda: " << uang << endl;
            return 0;
        }
        else {
                cout << "Pilihan tidak valid!" << endl;
            }

    return 0;
}
