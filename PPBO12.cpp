#include <iostream>
#include <fstream>
using namespace std;

class Buku {
private:
    string kode_buku;
    string judul;
    string pengarang;
    string penerbit;
    int tahun_terbit;

public:
    // Constructor
    Buku(string kb, string j, string pg, string pn, int tt) {
        kode_buku = kb;
        judul = j;
        pengarang = pg;
        penerbit = pn;
        tahun_terbit = tt;
    }

    // Method untuk menyimpan data ke file
    void simpan() {
        ofstream file("daftar_buku.txt", ios::app);
23  ;
        if (file.is_open()) {
            file << "Kode Buku   : " << kode_buku << endl;
            file << "Judul       : " << judul << endl;
            file << "Pengarang   : " << pengarang << endl;
            file << "Penerbit    : " << penerbit << endl;
            file << "Tahun Terbit: " << tahun_terbit << endl;
            file << "-----------------------------" << endl;

            file.close();
        } else {
            cout << "File gagal dibuka!" << endl;
        }
    }

    // Method untuk menampilkan isi file
    static void tampilkan() {
        ifstream file("daftar_buku.txt");
        string baris;

        if (file.is_open()) {
            cout << "\n=== DATA BUKU ===\n" << endl;

            while (getline(file, baris)) {
                cout << baris << endl;
            }

            file.close();
        } else {
            cout << "File tidak ditemukan!" << endl;
        }
    }
};

int main() {

    // Membuat object buku
    Buku buku1("BK001", "Pemrograman C++", "Andi", "Informatika", 2020);
    Buku buku2("BK002", "Struktur Data", "Budi", "Erlangga", 2021);
    Buku buku3("BK003", "Basis Data", "Citra", "Gramedia", 2022);

    // Menyimpan data ke file
    buku1.simpan();
    buku2.simpan();
    buku3.simpan();

    // Menampilkan isi file
    Buku::tampilkan();

    return 0;
}