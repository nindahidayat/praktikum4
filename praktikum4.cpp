#include <iostream>

using namespace std;

int main()
{
    int barang;
    char nama [20];
    char kode;
    cout<<"----------------------------------------------------\n";
    cout<<"|****************PENTUL ELEKTRONIK*****************|\n";
    cout<<"----------------------------------------------------\n";
    cout<<"                                                    \n";
    cout<<"              ~DAFTAR MENU~                       ";
    cout<<"                                                    \n";
    cout<<"  ______ ___________________ ____________           \n";
    cout<<" | KODE |     NAMA BARANG   |    HARGA   |          \n";
    cout<<" |   1  |      TELEVISI     | 750.000    |          \n";
    cout<<" |   2  |      DISPENSER    | 450.000    |          \n";
    cout<<" |   3  |       KULKAS      | 1.200.000  |          \n";
    cout<<" |   4  |        DVD        | 400.000    |          \n";
    cout<<" |______|___________________|____________|          \n";
    cout<<"\n";
    cout<<"____________________________________________________\n";
    cout<<" Nama Pembeli          : "; cin>>nama;
    cout<<" Kode Barang           : "; cin>>kode;
    cout<<" Jumlah                : "; cin>>barang;
if (kode=='1'){
    int diskon,total,total_bayar,harga_barang;
    harga_barang=750000;
    total=barang*harga_barang;
        if (total>=1001000)  (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    total_bayar=total-diskon;
    cout<< " Nama Pembeli       : " <<nama<< endl;
    cout<< " Kode Barang        : " <<kode<< endl;
    cout<< " Nama Barang        : " <<"TELEVISI"<< endl;
    cout<< " Harga              : Rp." <<harga_barang<< endl;
    cout<< " Jumlah             : " <<barang<< endl;
    cout<< " Total Harga        : Rp." <<total<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Diskon              : Rp." <<diskon<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Total Bayar         : Rp." <<total_bayar<<",-"<< endl;
}
    if (kode=='2'){
    int diskon,total,total_bayar,harga_barang;
    harga_barang=450000;
    total=barang*harga_barang;
        if (total>=1001000)  (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    total_bayar=total-diskon;
    cout<< " Nama Pembeli       : " <<nama<< endl;
    cout<< " Kode Barang        : " <<kode<< endl;
    cout<< " Nama Barang        : " <<"DISPENSER"<< endl;
    cout<< " Harga              : Rp." <<harga_barang<< endl;
    cout<< " Jumlah             : " <<barang<< endl;
    cout<< " Total Harga        : Rp." <<total<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Diskon              : Rp." <<diskon<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Total Bayar         : Rp." <<total_bayar<<",-"<< endl;
}
    if (kode=='3'){
    int diskon,total,total_bayar,harga_barang;
    harga_barang=1200000;
    total=barang*harga_barang;
        if (total>=1001000)  (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    total_bayar=total-diskon;
    cout<< " Nama Pembeli       : " <<nama<< endl;
    cout<< " Kode Barang        : " <<kode<< endl;
    cout<< " Nama Barang        : " <<"KULKAS"<< endl;
    cout<< " Harga              : Rp." <<harga_barang<< endl;
    cout<< " Jumlah             : " <<barang<< endl;
    cout<< " Total Harga        : Rp." <<total<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Diskon              : Rp." <<diskon<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Total Bayar         : Rp." <<total_bayar<<",-"<< endl;
}
    if (kode=='4'){
    int diskon,total,total_bayar,harga_barang;
    harga_barang=400000;
    total=barang*harga_barang;
        if (total>=1001000)  (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    total_bayar=total-diskon;
    cout<< " Nama Pembeli       : " <<nama<< endl;
    cout<< " Kode Barang        : " <<kode<< endl;
    cout<< " Nama Barang        : " <<"TELEVISI"<< endl;
    cout<< " Harga              : Rp." <<harga_barang<< endl;
    cout<< " Jumlah             : " <<barang<< endl;
    cout<< " Total Harga        : Rp." <<total<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Diskon              : Rp." <<diskon<<",-"<< endl;
    cout<< "_____________________________________________________\n";
    cout<< "Total Bayar         : Rp." <<total_bayar<<",-"<< endl;
}
    cout<< "|======================================================|\n";
    cout<<"|                       TERIMAKASIH                    |\n";
    cout<<"|                    ATAS KUNJUNGANNYA                 |\n";
    cout<< "|======================================================|\n";

}
