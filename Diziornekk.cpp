#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int dizi[5];
	int i;
	float toplam=0,ort;
	for(i=0;i<5;i++){
		cout <<"dizinin "<<i+1<<".elemanini giriniz:";
		cin >>dizi[i];
		toplam+=dizi[i];
	}
	cout <<"Toplam:"<<toplam<<endl;
	cout <<"Ortalama:"<<toplam/5<<endl;
	int enb,enk;
	enb=dizi[0];
	enk=dizi[0];
	for(i=0;i<5;i++){
	if(dizi[i]>=enb){
		enb=dizi[i];
	}
	if(dizi[i]<=enk){
		enk=dizi[i];
	}
	}
	cout <<"En buyuk:"<<enb<<endl;
	cout <<"En kucuk:"<<enk<<endl;
	return 0;
}
