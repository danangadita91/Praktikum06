# Praktikum06


Program Kalkulator Sederhana Menggunakan Switch

```
Alur Algortima :
1. Deklarasi variable input A dan B dengan type data float
2. Deklarasi vaariable menu dengan type data char
3. Untuk mencegah nilai B=NOL dengan kode :
	while (B==0) {
        cout<< "\nNilai B Tidak Boleh NOL ";
        cout<< "\nMasukan Nilai B : ";
        cin>> B;
    	}
   Penjelasan : Agar ketika memilih menu pembagian teteap ada angka yang di tampilkan
4. Menggunakan Perulangan DO-WHILE untuk perulangan menu, dengan kode :
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
    while (menu = 1-4);
	}
5. Menggunakan pilihan Menu Switch, dengan kode :
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
```

Berikut Pseudo-Code :

```
1. A = ...A <--
2. B = ...B <--
3. if(B==0) then goto no 2, else goto no 4
4. Pilih menu =...menu : <-- 1,2,3,4
5. if(menu>4) print "No pilihan Menu Tidak Ada", else goto no 4
6. if(menu=0) goto no 7
7. END
```

Berikut kode Lengkapnya :

```
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
```
 Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum06/master/Kalkulator/B%3D%3D0.png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum06/master/Kalkulator/Jenis%20Operasi%20(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum06/master/Kalkulator/Jenis%20Operasi%20(2).png)