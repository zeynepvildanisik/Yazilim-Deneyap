#include <iostream>
using namespace std;
int main()
{
    int puan;
    cout << "notu giriniz:";
    cin >> puan;
    if(puan<50)
        cout << "kaldi";
    else if(puan<70)
        cout << "belge yok";
    else if(puan<85)
        cout << "tesekkur belgesi";
    else if(puan<=100)
        cout << "taktir belgesi";

    else
        cout <<"Hatali giris";
    return 0;
}
