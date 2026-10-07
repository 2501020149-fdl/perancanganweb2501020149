#include <iostream>
#include <string>
using namespace std;

// Fungsi format rupiah
string formatRupiah(long long angka) {
    string str = to_string(angka);
    int pos = str.length() - 3;

    while (pos > 0) {
        str.insert(pos, ".");
        pos -= 3;
    }

    return str;
}

int main() {
    long long saldo = 5000000;
    long long tarik;
    int pilihan;

    do {
        cout << "\n===== SISTEM ATM =====" << endl;
        cout << "1. Lihat Saldo" << endl;
        cout << "2. Tarik Tunai" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;

        try {
            switch (pilihan) {

                case 1:
                    cout << "\nSaldo Anda : Rp "
                         << formatRupiah(saldo) << endl;
                    break;

                case 2:
                    cout << "\nMasukkan Jumlah Penarikan : Rp ";
                    cin >> tarik;

                    if (tarik > saldo)
                        throw "Saldo tidak mencukupi!";

                    if (tarik <= 0)
                        throw "Jumlah penarikan tidak valid!";

                    saldo -= tarik;

                    cout << "\nPenarikan Berhasil!" << endl;
                    cout << "Sisa Saldo : Rp "
                         << formatRupiah(saldo) << endl;
                    break;

                case 3:
                    cout << "\nTerima kasih telah menggunakan ATM." << endl;
                    break;

                default:
                    throw "Menu tidak tersedia!";
            }
        }

        catch (const char* pesan) {
            cout << "\nError: " << pesan << endl;
        }

    } while (pilihan != 3);

    return 0;
}