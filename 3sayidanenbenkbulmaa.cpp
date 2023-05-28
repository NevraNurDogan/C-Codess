
#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout << "1. sayiyi giriniz:" << endl;
	    cin>> a;
	cout << "2. sayiyi giriniz:" << endl;
    	cin>> b;
	cout << "3. sayiyi giriniz:" << endl;
        cin>> c;
        if(a>b && a>c){
        	cout << "en buyuk sayi 1. sayidir:" <<a<< endl;
        	if(b<c){
        		cout << "en kucuk sayi 2. sayidir:" <<b<< endl;
        	}
        	else{
        		cout << "en kucuk sayi 3. sayidir:" <<c<< endl;
        	}
        }
        if(b>a && b>c){
                	cout << "en buyuk sayi 2. sayidir:" <<b<< endl;
                	if(a<c){
                		cout << "en kucuk sayi 1. sayidir:" <<a<< endl;
                	}
                	else{
                		cout << "en kucuk sayi 3. sayidir:" <<c<< endl;
                	}


                }
        if(c>b && c>a){
                	cout << "en buyuk sayi 3. sayidir:" <<c<< endl;
                	if(b<a){
                		cout << "en kucuk sayi 2. sayidir:" <<b<< endl;
                	}
                	else{
                		cout << "en kucuk sayi 1. sayidir:" <<a<< endl;
                	}
                }
//ikinci yöntem
        int enbuyuk=a;
        int enkucuk=a;
        if (b>enbuyuk)
        	enbuyuk=b;
        if (c>enbuyuk)
            enbuyuk=c;
        if (b<enkucuk)
          	enkucuk=b;
        if (c<enkucuk)
          	enkucuk=c;
        cout << "en buyuk sayi:" <<enbuyuk<< endl;
        cout << "en kucuk sayi:" <<enkucuk<< endl;

	return 0;
}
