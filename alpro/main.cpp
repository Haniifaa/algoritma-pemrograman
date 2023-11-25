#include <iostream>
/*
Pertemuan 2
Judul: Jam menit detik
*/
using namespace std;

int main()
{
    /*
    //KAMUS
    int x,hh,sisaDetik,mm,ss;

    //algoritma

    cout << "Masukkan detik = ";
    cin>>x;
    hh=x/3600;
    sisaDetik=x%3600;
    mm=sisaDetik/60;
    ss=sisaDetik%60;

    cout<< x <<" detik sama dengan "<<hh<<" : "<<mm<<" : "<<ss<<endl;
    */

    int posCov [7]= {123, 678, 53, 15, 89, 34, 231}; //positif covid kota semarang 28 feb-6 maret 2022
    string hari[7]={"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    int sumposCov =0;
    int  maxposCov=0;
    int minposCov=1000;
    int iMax;
    int iMin;
    for(int i=0; i<7; i++){
        cout << posCov[i];
        if(i<6)
            cout<<", "; //jika perintah if hanya ada 1, boleh tanpa kurung kurawal
        else
            cout<<". ";
        sumposCov=sumposCov+posCov[i];
        if(posCov[i]>maxposCov){
            maxposCov= posCov[i];
            iMax=i;
        }
        if(posCov[i]<minposCov){
            minposCov= posCov[i];
            iMin=i;
        }
    }
    cout<<endl<<"jumlah positiv covid kota semarang 28feb-6maret2022= "<<sumposCov<<endl;

    cout<<"jumlah positiv paling banyak= "<<maxposCov<<" di hari " << hari[iMax]<<endl;
    cout<<"jumlah positiv covid paling sedikit adalah "<<minposCov<<" di hari "<<hari[iMin]<<endl;
    return 0;
}
