
#include <iostream>
using namespace std;

int main () {
   // degisken tanimlama
    int a ;
    cin >> a;
   // kosul kontrolu
   // ifade(ler) kosul true(dogru) ise buradaki kodlar calisir.
   if( a < 20 ) {
      // a 20den kucukse buradaki blok calisacak
      cout << "a 20den buyuktur;" << endl;
   }   // ifade(ler) kosul false(yanlis) ise buradaki kodlar calisir.
     else {
      // a 20den kucuk degilse buradaki blok calisacak
      cout << "a 20den buyuk degildir;" << endl;
   }

   cout << "a sayisi : " << a << endl;

   return 0;
}



   /*
if(koþul 1) {
   // ifade(ler) kosul 1 true(dogru) ise buradaki kodlar calisir.
} else if( koþul 2) {
   // ifade(ler) kosul 2 true(dogru) ise buradaki kodlar calisir.
} else if( koþul 3) {
   // ifade(ler) kosul 3 true(dogru) ise buradaki kodlar calisir.
} else {
   // ifade(ler) kosullar true deðilse ise buradaki kodlar calisir.
}
*/

 /*   // ifade(ler) kosul false(yanlis) ise buradaki kodlar calisir.
     else {
      // a 20den kucuk degilse buradaki blok calisacak
      cout << "a 20den buyuk degildir;" << endl;
   } */
