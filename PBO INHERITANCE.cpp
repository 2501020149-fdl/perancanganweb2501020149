#include <iostream>
#include <string>
using namespace std;

// CLASS INDUK
class Manusia {
protected:
    string nama;
    string ttl;

public:
    void inputManusia() {
        cout << "Masukkan Nama : ";
        getline(cin, nama);

        cout << "Masukkan TTL  : ";
        getline(cin, ttl);
    }

    void tampilManusia() {
        cout << "Nama : " << nama << endl;
        cout << "TTL  : " << ttl << endl;
    }
};

// TURUNAN DARI MANUSIA
class Mahasiswa : public Manusia {
private:
    string nim;

public:
    void inputMahasiswa() {
        inputManusia();

        cout << "Masukkan NIM  : ";
        getline(cin, nim);
    }

    void tampilMahasiswa() {
        cout << "\n=== DATA MAHASISWA ===" << endl;
        tampilManusia();
        cout << "NIM  : " << nim << endl;
    }
};

// TURUNAN DARI MANUSIA
class Pegawai : public Manusia {
protected:
    string nip;

public:
    void inputPegawai() {
        inputManusia();

        cout << "Masukkan NIP  : ";
        getline(cin, nip);
    }

    void tampilPegawai() {
        tampilManusia();
        cout << "NIP  : " << nip << endl;
    }
};

// TURUNAN DARI PEGAWAI
class Staff : public Pegawai {
private:
    string jobdesk;

public:
    void inputStaff() {
        inputPegawai();

        cout << "Masukkan Jobdesk : ";
        getline(cin, jobdesk);
    }

    void tampilStaff() {
        cout << "\n=== DATA STAFF ===" << endl;
        tampilPegawai();
        cout << "Jobdesk : " << jobdesk << endl;
    }
};

// TURUNAN DARI PEGAWAI
class Dosen : public Pegawai {
private:
    string jadwalMatkul;

public:
    void inputDosen() {
        inputPegawai();

        cout << "Masukkan Jadwal Matkul yang Diampu : ";
        getline(cin, jadwalMatkul);
    }

    void tampilDosen() {
        cout << "\n=== DATA DOSEN ===" << endl;
        tampilPegawai();
        cout << "Jadwal Matkul : " << jadwalMatkul << endl;
    }
};

int main() {

    Mahasiswa mhs;
    Staff stf;
    Dosen dsn;

    cout << "===== INPUT DATA MAHASISWA =====" << endl;
    mhs.inputMahasiswa();

    cout << "\n===== INPUT DATA STAFF =====" << endl;
    stf.inputStaff();

    cout << "\n===== INPUT DATA DOSEN =====" << endl;
    dsn.inputDosen();

    cout << "\n\n===== OUTPUT DATA =====" << endl;

    mhs.tampilMahasiswa();
    stf.tampilStaff();
    dsn.tampilDosen();

    return 0;
}