#include<iostream>
using namespace std;
int main()
{
    char dizi[4];
    char katar[5];
    int i;

    cout << "Ilk ismin karakterlerini giriniz: " << endl;
    for(i=0; i < 4; i++) {
        cin >> dizi[i];
    }
    cout << "Ikinci ismin karakterlerini giriniz: " << endl;
    for(i=0; i < 4; i++) {
        cin >> katar[i];
    }
    katar[4] = '\0';
    //çünkü yazının sonunda '\0' karakter bulunacağından, kontrol ifadelerinde budurum test edilerek yazının sonuna gelinip gelinmediği anlaşılır. Ancak '\0' karakterin, karakter dizilerinde yazıların son elemanı olarak kullanılmasının dezavantajı da diziye fazladan bir karakter yani
    //'\0' karakteri eklemek zorunluluğudur. Bu nedenle 10 elemanlı bir diziye en fazla 10 – 1 tane karakter girilebilinir.

    cout << "Ilk isim: ";
    for(i=0; i < 4; i++) {
        cout << dizi[i]; //dizi çıkış değeri
    }

    cout << "\nIkinci isim: ";
    cout << katar; // katar çıkış değeri

    return 0;
}
