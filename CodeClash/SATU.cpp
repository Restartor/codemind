#include <iostream>

using namespace std;


// SISTEM MANAJEMEN PERPUSTAKAAN DIGITAL
/*
Mengelola data 
mencari buku judul
mengurut judul
status peminjaman
status pengembalian

array,struct,searching,sorting,pointer,rekursif

alur > tambah buku > lihat buku > (hapus jika ingin) > mau minjam > status berubah ke terpinjam > lihat siapa saja yang meminjam buku apa dan orangnya siapa

*/
#define MAX 100



struct BUKU
{
    int id;
    string judul;
    
};
struct YANGPINJAM
{
    int id;
    int nim;
    string nama;
    bool status;
};


BUKU databuku[MAX];
int jumlahData = 0;
int nextID = 1;

YANGPINJAM minjam[MAX];
int jumlahDATAPINJAM = 0;
int idBUKU;


void searching(){
    if(jumlahData == 0){
        cout << "=== DATA KOSONG ===" << endl;
        cout << "Belum ada data buku." << endl;
        return;
    }
    
    cout << "=== CARI DATA BERDASARKAN ID ===" << endl;
    int cariID;
    cout << "Masukkan ID Buku yang dicari: ";
    cin >> cariID;
    
    int index = -1;
    for(int i = 0; i < jumlahData; i++){
        if(databuku[i].id == cariID){
            index = i;
            break;
        }
    }
    
    if(index == -1){
        cout << "DATA TIDAK DITEMUKAN" << endl;
        return;
    }
    
    cout << "=== DATA DITEMUKAN ===" << endl;
    cout << "ID BUKU: " << databuku[index].id << endl;
    cout << "JUDUL BUKU: " << databuku[index].judul << endl;
}


void tambahbuku(){


        if(jumlahData >= MAX){
        cout << "=== DATA PENUH ===" << endl;
        cout << "Tidak bisa menambah data, kapasitas penuh!" << endl;
        return;
    }
    
    cout << "=== TAMBAH DATA BUKU ===" << endl;
    cout << "Masukkan Judul: ";
    cin.ignore();
    getline(cin, databuku[jumlahData].judul);

    databuku[jumlahData].id = nextID;
    
    cout << "Data berhasil ditambahkan dengan ID: " << nextID << endl;
    
    nextID++;
    jumlahData++;
}
void meminjamBUKU(){
    if(jumlahDATAPINJAM >= MAX){
        cout << "=== MELEBIHI KAPASITAS PINJAM ===" << endl;
        cout << "Tidak bisa menambah data, kapasitas penuh!" << endl;
        return;
    }

    cout << "Masukkan ID Buku Yang ingin dipinjam : "; cin >> idBUKU;

    int index = -1;
    for (int i = 0; i < jumlahData; i++) {
        if (databuku[i].id == idBUKU) {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << " BUKU YANG KAMU MAKSUD TIDAK ADA DI DATABASE" << endl;
        return;
    }

    for (int i = 0; i < jumlahDATAPINJAM; i++) {
        if (minjam[i].id == idBUKU && minjam[i].status == true) {
            cout << "BUKU SUDAH TERPINJAM" << endl;
            return;
        }
    }

    cout << "Data ada Silahkan Masukkan Data anda" << endl;
    cout << "=============================" << endl;
    cout << "Masukkan NIM ANDA : "; cin >> minjam[jumlahDATAPINJAM].nim;
    cout << "Masukkan NAMA ANDA : "; cin >> minjam[jumlahDATAPINJAM].nama;

    minjam[jumlahDATAPINJAM].id = idBUKU;
    minjam[jumlahDATAPINJAM].status = true;

    cout << "=============================" << endl;
    cout << "Buku dengan ID " << idBUKU << " dipinjam oleh " << minjam[jumlahDATAPINJAM].nama << " dengan NIM " << minjam[jumlahDATAPINJAM].nim << endl;

    jumlahDATAPINJAM++;
    cout << "BUKU BERHASIL DIPINJAM" << endl;

    
}

void hapusbuku(int hapusID){
    if(jumlahData == 0){
        cout << "=== DATA KOSONG ===" << endl;
        cout << "Belum ada data buku." << endl;
        return;
    }

    cout << "Masukkan Data yang ingin DIHAPUS : "; cin >> hapusID;

    int index = -1;
    for (int i = 0; i < jumlahData; i++) {
        if (databuku[i].id == hapusID) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "DATA TIDAK ADA UNTUK DIHAPUS" << endl;
        return;
    }

    cout << "DATA DITEMUKAN!" << endl;
    cout << "ID BUKU : " << databuku[index].id << endl;
    cout << "JUDUL BUKU : " << databuku[index].judul << endl;

    char konfirm;
    cout << "Anda yakin untuk menghapus data Buku ini ? y/n: "; cin >> konfirm;

    if (konfirm == 'y' || konfirm == 'Y') {
        for (int i = index; i < jumlahData - 1; i++) {
            databuku[i] = databuku[i + 1];
        }
        jumlahData--;
        cout << "DATA BERHASIL DIHAPUS" << endl;
    } else {
        cout << "PENGHAPUSAN DIBATALKAN" << endl;
    }

}
void lihatbuku(){
    if(jumlahData == 0){
        cout << "=== DATA KOSONG ===" << endl;
        cout << "Belum ada data buku." << endl;
        return;
    }
    
    cout << "SEMUA DATA BUKU " << endl;
    cout << "===========================" << endl;
    for(int i = 0; i < jumlahData; i++){
        cout << "ID: " << databuku[i].id << " | JUDUL: " << databuku[i].judul << endl;
    }

}

void siapaygpinjam(){
    if(jumlahDATAPINJAM == 0){
        cout << "DATA PEMINJAM KOSONG " << endl;
        cout << "Belum ada yang meminjam buku." << endl;
        return;
    }
    
    cout << " DATA PEMINJAM BUKU " << endl;
    cout << "===========================" << endl;
    for(int i = 0; i < jumlahDATAPINJAM; i++){
        if(minjam[i].status == true){
            cout << "Buku ID: " << minjam[i].id << " | Nama: " << minjam[i].nama << " | NIM: " << minjam[i].nim << endl;
        }
    }

}

void statusbuku(){
    if(jumlahData == 0){
        cout << "=== DATA KOSONG ===" << endl;
        cout << "Belum ada data buku." << endl;
        return;
    }
    
    cout << " STATUS BUKU " << endl;
    cout << "===========================" << endl;
    for(int i = 0; i < jumlahData; i++){
        cout << "ID: " << databuku[i].id << " | JUDUL: " << databuku[i].judul;
        
        bool dipinjam = false;
        for(int j = 0; j < jumlahDATAPINJAM; j++){
            if(minjam[j].id == databuku[i].id && minjam[j].status == true){
                cout << " | STATUS: TERPINJAM" << endl;
                dipinjam = true;
                break;
            }
        }
        if(!dipinjam){
            cout << " | STATUS: TERSEDIA" << endl;
        }
    }
    cout << "===========================" << endl;
}

void pengembalianBUKU(){
    if(jumlahDATAPINJAM == 0){
        cout << "=== DATA PEMINJAM KOSONG ===" << endl;
        cout << "Belum ada yang meminjam buku." << endl;
        return;
    }

    int idKembali;
    cout << "Masukkan ID Buku yang ingin dikembalikan: "; cin >> idKembali;

    int index = -1;
    for (int i = 0; i < jumlahDATAPINJAM; i++) {
        if (minjam[i].id == idKembali && minjam[i].status == true) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "DATA TIDAK DITEMUKAN ATAU BUKU SUDAH DIKEMBALIKAN" << endl;
        return;
    }

    minjam[index].status = false;
    cout << "Buku dengan ID " << idKembali << " telah dikembalikan oleh " << minjam[index].nama << endl;
}

int main(int argc, char const *argv[])
{
    int pilihan;

    do
    {
        cout << "========================================" << endl;
        cout << " SISTEM MANAJEMEN PERPUSTAKAAN DIGITAL " << endl;
        cout << "========================================" << endl;
        cout << "1. Tambah Data BUKU" << endl;
        cout << "2. Lihat Semua Data BUKU" << endl;
        cout << "3. Cari Data Berdasarkan ID" << endl;
        cout << "4. Pinjam Buku" << endl;
        cout << "5. Lihat Status Buku" << endl;
        cout << "6. Lihat Siapa yang pinjam BUKU" << endl; 
        cout << "7. Pengembalikan BUKU" << endl;
        cout << "8. Hapus Data BUKU" << endl;
        cout << "9. Keluar" << endl;
        cout << "========================================" << endl;
        cout << "Pilih menu (1-9): ";
        cin >> pilihan;
        

        switch (pilihan)
        {
        case 1:
            tambahbuku();
            break;
        case 2:
            lihatbuku();
            break;
        case 3:
            searching();
            break;
        case 4:
            meminjamBUKU();
            break;
        case 5:
            statusbuku();
            break;
        case 6:
            siapaygpinjam();
            break;
        case 7:
            pengembalianBUKU();
            break;
        case 8:
            int hapusID;
            hapusbuku(hapusID);
        break;
        case 9:
            cout << "ANDA TELAH MEMILIH KELUAR" << endl;
            break;

        default:
            cout << "PILIHAN TIDAK VALID MOHON PILIH 1-9" << endl;
            break;
        }


    } while (pilihan != 9);
    
    cout << "TERIMAKASIH!, Anda keluar dari Sistem Perpustakaan Kami" << endl;

    return 0;
}
