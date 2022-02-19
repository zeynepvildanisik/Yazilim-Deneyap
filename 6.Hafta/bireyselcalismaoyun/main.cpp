	#include<iostream>
	using namespace std;
	int main()
	{
	    int i, j, sat, sut, matris1[5][5], matris2[5][5];
	    sat = 5;
	    sut = 5;
        cout << "1.Matrisin elemanlarini sirayla giriniz: " << endl;
	    for(i =0; i < sat; i++) {
	        for(j=0; j < sut; j++) {
	            cin >> matris1[i][j];
	        }
	    }
         cout << "2.Matrisin elemanlarini sirayla giriniz: " << endl;
	       for(i =0; i < sat; i++) {
	        for(j=0; j < sut; j++) {
	            cin >> matris1[i][j];
	        }
	    }

	    return 0;
	    }
