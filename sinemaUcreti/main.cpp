
#include <iostream>
using namespace std;
int main()
{
    int yas;
    cout << "yasinizi giriniz:";
    cin >> yas;

    if(yas<18)
        cout << "Ucret: 15 TL ";
    else if(yas<65)
        cout << "Ucret: 20 TL ";
    else
        cout << "Ucret: 10 TL";
    return 0;
}
