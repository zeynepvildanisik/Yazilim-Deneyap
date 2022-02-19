
#include <iostream>
using namespace std;
int main()
{
    int sayilar[100];
    int i, n, bol3=0, bol5=0;
    cout << "Dizi boyutunu girin : ";
    cin >> n;
    cout<<"\nDizi elemanlarini girin :\n";
    for(i=0; i<n; i++){
        cout << "Elemani girin dizi[" << i << "] : ";
        cin >> sayilar[i];
    }
     for(i=0; i<n; i++){   //eksik olan kýsým
        if(sayilar[i]%3==0)
            bol3++;
        if(sayilar[i]%5==0)
            bol5++;
    }
    cout << "\n3 ile bolunebilen eleman sayisi: " << bol3;
    cout << "\n5 ile bolunebilen eleman sayisi: " << bol5;
    return 0;
}

