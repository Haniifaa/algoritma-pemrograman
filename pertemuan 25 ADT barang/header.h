#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>
using namespace std;

//struct yang diimplementasikan di
//Pemrograman berbasis object

class Barang{
    public:
    string nama;
    int qty, harga;
    float diskon;

    //method konstruktor
    //method yang otomatis dipanggil saat pembuatan objek
    Barang(string nama, int qty, int harga, float diskon)
    {
        this->nama=nama;
        this->qty = qty;
        this->harga=harga;
        this->diskon=diskon;
    }
    Barang()//konstruktor tanpa inputan
    {

    }

    void cetak()
    {
    cout<<"Barang "<< nama<<" {"<<qty<<"} : Rp "<<harga<<
    " [diskon "<<diskon<<"]"<<endl;
    }

    void setDiskon(int diskon)//method prosedur
    {
        if(diskon>=0 && diskon <=100)
            this->diskon=diskon/100.0;//convert ke float, kalau /100 saja jadi int
        else
            this->diskon=0;
        //this->diskon var.diskon milik class
        //diskon var. diskon milik inputan prosedur

    }
    string strDiskon() //method fungsi
    {
        //return string
        return to_string((int) diskon)+"%";//20.000.000
    }

};

/*string nama[];
    int qty[], harga[];
    float disko[];
    Barang laptop[];*/


#endif // HEADER_H_INCLUDED
