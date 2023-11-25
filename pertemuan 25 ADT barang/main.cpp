#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Barang laptop; //objek = implementasi dari class
    //memanggil konstruktor tanpa inputan
    laptop.nama="laptop ROG 15 inch";
    laptop.qty=15;
    laptop.harga=20000000;
    laptop.diskon=20;
    //laptop.setDiskon(20);
    laptop.cetak();

    /*Barang keyboard;
    keyboard.nama="Keychron K3";
    keyboard.qty=20;
    keyboard.harga=1300000;
    keyboard.diskon=10;
    keyboard.cetak();*/

    Barang mouse{"Mouse MX Master",20,1000000,0};
    //memanggil konstruktor dengan inputan
    mouse.cetak();
    Barang keyboard{"Keychron K3", 100,1300000,10};
    keyboard.cetak();

    return 0;
}
