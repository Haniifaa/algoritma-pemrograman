#include <iostream>

using namespace std;

void tukar(int x, int y);

int main()
{
    int a,b;
    a=10, b=3;

    cout<<"sebelum tukar\na = "<<a<<"\tb = "<<b<< endl;
    tukar(a,b);


    return 0;
}

void tukar(int x, int y)
{
    int temp;

	temp = x;
	x = y;
	y = temp;
    cout<<"Setelah tukar\na = "<<x<<"\tb = "<<y<<endl;
}
