#include <iostream>
using namespace std;
void fonksiyon1(int sayi)
{
    sayi = 20;
}
void fonksiyon2(int & sayi)
{
    sayi = 21;
}
int main()
{
   int yas = 19;
   fonksiyon1(yas);
   cout<<yas <<endl;

   fonksiyon2(yas);
   cout<<yas <<endl;
}
