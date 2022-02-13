#include <iostream>
using namespace std;
int main()
{
    int toplam = 0;
    for (int i =0; i<10; i++)
    {
        int puan;
        cout <<i+1<<".Ogrenci Puani: ";
        cin>>puan;
        toplam +=puan;
    }
    cout <<"Ortalama : " << toplam /10;
}



