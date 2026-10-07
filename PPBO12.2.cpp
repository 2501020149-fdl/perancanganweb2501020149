#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n=== MENU DATA MAHASISWA ===" << endl;
        cout << "1. Input Data Mahasiswa" << endl;
        cout << "2. Tampilkan Data Mahasiswa" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            ofstream file("mahasiswa.txt", ios::app);

            string nama, nim, prodi, fakultas;
            float ipk;

            cout << "\n=== INPUT DATA MAHASISWA ===" << endl;

            cout << "Nama     : ";
            getline(cin, nama);

            cout << "NIM      : ";
            getline(cin, nim);

            cout << "Prodi    : ";
            getline(cin, prodi);

            cout << "IPK      : ";
            cin >> ipk;
            cin.ignore();

            cout << "Fakultas : ";
            getline(cin, fakultas);

            file << nama << "|"
                 << nim << "|"
                 << prodi << "|"
                 << ipk << "|"
                 << fakultas << endl;

            file.close();

            cout << "\nData berhasil disimpan!" << endl;
        }

        else if (pilihan == 2) {
            ifstream file("mahasiswa.txt");

            string nama, nim, prodi, fakultas, ipk;

            cout << "\n=== DATA MAHASISWA ===" << endl;

            while (getline(file, nama, '|')) {
                getline(file, nim, '|');
                getline(file, prodi, '|');
                getline(file, ipk, '|');
                getline(file, fakultas);

                cout << "Nama     : " << nama << endl;
                cout << "NIM      : " << nim << endl;
                cout << "Prodi    : " << prodi << endl;
                cout << "IPK      : " << ipk << endl;
                cout << "Fakultas : " << fakultas << endl;
                cout << "--------------------------" << endl;
            }

            file.close();
        }

        else if (pilihan == 3) {
            cout << "\nProgram selesai." << endl;
        }

        else {
            cout << "\nPilihan tidak valid!" << endl;
        }

    } while (pilihan != 3);

    return 0;
}