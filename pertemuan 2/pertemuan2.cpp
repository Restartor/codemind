#include <iostream>

using namespace std;

int main(){
    int max;
    cout << "Masukkan jumlah antrian: ";
    cin >> max;

    string antrian[max];

    for (int i = 0; i < max; i++)
    {
        cout << "Masukkan nama antrian ke-" << i+1 << ": ";
        cin >> antrian[i];
    }
    
    cout << "Daftar antrian: " << endl;
    for (int i = 0; i < max ; i++)
    {
        cout << "Antrian ke-" << i+1 << ": " << antrian[i] << endl;
    }
    cout << "Rata rata antrian: " << max/2.0 << endl;
    

    return 0;

}

// Program ini menggunakan array untuk menyimpan nama antrian. 
//Pengguna diminta untuk memasukkan jumlah antrian, 
//kemudian program akan meminta nama setiap antrian dan menyimpannya dalam array. 
//Setelah semu