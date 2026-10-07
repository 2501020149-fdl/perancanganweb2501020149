// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string username, password;

//     cout << "===Program Login Sederhana===" << endl;



//     cout<<"Masukkan username: ";
//     cin>>username;
//     cout<<"Masukkan password: ";
//     cin>>password;

//     string usernameBenar = "Tanjungpinang21";
//     string passBenar = "Indah21";

//     if(username == usernameBenar && password == passBenar){
//         cout<<"Login Berhasil Welcome: " << endl;}
//     else if(username == usernameBenar && password != passBenar){
//         cout<<"Password Salah: " << endl;}
//     else if("username == usernameBenar && password == passBenar"){
//         cout<<"Username Salah: " << endl;}
//     else {
//         cout << "username dan password salah!" << endl;
//     }

// return 0;


// }

#include <iostream>
using namespace std;

int main(){
    int nilai;
    float ipk;

    cout<<"Masukkan Nilai Ipk=";
    cin>>ipk;
    cout<<"Nilai Mata Kuliah(A/B/C)=";
    cin>>nilai;

    if(ipk==4.00 && (nilai == 'A')){
        cout<<"Predikat lulusan: Summa cumlaude: " << endl;}
    else if(ipk >=3.80 && ipk >=3.90 && (nilai == 'B')){
        cout<<"Predikat lulusan: Magna cumlaude: " << endl;}
    else if(ipk >=3.50 && ipk <=3.80 && (nilai == 'C')){
        cout<<"Predikat lulusan: cumlaude: " << endl;}
    else if(ipk >=2.70 && ipk <=3.50){
        cout<<"Predikat lulusan: sangat memuaskan: " << endl;}
    else if(ipk >=2.30 && ipk <=3.50){
        cout<<"Predikat lulusan: cukup memuaskan: " << endl;}
    else if(ipk <2.00){
        cout<<"Tidak lulus: harus mengulang: " << endl;}
    else{
        cout<<"Data Tidak Valid!"<<endl;
    }

return 0;
    
    
}