
#include <iostream>
using namespace std;
int main()
{
    int sayilar[] = {5, 3, 2, 5, 1, 2, 6, 9, 8, 1};
    int i, j, boyut = 10;
    cout << "Dizi: ";
     for(i = 0; i < boyut; i++) // eksik olan kýsým
        cout << sayilar[i] << " "; // eksik olan kýsým
    cout  << "\nTekrar eden elemanlar: ";
     for(i = 0; i < boyut-1; i++) // eksik olan kýsým
        for(j = i+1; j < boyut; j++)
            if(sayilar[i] == sayilar[j])
                cout <<  sayilar[i] << " ";
    return 0;
}

