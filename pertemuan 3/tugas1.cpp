#include <iostream>

using namespace std;

int perkalian(int angka1, int angka2){
    int perkalian = angka1 * angka2;

    cout << "hasil perkalian : " << perkalian << endl;
    return perkalian;
}


void tampilkan(int angka){
    
    if (angka % 2 == 0)
    {
        cout << "Genap" << endl;
    }
    else{
        cout << "ganjil" << endl;
    }
    

}

int faktorial(int n){
    if(n==0 || n==1){
        cout << n << " = ";
        return 1;
    }
    else{
        
        cout << n << " * ";

        return n * faktorial(n-1);
    }
}


int main(int argc, char const *argv[])
{

    int angka,angka1,angka2,faktor;

    cout << "Hello, World!" << endl;

    cout << "Masukkan Angka untuk genap ganjil : "; cin >> angka;

    tampilkan(angka);

    cout << "Masukkan angka 1 untuk perkalian : "; cin >> angka1;
    cout << "Masukkan angka 2 untuk perkalian : "; cin >> angka2;
    
    perkalian(angka1,angka2);

    cout << "masukkan angka untuk faktorial : "; cin >> faktor;
    int hasilFaktor = faktorial(faktor);
    cout << hasilFaktor << endl;




    return 0;
}
