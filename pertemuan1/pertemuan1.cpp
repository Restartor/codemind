#include <iostream>
using namespace std;

void nilai(int nilai)
{
    cout << "Input nilai : "; cin >> nilai;

    if (nilai >= 80) {
        cout << "Nilai A" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai B" << endl;
    } else if (nilai >= 60) {
        cout << "Nilai C" << endl;
    }
    else {
        cout << "Nilai D" << endl;
    }

}

void esTeh(){
   

}

int main(int argc, char const *argv[])
{
    system("cls");
    return 0;
}
