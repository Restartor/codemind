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

    do
    {
        cout << "Vending Machine" << endl;
        cout << "1. Roti" << endl;
        cout << "2. Mizone" << endl;
        cout << "3. Aqua" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan pilihan: "; cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            namaMakanan = "Roti";
            harga = 5000;
            uang -= harga;
            cout << "Anda Membeli " << namaMakanan << " dengan harga " << harga << endl;
            cout << "Sisa uang Anda: " << uang << endl;
            break;
        case 2:
            namaMinuman = "Mizone";
            harga = 3000;
            uang -= harga;
            cout << "Anda Membeli " << namaMinuman << " dengan harga " << harga << endl;
            cout << "Sisa uang Anda: " << uang << endl;
            break;
        case 3:
            namaMinuman = "Aqua";
            harga = 2000;
            uang -= harga;
            cout << "Anda Membeli " << namaMinuman << " dengan harga " << harga << endl;
            cout << "Sisa uang Anda: " << uang << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }
    } while (pilihan != 4);
        
    cout << "Terima kasih telah menggunakan Vending Machine, Semoga harimu menyenangkan!" << endl;
    cout << "Sisa uang Anda Sebesar: " << uang << endl;

 return 0;
}

