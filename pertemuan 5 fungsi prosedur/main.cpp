#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
14 Maret 2022 - Pertemuan 5
Fungsi Prosedur
*/

int Max2(int angka1, int angka2);//ini fungsi
void Max2P(int angka1, int angka2);//ini prosedur

using namespace std;

int main()
{
    char nama [50] = "Haniifa Aliila Faudyta"; //array of char=string
    char univ[50];
    strcpy(univ,"Universitas Dian Nuswantoro");

    printf("Nama \t = %s\n", nama);
    printf("Kampus\t = %s\n",univ);
    //%d=int, %f=float, %c=char
    //strcpy(nama,univ)
    cout << "Nama \t = " << nama << endl;
    printf("Banyak huruf pada string nama=%d, dan string univ=%d\n", strlen(nama),strlen(univ));

    strcat(nama, univ);//prosedur
    printf("hasil penggabungan =%s\n", nama);
    printf("Nama uppercase = %s\n ", strupr(nama));
    printf("Nama lowercase = %s\t jumlah string nama sekarang=%d\n", strlwr(nama), strlen(nama));

    int x,y;
    float z, akarZ;
    printf("x= "); scanf("%d",&x);
    printf("y= "); scanf("%d", &y);
    printf("%d pangkat %d= %.2f\n", x, y, pow(x,y));
    printf("Nilai terbesar dari x dan y adalah %d\n", Max2(x,y));//x,y = var.aktual

    printf("(Dari prosedur) Nilai terbesar dari x dan x adalah");
    Max2P(x,y);

    printf("\nMenghitung akar\nz = ");
    scanf("%f", &z);
    akarZ = sqrt(z);
    printf("Hasil akar %f= %.3f\n", z, akarZ);
    return 0;
}

int Max2(int angka1, int angka2)//angka1 angka2 = variabel formal
{
    if(angka1 >= angka2)
        return angka1;
    else
        return angka2;
}
void Max2P(int angka1, int angka2)
{
    if(angka1>=angka2)
        cout<<angka1<<endl;
    else
        cout<<angka2<<endl;
}
