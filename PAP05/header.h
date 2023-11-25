#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>

using namespace std;
void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void tukar(int &x, int &y)//& untuk mengambil alamat memori
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
int cek_urut(int data[], int jml_data)
{
    int i;
    for(i=1; i<jml_data; i++)
    {
        if(data[i]<data[i-1] )
      {
        return false;
      }
    }
    return true;
}
void compress_array(int data[], int jml_data)
{
    int i;
    for(i=0; i<jml_data; i++){
    if (data[i]!=0){
        cout<<data[i]<<" ";
    }
    }

}
void compress_array2(int data[], int jml_data)
{
    int i, j;

    for(i=0; i<jml_data-1; i++)
    {

        for(j=0; j<jml_data; j++)
        {
            if(data[j] > data[j+1])
            {

                tukar(data[j], data[j+1]);
            }

        }

    }
}


void selection_sort1(int data[], int jml_data)
{
    int i, j, min_idx, temp;

    for(i=0; i<jml_data-1; i++)
    {
        min_idx=i;
        for(j=i+1; j<jml_data; j++)
        {

            if(data[j] < data[min_idx])
            {

                min_idx=j;
            }

        }
        //tukar(arr[min_idx], arr[i]);
        temp=data[min_idx];
        data[min_idx]=data[i];
        data[i]=temp;

        printArray(data,jml_data);
    }
}

void selection_sort2(int data[], int jml_data)
{
    int i, j, min_idx, temp;

    for(i=0; i<jml_data; i++)
    {
        min_idx=i;
        for(j=i+1; j<jml_data; j++)
        {

            if(data[j] < data[min_idx])
            {

                min_idx=j;
            }

        }
        //tukar(arr[min_idx], arr[i]);
        temp=data[i];
        data[i]=data[min_idx];
        data[min_idx]=temp;
        for(j=0; j<jml_data; j++)
        {
            cout<<data[j]<<" ";
        }
        cout<<endl;
        if(cek_urut(data,jml_data))
            break;
    }
    cout<<endl;

}



int get_median(int data[], int jml_data)
{
    int i, j, key;

    for(i=1; i<jml_data; i++)
    {
        key = data[i];
        j=i-1;

        while(j>=0 && data[j]>key)
        {
            data[j+1]=data[j];
            j=j-1;
        }
        data[j+1]= key;
    }
    if(jml_data%2==1)
        cout<<data[jml_data/2];
        else
            cout<<( data[jml_data/2]+data[(jml_data/2)-1])/2;
}




#endif // HEADER_H_INCLUDED
