#include <iostream>
#include <string>
using namespace std;

// Class induk
class Proyek {
public:
    string namaProyek;
    string lokasi;

    void inputProyek() {
        cout << "Masukkan Nama Proyek : ";
        getline(cin, namaProyek);

        cout << "Masukkan Lokasi Proyek : ";
        getline(cin, lokasi);
    }

    void tampilProyek() {
        cout << "\n=== DATA PROYEK ===" << endl;
        cout << "Nama Proyek : " << namaProyek << endl;
        cout << "Lokasi       : " << lokasi << endl;
    }
};

// Class turunan
class Apartemen : public Proyek {
public:
    int jumlahKamar;

    void inputApartemen() {
        inputProyek();

        cout << "Masukkan Jumlah Kamar : ";
        cin >> jumlahKamar;
    }

    void tampilApartemen() {
        tampilProyek();

        cout << "Jumlah Kamar : " << jumlahKamar << endl;
    }
};

int main() {
    Apartemen apt;

    apt.inputApartemen();
    apt.tampilApartemen();

    return 0;
}