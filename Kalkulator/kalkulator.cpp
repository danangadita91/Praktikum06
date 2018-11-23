#include <iostream>
using namespace std;

int main(){
    float A, B;
    char menu;

    cout<<endl;
    cout<< "--------Program Kalkulator Sederhana--------"<<endl;
    cout<< "============================================"<<endl;
    cout<< " Masukan Nilai A : ";
    cin>> A;
    cout<< " Masukan Nilai B : ";
    cin>> B;

    while (B==0) {
        cout<< "\nNilai B Tidak Boleh NOL ";
        cout<< "\nMasukan Nilai B : ";
        cin>> B;
    }

    do{
        cout<<endl;
        cout<< " Pilih Jenis Operasinya :";
        cout<< " \n1. Perkalian";
        cout<< " \n2. Penjumlahan";
        cout<< " \n3. Pengurangan";
        cout<< " \n4. Pembagian";
        cout<< " \n0. Keluar Applikasi";
        cout<< " \nMasukan Pilihan : ";cin>> menu;
        cout<<endl;

        switch (menu){
            case '1' :
        cout<< "Hasil Perkalian dari "<< A <<" * "<<B<<" : "<< A*B<< endl;
        cout<<endl;
        break;
            case '2':
        cout<< "Hasil Penjumlahan dari "<< A <<" + "<<B<<" : "<< A+B<< endl;
        cout<<endl;
        break;
            case '3':
        cout<< "Hasil Pengurangan dari "<< A <<" - "<<B<<" : "<< A-B<< endl;
        cout<<endl;
        break;
            case '4':
        cout<< "Hasil Pembagian dari "<< A <<" / "<<B<<" : "<< A/B<< endl;
        cout<<endl;
        break;
            case '0' :
        return 0;
            default :
            cout<< "NO pilihan "<<menu<< " Tidak Ada"<<endl;
            break;
    }
    }
    while (menu = 1-4);
}
