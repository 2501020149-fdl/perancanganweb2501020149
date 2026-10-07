#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, hasil;
    int pilihan;
    char ulang;

    do {
        cout << "\n===== KALKULATOR SEDERHANA =====" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (x)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "Pilih Operasi : ";
        cin >> pilihan;

        cout << "\nMasukkan Angka Pertama : ";
        cin >> angka1;

        cout << "Masukkan Angka Kedua   : ";
        cin >> angka2;

        try {
            switch (pilihan) {
                case 1:
                    hasil = angka1 + angka2;
                    cout << "\nHasil = " << hasil << endl;
                    break;

                case 2:
                    hasil = angka1 - angka2;
                    cout << "\nHasil = " << hasil << endl;
                    break;

                case 3:
                    hasil = angka1 * angka2;
                    cout << "\nHasil = " << hasil << endl;
                    break;

                case 4:
                    if (angka2 == 0)
                        throw "Error: Pembagian dengan nol tidak diperbolehkan!";

                    hasil = angka1 / angka2;
                    cout << "\nHasil = " << hasil << endl;
                    break;

                case 5:
                    if ((int)angka2 == 0)
                        throw "Error: Modulus dengan nol tidak diperbolehkan!";

                    cout << "\nHasil = "
                         << (int)angka1 % (int)angka2 << endl;
                    break;

                default:
                    throw "Error: Menu tidak tersedia!";
            }
        }

        catch (const char* pesan) {
            cout << pesan << endl;
        }

        cout << "\nApakah ingin menghitung lagi? (Y/T) : ";
        cin >> ulang;

    } while (ulang == 'Y' || ulang == 'y');

    cout << "\nTerima kasih telah menggunakan kalkulator." << endl;

    return 0;
}