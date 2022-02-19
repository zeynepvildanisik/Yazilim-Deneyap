
#include <iostream>

using namespace std;

int main()
{
    cout<<"Iki boyutlu dizinin elmanlarini yazdiran program : "<<endl;
     int notlar[4][2] = {{90, 70},
                         {50, 80},
                         {85, 86},
                         {50, 70}};
    int i,j;
    for(i=0;i<4;i++)
        {
            for(j=0;j<2;j++)
            {
                 cout<<notlar[i][j]<<endl;
            }
        }
         cout<<"Iki boyutlu dizinin ad ve soyad harf elmanlarini yazdiran program : "<<endl;
         char harfler[2] [5]  = {{'H', 'K', 'A', 'R', 'S'},
                                 {'M', 'N', 'P', 'S', 'D'} };
            char a,b;
            for(a=0;a<2;a++)
            {
            for(b=0;b<5;b++)
            {
                 cout<<harfler[a][b]<<endl;
            }
        }
    return 0;
}
