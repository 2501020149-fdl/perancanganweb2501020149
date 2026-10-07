//Nomor 1.
// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string negara[10] = {
//         "Indonesia","Malaysia","Singapura","Thailand","Vietnam","Kamboja","Philipina","Jepang","Timur Leste","Myanmar"
//     };
    
//     int indeks;
//     cout<<"Masukkan negara (2,5,7,9): ";
//     cin >> indeks;

//     if(indeks >= 0 && indeks <10){
//         cout<<"Negara pada indeks"<< ":"<< negara[indeks]<< endl;
//     } 
//     else {
//         cout<<"indeks tidak valid. harus 0 dan 9." << endl;
//     }

//     cout<<"\nDaftar semua negara:\n";
//     for (int i = 0; i<10; i++){
//         cout << i << "."<< negara[i]<<endl;
//     }

// return 0;

// }

//Nomor 2.
#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout << "Penjumlahan Matriks\n";
    cout << "Deskripsi : Menghitung total semua elemen dalam matriks\n";
    cout << "===============================================\n";

    cout << "Input jumlah baris = ";
    cin >> baris;

    cout << "Input jumlah kolom = ";
    cin >> kolom;

    int matriks[100][100]; 

    cout << "Input elemen = \n";

    
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen[" << i << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }

    cout << "Jumlah elemen disesuaikan dengan kolom\n";
    cout << "Jumlah elemen disesuaikan dengan baris\n";
    cout << "===============================================\n";


    int total = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            total += matriks[i][j];
        }
    }

    cout << "Total elemen matriks = " << total << endl;

    return 0;
}