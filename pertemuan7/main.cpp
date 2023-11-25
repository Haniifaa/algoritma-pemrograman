#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

void print_identitas();
void print_jumlah (int num1, int num2);
float hitung(int num1, int num2);
void print_nama(char nama[]);
int len_text(char text[]);
int max(int arr_num[], int n);
int i;


int main()
{
    print_identitas();

    print_jumlah(15, 12);
    print_jumlah(44, 29);
    printf("\n");

    float hitung1(int num1, int num2);
    float hitung2(int num1, int num2);
    float hitung3(int num1, int num2);
    float hitung4(int num1, int num2);
    printf("%d %c %d = %2.2f\n", 2, '+', 3, hitung1(2,3));
    printf("%d %c %d = %2.2f\n", 9, '-', 2, hitung2(9,2));
    printf("%d %c %d = %2.2f\n", 4, 'x', 3, hitung3(4,3));
    printf("%d %c %d = %2.2f\n", 9, '/', 3, hitung4(9,3));

    printf("\n");
    print_nama("Anton Suryanto");
    print_nama("Muhammad Khamdan");
    print_nama("Habibah Sarawati");
    print_nama("Lathifatun Nikmah");

    printf ("\n");
    printf("adalah panjang karakter dari teks \"%s\" \n", "Laki-Laki",
        len_text("Laki-Laki"));
    printf("adalah panjang karakter dari teks \"%s\" \n", "Ada apa sih",
        len_text("Ada apa sih"));
    printf("adalah panjang karakter dari teks \"%s\" \n", "Ada Ini di Situ",
        len_text("Ada Ini di Situ"));
    printf("adalah panjang karakter dari teks \"%s\" \n", "Anak kos makan mie",
        len_text("Anak kos makan mie"));

    printf("\n");
    int arr1[5] = {4, 5, 6, 7, 8};
    printf("Nilai tertinggi  dari arr1 : %d\n", max(arr1, 5));
    int arr2[5] = {8, 7, 6, 5, 4};
    printf("Nilai tertinggi  dari arr2 : %d\n", max(arr2, 5));
    int arr3[5] = {7, 5, 8, 6, 4};
    printf("Nilai tertinggi  dari arr3 : %d\n", max(arr3, 5));
    int arr4[7] = {67, 23, 55, 87, 12, 40, 22};
    printf("Nilai tertinggi  dari arr4 : %d\n", max(arr4, 7));

    return 0;
}

void print_identitas()
{
    cout<<"============================="<<endl;
    string name="Haniifa Aliila Faudyta";
    cout<<"Nama : "<<name<<endl;
    string nim="A11.2021.13820";
    cout<<"NIM : "<<nim<<endl;
    string alamat="Tumpangkrasak, Kudus";
    cout<<"Alamat : "<<alamat<<endl;
    cout<<"============================="<<endl;
    cout<<endl;
}



void print_jumlah (int num1, int num2)
{
    printf("%d + %d = %d\n",num1, num2, num1+num2);

}



float hitung1(int num1, int num2)
{
    return num1+num2;
}
float hitung2(int num1, int num2)
{
    return num1-num2;
}
float hitung3(int num1, int num2)
{
    return num1*num2;
}
float hitung4(int num1, int num2)
{
    return num1/num2;
}




void print_nama(char nama[])
{
    cout<<"Namanya adalah : "<< nama <<endl;
}



int len_text(char text[])
{

    printf("%d karakter ",strlen(text));

}




int max(int arr_num[], int n)
{
    int max=arr_num[0];
    for(i=0; i<n; i++)
    {
        if(arr_num[i]>max)
        {
            max=arr_num[i];
        }
    }
    return max;
}

