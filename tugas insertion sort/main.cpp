#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    int arrI[]={2,56,34,1};
    int sI=sizeof(arrI)/sizeof(arrI[0]);

    cout<<"arrI sebelum proses insertion sort\n";
    printArray(arrI, sI);
    insertionSort(arrI, sI);
    cout<<"arrI setelah proses insertion sort\n";
    printArray(arrI, sI);

    return 0;
}
