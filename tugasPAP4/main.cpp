#include <iostream>
#include "tugaspap4.h"

using namespace std;

int main()
{
    int a1[10] = {NULL}, a2[10] = {NULL};
    int a3[10] = {NULL}, a4[10] = {NULL};
    a1[0]=1; a1[1]=2; a1[2]=3; a1[3]=4; a1[4]=5; a1[5]=6;
    a2[0]=1; a2[1]=2; a2[2]=3; a2[3]=4;
    a3[0]=2; a3[1]=4; a3[2]=9; a3[3]=5; a3[4]=1;
    a4[0]=2; a4[1]=8; a4[2]=5;
    printf("Count array 1= %d\n",count_array(a1, 10));
    printf("Count array 2= %d\n",count_array(a2, 10));
    printf("Count array 3= %d\n",count_array(a3, 10));
    printf("Count array 4= %d\n",count_array(a4, 10));
    cout<<endl;
    cout<<"========================================\n";

    int arr1[] = { 3, 5, 38, 44, 47 };
    printf("Urutan arr1 bernilai : %d\n", cek_urut(arr1, 5));
    int arr2[] = { 3, 44, 38, 5, 47 };
    printf("Urutan arr2 bernilai : %d\n", cek_urut(arr2, 5));
    int arr3[] = { 2, 15, 26, 27, 36 };
    printf("Urutan arr2 bernilai : %d\n", cek_urut(arr3, 5));
    int arr4[] = { 15, 36, 27, 2, 26 };
    printf("Urutan arr2 bernilai : %d\n", cek_urut(arr4, 5));
    cout<<endl;
    cout<<"========================================\n";



    int arr5[]={ 3, 44, 38, 5, 47 };
    cout<<"arr5 Sebelum sorting\n";
    printArray(arr5,5);
    cout<<"arr5 Setelah sorting tanpa cek urut\n";
    bubble_sort1(arr5,5);
    printArray(arr5,5);
    cout<<endl;

    int arr6[]={ 15, 36, 27, 2, 26 };
    cout<<"arr8 Sebelum sorting\n";
    printArray(arr6,5);
    cout<<"arr8 Setelah sorting tanpa cek urut\n";
    bubble_sort2(arr6,5);
    printArray(arr6,5);
    cout<<endl;
    cout<<"========================================\n";



    int arr7[]={ 3, 44, 38, 5, 47 };
    cout<<"arr7 Sebelum sorting menggunakan bubble\n";
    printArray(arr7,5);
    cout<<"arr7 Setelah sorting menggunakan bubble\n";
    bubble_sort2(arr7,5);
    printArray(arr7,5);
    cout<<endl;

    int arr8[]={ 15, 36, 27, 2, 26 };
    cout<<"arr8 Sebelum sorting menggunakan bubble\n";
    printArray(arr8,5);
    cout<<"arr8 Setelah sorting menggunakan bubble\n";
    bubble_sort2(arr8,5);
    printArray(arr8,5);
    cout<<endl;
    cout<<"========================================\n";
    return 0;
}
