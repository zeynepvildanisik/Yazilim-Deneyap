#include <iostream>
using namespace std;
int en_buyuk(int dizi[5])
{
    int enbuyuk = dizi[0];
    for(int i=1;i<5;i++)
    {
        if(enbuyuk<dizi[i])
            enbuyuk=dizi[i];
    }
    return enbuyuk;
}

int main()
{
    int dizi1[] = {5,3,4,15,8};
    int dizi2[] = {9,3,24,5,8};
    int en_buyuk_1 = en_buyuk(dizi1);
    cout<<"1.dizinin en buyuk degeri:"<<en_buyuk_1<<endl;
    int en_buyuk_2 = en_buyuk(dizi2);
    cout<<"2.dizinin en buyuk degeri:"<<en_buyuk_2<<endl;
    cout<<en_buyuk_1<<"+"<<en_buyuk_2<<"="<<en_buyuk_1+en_buyuk_2;

}
