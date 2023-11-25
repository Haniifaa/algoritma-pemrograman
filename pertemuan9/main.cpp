#include <iostream>
#include "header.h"
//include pake " untuk memanggil library dalam 1 project
//biasanya library buatan sendiri

using namespace std;



int main()
{
    int a, b;
    a=3,b=10;
    cout << "Sebelum tukar\na = "<<a<<"\tb = "<<b<< endl;
    tukar(a,b);
    cout << "Setelah tukar\na = "<<a<<"\tb = "<<b<< endl;

    cout<<"=====================================\n"<<endl;
    int arrB[]={33,28,3,22};
    int sB=sizeof(arrB)/sizeof(arrB[0]);
    cout<<"Sebelum sorting menggunakan bubble\n";
    printArray(arrB,sB);
    cout<<"Setelah sorting menggunakan bubble\n";
    bubbleSort(arrB,sB);
    printArray(arrB,sB);
    cout<<"======================================\n";

    int arrS[]={10,42,30,3};
    int sS=sizeof(arrS)/sizeof(arrS[0]);

    cout<<"arrS sebelum proses selection sort\n";
    printArray(arrS, sS);
    selectionSort(arrS, sS);
    cout<<"arrS setelah proses selection sort\n";
    printArray(arrS, sS);
    cout<<"======================================\n";

    //insertion sort
    int arrI[]={4,14,22,2};
    int sI=sizeof(arrI)/sizeof(arrI[0]);

    cout<<"arrI sebelum proses insertion sort\n";
    printArray(arrI, sI);
    insertionSort(arrI, sI);
    cout<<"arrI setelah proses insertion sort\n";
    printArray(arrI, sI);


    return 0;
}


