#include <iostream>

using namespace std;

int main()
{
    int um1, um2, um3, um4;
    int bi1, bi2, bi3, bi4;
    int total;

    cout << " Bantuan Pemerintah Kota Los Angeles bagi korban patah hati." << endl;
    cout << " Masukkan umur anggota keluarga : " << endl;
    cout << " Umur Bapak     : "; cin >> um1;
    cout << " Umur Mama      : "; cin >> um2;
    cout << " Umur Sulung    : "; cin >> um3;
    cout << " Umur Bungsu    : "; cin >> um4;


    if(um1 > 0 && um1 <= 12){
        bi1= 15000;
    }else if (um1 > 12 && um1 <= 20){
        bi1= 20000;
    }else if (um1 > 20){
        bi1= 30000;
    }else{
        bi1= 0;
    }


       if(um2 > 0 && um2 <= 12){
        bi2= 15000;
    }else if (um2 > 12 && um2 <= 20){
        bi2= 20000;
    }else if (um2 > 20){
        bi2= 30000;
    }else{
        bi2= 0;
    }


    if(um3 > 0 && um3 <= 12){
        bi3= 15000;
    }else if (um3 > 12 && um3 <= 20){
        bi3= 20000;
    }else if (um3 > 20){
        bi3= 30000;
    }else{
        bi3= 0;
    }


    if(um4 > 0 && um4 <= 12){
        bi4= 15000;
    }else if (um4 > 12 && um4 <= 20){
        bi4= 20000;
    }else if (um4 > 20){
        bi4= 30000;
    }else{
        bi4= 0;
    }



    total= 30*(bi1+bi2+bi3+bi4);

    cout << " Total biaya yang harus dikeluarkan pemerintah Kota Los Angeles bagi korban terdampak adalah Rp.";
    cout << total << endl;

    cin.get();
    cin.get();
    return 0;

}

