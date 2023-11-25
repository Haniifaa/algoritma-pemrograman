#ifndef TUGASPAP4_H_INCLUDED
#define TUGASPAP4_H_INCLUDED

#include <iostream>

using namespace std;

int count_array(int data[], int jml_data){
    int i;

    int count=0;
    for(i=0; i<jml_data; i++){
            if(data[i]!=0){
                count++;
            }

    }
    return count;
}




int cek_urut(int data[], int jml_data)
{
    int i,j=0;
    for(i=0; i<jml_data-1; i++)
    {
        if(data[i]>data[i+1] )
      {
         j++;
         break;
      }
    }
    if(j==0)
        return 1;
    else
        return 0;
}




void tukar(int &x, int &y)//& untuk mengambil alamat memori
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort1(int data[], int jml_data)
{
    int i, j;
    for(i=0; i<jml_data; i++){
        for(j=0; j<jml_data-i-1; j++)
        if(data[j]>data[j+1]){

            tukar(data[j], data[j+1]);
            printArray(arr, n);
        }

    }
}

void bubble_sort2(int data[], int jml_data)
{
    int i, j;
    for(i=0; i<jml_data-1; i++){
        for(j=0; j<jml_data-i-1; j++)
        if(data[j]>data[j+1]){
            tukar(data[j], data[j+1]);
            printArray(arr, n);
        }

    }
}





#endif // TUGASPAP4_H_INCLUDED
