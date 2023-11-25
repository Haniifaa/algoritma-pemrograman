#include <iostream>

using namespace std;
void tukar(int &a, int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}

void print_array(int *data, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}

//fungsi untuk mengembalikan array
int *gen_return(int s)
{
    int *result = (int *)malloc(s* sizeof(int));
    for(int i=0; i<s; i++)
    {
        result[i]-i+1;
    }
    return result;
}

int * stat_return(int *data, int s)
{
    int *result = (int *)malloc(4 * sizeof(int));//pesan array pointer 4 tempat

    int nilai_min=100, nilai_max=0, jml_total=0, nilai_rerata=0;

    for(int i=0;i<s;i++)
    {
        jml_total=jml_total+data[i];
        if(data[i]<nilai_min)
            nilai_min=data[i];
        if(data[i]>nilai_max)
            nilai_max=data[i];
    }
    nilai_rerata=jml_total/s;

    result[0] = nilai_min;
    result[1] = nilai_max;
    result[2] = jml_total;
    result[3] = nilai_rerata;

    return result;
}
int main()
{
    int n = 4;
    float pi= 3.14159;
    int *pn =&n; //pointer pn berisi alamat dari integer n
    float *ppi = &pi; //pointer ppi berisi alamat dari float pi
    *ppi=3.14;
    cout<<n<<" alamatnya "<< &pn<<endl;
    cout<<pi<<" alamatnya "<< &ppi<<endl;
    string mafa ="Bakso";
    string *pmafa = &mafa;

    cout<<mafa<<" alamatnya "<<&pmafa<<endl;
    *pmafa="Mie";

    cout<< mafa << " alamatnya " <<&pmafa<<endl;

    int a=123, b=456;
    cout<< "Sebelum tukar\ta = "<<a<<", b = "<<b<<endl;
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<"Setelah tukar\ta = "<<a<< ", b = "<<b<<endl;

    int c=19, d=90;
    cout<< "Sebelum tukar\tc = "<<c<<", d = "<<d<<endl;
    tukar(c,d);
    cout<< "Setelah tukar\tc = "<<c<<", d = "<<d<<endl;


    int *p_array = (int *)malloc(10 * sizeof(int));
    p_array[0]=8;
    p_array[8]=19;

    printf("%d\n", p_array[0]);
    printf("%d\n", p_array[8]);

    p_array = (int *)malloc(20*sizeof(int));
    p_array[15]=99;
    printf("%d\n", p_array[15]);
    printf("%d\n", p_array[5]);
    int arr1[]={78, 96, 57, 99, 10};
    print_array(arr1, 5);

    int *arrPtr= gen_return(25);
    print_array(arrPtr, 25);

    cout << "Stat return\n";
    int angkaStat[3] = {13,8,20};
    int *arrStat = stat_return(angkaStat,3);
    print_array(arrStat, 4);

    return 0;
}
