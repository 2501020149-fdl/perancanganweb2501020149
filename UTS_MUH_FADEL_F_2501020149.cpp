// #include <iostream>
// using namespace std;

// int main(){
//     const int stok = 12;
//     const double hargaNormal = 7000000;
//     const double hargaPromo = 6500000;
//     int jumlah;
//     double totalHarga = 0, diskon = 0, pajak = 0;

//     cout<< "===PEMBELIAN KOMPUTER TOKO A===" << endl;
//     cout<< "Masukkan Jumlah Unit yang Ingin di Beli" << endl;
//     cin>>jumlah;

//     if(jumlah >= stok){
    
//         if(jumlah <3) {
//             totalHarga = jumlah * hargaNormal;
//         }
//         else if(jumlah <=10){
//             diskon = 0.10 * (jumlah*hargaNormal);
//             pajak = 0.10 * (jumlah*hargaNormal)-(diskon);
//             totalHarga = (jumlah*hargaNormal) - diskon + pajak;
//         }
//         else if (jumlah >20)
//            diskon = 0.15 * (jumlah*hargaNormal);
//            pajak = 0.15 * (jumlah*hargaNormal)-(diskon);
//            totalHarga = (jumlah*hargaNormal)- diskon + pajak;
//         }
//         else if (jumlah >20){
//               diskon = 0;
//               pajak = 0.15 * (jumlah * hargaPromo);
//               totalHarga = (jumlah * hargaPromo)+(pajak);
//             }
//         else{
//             cout<<"Maaf, Jumlah Pesanan anda Tidak Mencukupi untuk Pre Order. Harus memesan di atas 20 unit"<<endl;
//         }
//       return 0;
    
//     {  
//     cout << "\n=== RINCIAN PEMBELIAN ===" << endl;
//     cout << "Jumlah Unit     : " << jumlah << endl;
//     cout << "Diskon          : Rp " << diskon << endl;
//     cout << "Pajak           : Rp " << pajak << endl;
//     cout << "Total Pembelian : Rp " << totalHarga << endl;

//     cout << "\nTerima kasih telah berbelanja di Toko A!" << endl;
//     }   
//     return 0;      
        
// }

#include <iostream>
using namespace std;

int main() {
    cout << "Menggunakan for:" << endl;
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }

    cout << endl << endl;

    cout << "Menggunakan while:" << endl;
    int j = 1;
    while (j <= 100) {
        cout << j << " ";
        j++;
    }

    cout << endl << endl;

    cout << "Menggunakan do-while:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 100);

    cout << endl;
    return 0;
}
