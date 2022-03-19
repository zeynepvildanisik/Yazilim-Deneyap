#include<iostream>
#include<cstring>
using namespace std;
class Araba {
public:
    char marka[30];
    char model[30];
    int yil;
    int fiyat;
};
int main(){
Araba araba1;
strcpy(araba1.marka,"Suzuki");
strcpy(araba1.model,"Vitara");
araba1.yil=2016;
araba1.fiyat=225000;

Araba araba2;
strcpy(araba2.marka,"Volkswagen");
strcpy(araba2.model,"T-Roc"),
araba2.yil=2020;
araba2.fiyat=360000;

cout<<"Araba 1:"<<araba1.marka<<","<<araba1.model<<","<<araba1.yil<<","<<araba1.fiyat<<"\n";
cout<<"Araba 2:"<<araba2.marka<<","<<araba2.model<<","<<araba2.yil<<","<<araba2.fiyat<<"\n";
return 0;

}
