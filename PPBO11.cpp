#include <iostream>
using namespace std;

// Class induk
class Kepri {
public:
    string provinsi = "Kepulauan Riau";

    void tampilProvinsi() {
        cout << "Provinsi : " << provinsi << endl;
    }
};

// Class turunan TanjungPinang
class TanjungPinang : public Kepri {
public:
    string ibuKota = "Tanjung Pinang";

    void tampilTanjungPinang() {
        cout << "Ibu Kota : " << ibuKota << endl;
    }
};

// Class turunan Batam
class Batam : public Kepri {
public:
    string kota = "Batam";

    void tampilBatam() {
        cout << "Kota Industri : " << kota << endl;
    }
};

int main() {

    TanjungPinang tp;
    Batam bt;

    cout << "=== DATA TANJUNG PINANG ===" << endl;
    tp.tampilProvinsi();
    tp.tampilTanjungPinang();

    cout << endl;

    cout << "=== DATA BATAM ===" << endl;
    bt.tampilProvinsi();
    bt.tampilBatam();

    return 0;
}