// Array
// #include <iostream>
// using namespace std;

// int main(){ 
//     int bil[20] = {3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60};

//     cout<<bil[17]<<endl;

// }

// Array memakai looping
// #include <iostream>
// using namespace std;

// int main(){ 
//     int bil[20] = {3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60};

//     for (int bil2 : bil){
//         cout<<bil2<<"\n";
//     }
       
// }

//Array dimensi 2
// #include <iostream>
// using namespace std;

// int main(){ 
//     int bil[2][5] = {{3,6,9,12,15,},{18,21,24,27,30}};

//     cout<<bil[0][3]<<endl;
// }

//Array d2 jika di ubah
// #include <iostream>
// using namespace std;

// int main(){ 
//     int bil[2][5] = {{3,6,9,12,15,},{18,21,24,27,30}};
//     bil[0][2] = 6;

//     cout<<bil[0][6]<<endl;
// }

//array d2 Use a looping
// #include <iostream>
// using namespace std;

// int main(){ 
//     int bil[2][5] = {{3,6,9,12,15,},{18,21,24,27,30}};

//     for(int x=0; x<2; x++){
//         for(int y=0; y<5; y++){
//             cout << bil[x][y]<<"\n";
//         }
//     }

// }

//Array d2 looping kesamping
#include <iostream>
using namespace std;

int main(){ 
    int bil[2][5] = {{3,6,9,12,15,},{18,21,24,27,30}};

    for(auto & baris : bil){
    for(auto & kolom : baris){
        cout << kolom << " ";
    }
    
    cout<<endl;
}

}
