#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n ,i,j,c=0;
	cout <<"dizinin eleman sayisini giriniz:";
	cin >>n;
	int dizi[n],dizi1[100];
	for(i=0;i<n;i++){
		cout<<"dizinin "<<i+1<<".elemanini giriniz:";
		cin >>dizi[i];
		if(dizi[i]%2==0){
			dizi1[c]=dizi[i];	
			c++;
		   }
		}
		
		int enb=dizi1[0];
		int enk=dizi1[0];
		for(j=0;j<c;j++){
			if(dizi1[j]>=enb){
				enb=dizi1[j];
			}
			if(dizi1[j]<=enk){
				enk=dizi1[j];
			}
		}
		cout <<"en kucuk:"<<enk<<endl;
		cout<<"en buyuk:"<< enb<<endl;
		cout <<"ortalamalari:"<<(enb+enk)/2;
	return 0;
}
