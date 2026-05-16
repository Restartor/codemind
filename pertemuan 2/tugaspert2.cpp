#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Berhitung : " << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Genap : " << endl;
    for (int i = 0; i <= 20; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Ganjil : " << endl;
    for (int i = 1; i <= 20; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Program untuk memasukkan angka ke dalam array dan menampilkan array
    int max;
    cout << "Masukkan jumlah angka yang ingin dimasukkan: ";
    cin >> max;
    int array[max];
    for (int i = 0; i < max; i++)
    {
        cout << "Masukkan angka ke-" << i+1 << ": ";
        cin >> array[i];
    }

    cout << "Angka yang dimasukkan: ";
    for (int i = 0; i < max; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    // Menampilkan total angka yang dimasukkan
    int total = 0;
    for (int i = 0; i < max; i++)
    {
        total += array[i];
    }
    cout << "Total: " << total << endl;

    // mencari nilai terbesar
    int terbesar = array[0];
    for (int i = 1; i < max; i++)
    {
        if (array[i] > terbesar)
        {
            terbesar = array[i];
        }
    }

    cout << "Nilai terbesar: " << terbesar << endl;
    
    return 0;
}
