#include<iostream>
#include<cstring>
using namespace std;
class Araba{
public:
    char marka[30];
    char model[30];
    int hiz(int max_hiz);
};
int Araba::hiz(int max_hiz){
return max_hiz;
}

int main(){
Araba araba1;
strcpy(araba1.marka,"Opel");
strcpy(araba1.model,"Astra");
cout<<"Araba: "<<araba1.marka<<" "<<araba1.model<<"\n";
cout<<"Hiz: "<<araba1.hiz(190);
return 0;

}
