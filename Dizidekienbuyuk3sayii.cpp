#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n,i,j;
	int gecici;
	cout <<"dizinin eleman sayisini giriniz:";
	cin >>n;
	int dizi[n];
	for(i=0;i<n;i++){
		cout<<"dizinin "<<i+1<<".elemanini giriniz:";
		cin >>dizi[i];
	}
	// 1 5 7 8 4  6 4 7 
	// 5 1 7 8 4  6 4 7 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(dizi[i]>=dizi[j]){
			gecici=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=gecici;
	    	}
		}				
	}
	for(i=0;i<n;i++){
		cout <<dizi[i]<<endl;
	}
	cout<<"en buyuk 3 sayinin toplami:"<<dizi[0]+dizi[1]+dizi[2];
	return 0;
}
