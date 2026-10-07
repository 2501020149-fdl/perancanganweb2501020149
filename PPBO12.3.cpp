#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n===== MENU DATA PEGAWAI =====" << endl;
        cout << "1. Input Data Pegawai" << endl;
        cout << "2. Input Lagi" << endl;
        cout << "3. Tampilkan Data Pegawai" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1 || pilihan == 2) {
            ofstream file("pegawai.txt", ios::app);

            int idPegawai;
            string nama, jabatan;
            double gaji;

            cout << "\n=== INPUT DATA PEGAWAI ===" << endl;

            cout << "ID Pegawai : ";
            cin >> idPegawai;
            cin.ignore();

            cout << "Nama       : ";
            getline(cin, nama);

            cout << "Jabatan    : ";
            getline(cin, jabatan);

            cout << "Gaji       : ";
            cin >> gaji;
            cin.ignore();

            file << idPegawai << "|"
                 << nama << "|"
                 << jabatan << "|"
                 << gaji << endl;

            file.close();

            cout << "\nData pegawai berhasil disimpan!" << endl;
        }

        else if (pilihan == 3) {
            ifstream file("pegawai.txt");

            string id, nama, jabatan, gaji;

            cout << "\n===== DATA PEGAWAI =====" << endl;

            while (getline(file, id, '|')) {
                getline(file, nama, '|');
                getline(file, jabatan, '|');
                getline(file, gaji);

                cout << "ID Pegawai : " << id << endl;
                cout << "Nama       : " << nama << endl;
                cout << "Jabatan    : " << jabatan << endl;
                cout << "Gaji       : " << gaji << endl;
                cout << "-------------------------" << endl;
            }

            file.close();
        }

        else if (pilihan == 4) {
            cout << "\nProgram selesai." << endl;
        }

        else {
            cout << "\nPilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}