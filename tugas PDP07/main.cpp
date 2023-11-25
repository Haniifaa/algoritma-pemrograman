#include <iostream>
#include<stdio.h>
#include<stdio.h>

using namespace std;

int Max2(int a,int b);
int Max3(int a, int b, int c);
int Max4(int a, int b, int c, int d);
int IsGanjil(int N);
int IsPrima(int N);
int NumOfPrima(int N);
int Pangkat(int basis, int eks);
int SumOfN(int N);
int ProductOfN(int N);
float Average(int N);
float AveSumOfN(int N);
float AveProdOfN(int N);
int FPB(int n, int m);
float C2F(float C);
float F2C(float F);
float C2R(float C);
float R2C(float R);
float Cel2Cal(float Cal);
float Cal2Cel(float Cel);
float R2F(float R);
float F2R(float F);


int main()
{
    printf("Max2 --> 2 dan 5 : %d\n",Max2(2,5));
    printf("Max3 --> 2, 5,1 : %d\n",Max3(2,5,1));
    printf("Max4 --> 7, 2, 5,1 : %d\n",Max4(7,2,5,1));
    printf("IsPrima 7 : %d\n",IsPrima(7));
    printf("IsPrima 17 : %d\n",IsPrima(17));
    printf("IsPrima 70 : %d\n",IsPrima(70));
    printf("FPB(36,48) : %d\n",FPB(36,48));
    printf("IsGanjil 93 : %d\n",IsGanjil(93));
    printf("IsGanjil 1324 : %d\n",IsGanjil(1324));
    printf("Pangkat(2,8) : %d\n",Pangkat(2,8));
    printf("SumOfN(15) : %d\n",SumOfN(15));
    printf("ProductOfN(15) : %d\n",ProductOfN(15));
    printf("AveSumOfN(15) : %f\n",AveSumOfN(15));
    printf("AveProdOfN(15) : %f\n",AveProdOfN(15));
    printf("%.2f C adalah %.2f F\n",72.5,C2F(72.5));
    printf("%.2f F adalah %.2f C\n",13.5,F2C(13.5));
    printf("%.2f C adalah %.2f R\n",72.5,C2R(72.5));
    printf("%.2f R adalah %.2f C\n",22.5,C2F(22.5));
    printf("%.2f C adalah %.2f K\n",72.5,Cel2Cal(72.5));
    printf("%.2f K adalah %.2f C\n",172.5,Cal2Cel(172.5));
    printf("%.2f R adalah %.2f F\n",72.5,R2F(72.5));
    printf("%.2f F adalah %.2f R\n",62.5,F2R(62.5));
    printf("\n");

    return 0;
}

int Max2(int a, int b)
{
    if(a >= b)
        return a;
    else
        return b;
}

int Max3(int a, int b, int c)
{
    if(a >= b && a>=c)
        return a;
    else if (b>=a && b>=c)
        return b;
    else
        return c;
}

int Max4(int a, int b, int c, int d)
{
    if (a>=b && a>=c && a>d)
        return a;
    else if (b>=a && b>=c && b>=d)
        return b;
    else if (c>=a && c>=b && c>=d)
        return c;
    else
        return d;
}

int IsGanjil (int N)
{
    if(N%2==1)
        return 1;
    else
        return 0;
}

int IsPrima(int N)
{
    for(int i=2; i<N; i++){
        if(N%i==0)
            return 0;
        else
            return 1;
    }
}


int Pangkat(int basis, int eks)
{
    int x=1;
    for(int i=1; i<=eks;i++){
        x=x*basis;
    }
    return x;
}

int SumOfN(int N)
{
    int sum;
    for(int i=0; i<=N; i++){
        sum=sum+i;
    }
    return sum;
}

int ProductOfN(int N)
{
    int i,x=0;
    int sum=0;
    i=0;
    while (i<=N)
    {
        x=sum*i;
        sum=sum+i;
        i++;
    }
    return x;
}

float AveSumOfN(int N)
{
    int sum;
    int ave;
    for(int i=0; i<=N; i++){
        sum=sum+i;
    }
    ave=sum/N;
    return ave;
}

float AveProdOfN(int N)
{
    int i,x=0,sum=0;
    i=0; float aveprod;
    while (i<=N)
    {
        x=sum*i;
        sum=sum+i;
        i++;
    }
    aveprod=x/N;
    return aveprod;
}

int FPB(int n,int m)
{
    while (n!=m){
        if (n>m)
            n=n-m;
        else
            m=m-n;
    }
}

float C2F(float C)
{
    float F=(1.8)*(C)+32;
        return F;
}

float F2C(float F)
{
    float C=(F-32)*5/9;
        return C;
}

float C2R(float C)
{
    float R=(0.8)*(C);
        return R;
}


float R2C(float R)
{
    float C=R/0.8;
        return C;
}

float Cel2Cal(float Cal)
{
    float Cel=Cal+273;
        return Cel;
}


float Cal2Cel(float Cel)
{
    float Cal=Cel-273;
        return Cal;
}

float R2F(float R)
{
    float F=(2.25*(R))+32;
        return F;
}

float F2R(float F)
{
    float R=0.444*(F-32);
        return R;
}

