#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout << "a sayisini giriniz:" << endl;
    	cin >> a;
	cout << "b sayisini giriniz:" << endl;
	    cin >> b;
	cout << "c sayisini giriniz:" << endl;
    	cin >> c;
    	if (c<a && a<b || b<a && a<c ){
    		cout << "a sayisi b ve c sayilarinin arasindadir." << endl;
    	}
    	else{
    		cout << "a sayisi b ve c sayilarinin arasinda degildir." << endl;
    	}

    	if (a==b && a<c){
    		cout << "a sayisi b sayisina esit ve c sayisinden kucuktur." << endl;
    	}
    	if (a>b){
    		cout<<"a b 'den buyuktur."<<endl;
    	}
    	else if (a==b){
    		cout<<"a b 'ye esittir."<<endl;
    	}
    	else {
    		cout<<"a b 'den kucuktur."<<endl;
    	}
    	if (a>c){
    	   	cout<<"a c 'den buyuktur."<<endl;
    	    }
    	else if (a==c){
     		cout<<"a c 'ye esittir."<<endl;
    	    	}
    	else {
    		cout<<"a c 'den kucuktur."<<endl;
    	    	}
    	if (a==b && b==c){
    		cout<<"a b ve c birbirine esittir."<<endl;
    	}
    	else{
    		cout<<"a b ve c birbirine esit degildir."<<endl;
    	}
	return 0;
}
