
#include <iostream>
using namespace std;
int main()
{
    float dizi[] = {19.23, 26.43, 14.72, 28.71, 15.04, 10.06, 22.96};
    int i, konum, el_sayisi = 7;
    float minimum;
    cout << "Dizi: ";
    for(i=0; i < el_sayisi; i++)
        cout << dizi[i] << " ";
    minimum = dizi[0];
    konum = 0;
        //eksik olan kýsmý tamamlama
        for(i=0;i<el_sayisi;i++)
        {
            if(minimum>dizi[i]){
                minimum=dizi[i];
                konum=i;
            }
        }


    cout << "\nDizinin en kucuk elemani "<< konum <<". indisteki "<< minimum;
  return 0;
}
