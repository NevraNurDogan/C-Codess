#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout << "a degerini giriniz:" << endl;
	cin >> a;
	cout << "b degerini giriniz:" << endl;
	cin >> b;
	cout << "c degerini giriniz:" << endl;
	cin >> c;
	if(c*c==a*a+b*b ||a*a==c*c+b*b || b*b==a*a+c*c ){
		cout <<"bu bir dik ucgendir."<<endl;
	}
	else {
		cout <<"bu bir dik ucgen degildir."<<endl;
	}
	return 0;
}
