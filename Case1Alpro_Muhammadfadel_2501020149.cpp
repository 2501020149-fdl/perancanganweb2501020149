// //Sebuah toko elektronik memberikan diskon berdasarkan jumlah barang yang di beli:
// #include <iostream>
// using namespace std;

// int main(){
//     //Deklarasi variabel
//     int jumlahBarang;            //Menggunakan int (intager) karna terdapat bilangan bulat pada jumlah barang
//     double hargaPerBarang;       //Menggunakan double karna terdapat bilangan desimal / pecahan
//     double totalHarga;           
//     double diskon = 0;
//     double TotalBayar;

//     //Judul Program
//     cout << "=== PROGRAM DISKON TOKO ELEKTRONIK ===" << endl;

//     //Memasukkan Input Variabel
//     cout << "Masukkan Jumlah Barang: ";
//     cin >> jumlahBarang;  //Input jumlah barang

//     cout << "Masukkan Harga Per Barang: RP ";
//     cin >> hargaPerBarang;  //Input harga perbarang

//     totalHarga = jumlahBarang * hargaPerBarang; 
    
//     //Masukkan Variabel dengan kondisi if, else if
//     if(jumlahBarang <= 5) {
//         diskon = 0; //Karna jumlah barangnya 5 tidak ada diskon 
//     }
//     else if(jumlahBarang <= 6 && jumlahBarang <= 10){
//         diskon = 0.10; //Jumlah barang 6-10 maka diskon nya 10%
//     }
//     else if(jumlahBarang > 10){
//         diskon = 0.20; //Jumlah barang lebih dari 10 maka diskon 20%
//     }

//     //Menghitung total harga setelah diskon
//     TotalBayar = totalHarga - (totalHarga*diskon);

//     //Menampilkan hasil perhitungan
//     cout << "\n=== HASIL PERHITUNGAN ===" << endl;
//     cout << "Jumlah Barang       : " << jumlahBarang << endl;
//     cout << "Harga per Barang    : Rp " << hargaPerBarang << endl;
//     cout << "Total Harga         : Rp " << totalHarga << endl;
//     cout << "Diskon              : " << diskon * 100 << " %" << endl;
//     cout << "Total Bayar Setelah Diskon : Rp " << TotalBayar << endl;

// return 0;

// }

// //Sebuah sekolah ingin menentukan apakah siswa lulus ujian:
// #include <iostream>
// using namespace std;

// int main (){
//     int nilai; //Varibel menyimpan nilai siswa siswa

//     cout << "=== PROGRAM PENENTUAN KELULUSAN SISWA===" << endl;
//     cout << "Masukkan Nilai Ujian Siswa: ";
//     cin >> nilai; 

//     //Struktur if, else sederhana
//     if(nilai >= 75){
//         cout << "Status : LULUS" << endl; //Jika nilai 70 atau lebih siswa dinyatakan LULUS
//     }
//     else {
//         cout << "Status : TIDAK LULUS" << endl; //Jika nilai siswa dibawah 70 dinyatkan TDAK LULUS
//     }

// return 0;

// }

// //Seorang kasir ingin mencari barang dalam daftar. Jika barang ditemukan, pencarian dihentikan:
// #include <iostream>
// #include <string>
// using namespace std;

// int main (){
//     string daftarBarang [10]={    //Menggunakan string karena tipe text dan array karna terdapat 10 kumpulan data
//         "Laptop", "Mouse", "Keyboard", "Monitor", "Printer",
//          "Speaker", "Flashdisk", "Webcam", "Headset" , "Harddisk"     
//     };

//     string cariBarang;  
//     bool ditemukan = false;  //Data bool untuk mencari barang di temukan atau tidak

//     //Judul Program
//     cout << "=== PROGRAM PENCARIAN BARANG DI TOKO ===" << endl;
    
//     //Memasukkan nama barang
//     cout << "Masukkan Nama Barang Yang Ingin Dicari: ";
//     getline(cin, cariBarang);  //Getline untuk mengambil nilai text yang mengandung spasi

//     //Melakukan pencarian barang di dalam array
//     for (int i = 0; i < 10; i++) {
//         //cek apa elemen array sama dengan nama barang yang dicari
//         if (daftarBarang[i] == cariBarang) {
//             ditemukan = true;        
//             cout << "\nBarang \"" << cariBarang << "\" ditemukan pada posisi ke-" << i + 1 << "!" << endl;
//             break;  //Menghentikan pencarian setelah barang di temukan
//         }

//     }
  
//     if (!ditemukan) {
//         cout << "\nBarang \"" << cariBarang << "\" tidak ditemukan dalam daftar." << endl;
//     }
// return 0;

// }

//aplikasi parkir menghitung biaya berdasarkan jenis kendaraan:
#include <iostream>
using namespace std;

int main(){
    int jenisKendaraan;
    int jam;
    int tarifPerjam;
    int totalBiaya;

    //Menu Program
    cout << "=== PROGRAM HITUNG BIAYA PARKIR ===" << endl;
    cout << "Pilih Jenis Kendaraan: " << endl;
    cout << "1. Motor " << endl;
    cout << "2. Mobil " << endl;
    cout << "3. Truk " << endl;
    cout << "Masukkan Pilihan (1-3) " << endl; 
    cin >> jenisKendaraan;

    //Menentukan tarif per jam berdasarkan jenis kendaraan 
    switch(jenisKendaraan){
        case 1:
        tarifPerjam = 2000;
        cout << "Memilih: Motor" << endl;
        break;
    case 2:
        tarifPerjam = 4000;
        cout << "Memilih: Mobil" << endl;
        break;
    case 3:
        tarifPerjam = 10000;
        cout << "Memilih: Truk" << endl;
        break;
    default:
      cout << "Jenis kendaraan tidak valid! " << endl; 
      return 0;     
    }

   cout << "Masukkan jumlah jam parkir: ";
   cin >> jam;

   //Variabel if-else
   if(jam<=0){
    cout << "Jam parkir tidak valid!" << endl;
   }
   else {
    totalBiaya = tarifPerjam * jam;  //Hitung total
    cout << "===============================" << endl;
    cout << "Tarif per jam          : Rp " << tarifPerjam << endl;
    cout << "Lama parkir            : " << jam << "jam" << endl;
    cout << "Total biaya parkir     : Rp " << totalBiaya << endl;
   }

return 0;
}