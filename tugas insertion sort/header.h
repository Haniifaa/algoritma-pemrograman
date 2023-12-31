#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, key;

    for(i=1; i<n; i++)
    {
        key = arr[i];
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]= key;
    }
}


void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

#endif // HEADER_H_INCLUDED
