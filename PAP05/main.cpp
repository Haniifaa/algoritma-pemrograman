#include <iostream>
#include "header.h"
using namespace std;

int main()
{

    int arr1[] = { 3, 5, 38, 0, 44, 47 };
    cout<<"compress array arr1= ";compress_array (arr1, 6);
    cout<<endl;
    int arr2[] = { 3, 0, 44, 38, 0, 5, 47 };
    cout<<"compress array arr2= ";compress_array (arr2, 7);cout<<endl;
    int arr3[] = { 2, 15, 0, 0, 0, 26, 27, 36 };
    cout<<"compress array arr3= ";compress_array (arr3, 8);cout<<endl;
    int arr4[] = { 15, 36, 27, 0, 0, 2, 26 };
    cout<<"compress array arr4= ";compress_array (arr4, 7);
    cout<<endl;
    cout<<endl;
    cout<<"================================================"<<endl;
    int arr5[] = { 3, 44, 38, 5, 47 };
    cout<<"proses sort arr5= \n";
    selection_sort1(arr5, 5);
    printArray(arr5, 5);
    cout<<endl;
    int arr6[] = { 15, 36, 27, 2, 26 };
    cout<<"proses sort arr6= \n";
    selection_sort1(arr6, 5);
    printArray(arr6, 5);
    cout<<endl;
    cout<<"================================================"<<endl;
    int arr7[] = { 3, 44, 38, 5, 47 };
    cout<<"proses  sort arr7= \n";
    selection_sort2(arr7, 5);
    cout<<endl;
    int arr8[] = { 15, 36, 27, 2, 26 };
    cout<<"proses sort arr8= \n";
    selection_sort2(arr8, 5);
    cout<<endl;
    cout<<"================================================"<<endl;
    int arr9[] = { 3, 44, 38, 5, 47 };
    cout<<"nilai median arr9 = ";
    get_median(arr9, 5);cout<<endl;
    int arr10[] = { 15, 36, 27, 2, 26 };
    cout<<"nilai median arr10 = ";
    get_median(arr10, 5);cout<<endl;
    return 0;
}
