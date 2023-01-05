#include <iostream>
#include <fstream>

using namespace std;

void beolvas(int &n,int a[])
{
    ifstream f("input.txt");
    f>>n;
    for(int i=0;i<n;i++)
    {
        f>>a[i];
    }
    f.close();
}

void csere(int &a,int &b)
{
    int c=a;
    a=b;
    b=c;
}

void quick_sort(int a[], int e, int v)
{
    int i=e,j=v,pivot=a[(e+v)/2];
    while(i<=j)
    {
        while(i<=j && a[i]<pivot)
            i++;
        while(i<=j && a[j]>pivot)
            j--;
        if(i<=j)
        {
            csere(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(e<j)
        quick_sort(a,e,j);
    if(i<v)
        quick_sort(a,i,v);
}

void kiir(int n,int a[])
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}

int main()
{
    int n,a[30];
    beolvas(n,a);
    quick_sort(a,0,n-1);
    kiir(n,a);
    return 0;
}
