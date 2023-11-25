#include <iostream>

using namespace std;

float nilaiAkhir(float N_Tugas, float N_UTS, float N_UAS);
char gradenilai(float nilaiAkhir);
void cetaknilai(float N_Tugas,float N_UTS, float N_UAS);
void inputnilai();//prosedur baru

float tugas, uts, uas;

int main()
{
    inputnilai();

    cetaknilai(tugas,uts,uas);

    return 0;
}

float nilaiAkhir(float N_Tugas, float N_UTS, float N_UAS)
{
    float hasil;

    hasil=(N_Tugas*0.4)+(N_UTS*0.3)+(N_UAS*0.3);

    return hasil;

}
char gradenilai(float nilaiAkhir)
{

    if((nilaiAkhir>=85) && (nilaiAkhir<=100))
        return 'A';
    else if ((nilaiAkhir>=70) && (nilaiAkhir<85))
        return 'B';
    else if ((nilaiAkhir>=50) && (nilaiAkhir<70))
        return 'C';
    else if ((nilaiAkhir>=40) && (nilaiAkhir<50))
        return 'D';
    else
        return 'E';
}

void cetaknilai(float N_Tugas, float N_UTS, float N_UAS)
{
    float n_akhir;
    char grd_nilai;

    n_akhir= nilaiAkhir(N_Tugas,N_UTS,N_UAS);
    grd_nilai=gradenilai(n_akhir);

    cout<<"Nilai Tugas\t = "<<N_Tugas<<endl;
    cout<<"Nilai UTS\t = "<<N_UTS<<endl;
    cout<<"Nilai UAS\t = "<<N_UAS<<endl;

    cout<<"Nilai Akhir\t = "<<n_akhir<<endl;
    cout<<"Grade Nilai = "<<grd_nilai<<endl;
}

void inputnilai()
{
     cout<< "Masukkan nilai tugas \t = ";
    cin>>tugas;
    cout<<"Masukkan nilai uts \t = ";
    cin>>uts;
    cout<<"Masukkan nilai uas \t = ";
    cin>>uas;
    //awalnya di int main di pindah ke sini

}
