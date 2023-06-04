#include <iostream>
using namespace std;

int main() {
	int i=1,a,b;
	//1'den 100'e kadar tekleri yazan program.
	cout<<"1'den 100'e kadar tekleri yazan program."<<endl;
	while(i<100){
		cout<<i<<",";
		i+=2;
	}
	cout<<endl;
	for(a=1;a<100;a+=2){
		cout<<a<<",";
	}
	cout<<endl;
	for(b=1;b<100;b++){
		if(b%2==1)
			cout<<b<<",";
		}
		cout<<endl;
// 50 den 70 kadar çift sayýlarý yazan program
	cout<<"50 den 70 kadar cift sayilari yazan program"<<endl;
  int x,y,z;
  x=50;
while(x<70){
		cout<<x<<",";
		x+=2;
	}
	cout<<endl;
	for(y=50;y<70;y+=2){
		cout<<y<<",";
	}
	cout<<endl;
	for(z=50;z<70;z++){
		if(z%2!=1)
			cout<<z<<",";
		}
		cout<<endl;
//100 den 70 e kadar olan 7 ye bolunebilen sayilari yazan program.
	cout<<"100 den 70 e kadar olan 7 ye bolunebilen sayilari yazan program."<<endl;
int d;
 for (d=100;d>70;d--){
 	if(d%7==0)
 	cout<<d<<",";
 }
	return 0;
}

