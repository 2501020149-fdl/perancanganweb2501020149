#include <iostream>
#include <string>
using namespace std;

// =======================
// CLASS DASAR
// =======================
class Buku {
public:
    string judul;
    string penulis;
    int tahun;
    bool dipinjam;

    Buku(string j, string p, int t) {
        judul = j;
        penulis = p;
        tahun = t;
        dipinjam = false;
    }

    // POLIMORFISME
    virtual void tampilkanInfo() {
        cout << "Judul   : " << judul << endl;
        cout << "Penulis : " << penulis << endl;
        cout << "Tahun   : " << tahun << endl;
        cout << "Status  : "
             << (dipinjam ? "Dipinjam" : "Tersedia") << endl;
    }

    virtual ~Buku() {}
};

// =======================
// MULTILEVEL INHERITANCE
// Buku -> BukuDigital -> Ebook
// =======================

// turunan dari Buku
class BukuDigital : public Buku {
public:
    double ukuranFile;

    BukuDigital(string j, string p, int t, double u)
        : Buku(j, p, t) {
        ukuranFile = u;
    }

    // Override method Buku
    void tampilkanInfo() override {
        Buku::tampilkanInfo();
        cout << "Ukuran File : "
             << ukuranFile << " MB" << endl;
    }
};

// turunan dari BukuDigital
class Ebook : public BukuDigital {
public:
    string formatFile;

    Ebook(string j, string p, int t,
          double u, string f)
        : BukuDigital(j, p, t, u) {
        formatFile = f;
    }

    // Override method BukuDigital
    void tampilkanInfo() override {
        BukuDigital::tampilkanInfo();
        cout << "Format File : "
             << formatFile << endl;
    }
};

// =======================
// MULTIPLE INHERITANCE
// =======================

// class anggota
class Anggota {
public:
    string nama;

    Anggota(string n) {
        nama = n;
    }
};

// class petugas
class Petugas {
public:
    string namaPetugas;

    Petugas(string np) {
        namaPetugas = np;
    }
};

// Peminjaman mewarisi
// Anggota + Petugas
class Peminjaman : public Anggota,
                   public Petugas {
public:
    Buku* buku;

    Peminjaman(Buku* b,
               string namaAnggota,
               string namaP)
        : Anggota(namaAnggota),
          Petugas(namaP) {

        buku = b;
    }

    void tampilkanInfoPeminjaman() {
        cout << "\n=== DATA PEMINJAMAN ===\n";
        cout << "Nama Peminjam : " << nama << endl;
        cout << "Petugas       : "
             << namaPetugas << endl;

        cout << "\nBuku Dipinjam:\n";

        // POLIMORFISME
        buku->tampilkanInfo();

        cout << "-------------------------\n";
    }
};

// =======================
// MAIN PROGRAM
// =======================
int main() {

    // daftar buku
    Buku buku1("Harry Potter",
               "J.K. Rowling", 1997);

    Buku buku2("The Lord of the Rings",
               "J.R.R. Tolkien", 1954);

    Buku buku3("The Da Vinci Code",
               "Dan Brown", 2003);

    // objek multilevel inheritance
    Ebook ebook1(
        "C++ Programming",
        "Bjarne Stroustrup",
        2013,
        15.5,
        "PDF"
    );

    int pilihan;

    do {
        cout << "\n=== SISTEM PERPUSTAKAAN DIGITAL ===\n";
        cout << "1. Lihat semua koleksi\n";
        cout << "2. Pinjam buku\n";
        cout << "3. Lihat Ebook\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu : ";
        cin >> pilihan;

        // tampilkan semua koleksi
        if (pilihan == 1) {

            cout << "\n=== DAFTAR KOLEKSI ===\n";

            // POLIMORFISME
            Buku* daftarKoleksi[4] = {
                &buku1,
                &buku2,
                &buku3,
                &ebook1
            };

            for (int i = 0; i < 4; i++) {
                cout << "\nKoleksi " << i + 1 << endl;
                daftarKoleksi[i]->tampilkanInfo();
                cout << "-------------------------\n";
            }
        }

        // peminjaman
        else if (pilihan == 2) {

            string nama;
            string petugas;
            int pilihBuku;

            cout << "\nNama Peminjam : ";
            cin >> nama;

            cout << "Nama Petugas  : ";
            cin >> petugas;

            cout << "\nPilih Buku:\n";
            cout << "1. Harry Potter\n";
            cout << "2. The Lord of the Rings\n";
            cout << "3. The Da Vinci Code\n";
            cout << "Pilihan : ";
            cin >> pilihBuku;

            Buku* bukuDipilih;

            if (pilihBuku == 1)
                bukuDipilih = &buku1;

            else if (pilihBuku == 2)
                bukuDipilih = &buku2;

            else if (pilihBuku == 3)
                bukuDipilih = &buku3;

            else {
                cout << "Pilihan tidak valid!\n";
                continue;
            }

            // validasi
            if (bukuDipilih->dipinjam) {
                cout << "Buku sedang dipinjam!\n";
            }
            else {
                bukuDipilih->dipinjam = true;

                // multiple inheritance
                Peminjaman p(
                    bukuDipilih,
                    nama,
                    petugas
                );

                p.tampilkanInfoPeminjaman();
            }
        }

        // tampilkan ebook
        else if (pilihan == 3) {

            cout << "\n=== DATA EBOOK ===\n";

            // POLIMORFISME
            Buku* koleksi = &ebook1;
            koleksi->tampilkanInfo();

            cout << "-------------------------\n";
        }

    } while (pilihan != 4);

    cout << "\nProgram selesai.\n";

    return 0;
}