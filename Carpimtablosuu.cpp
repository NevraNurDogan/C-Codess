#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int i,j,n;
	cout << "boyut giriniz:"<<endl;
	cin >>n;
	for (i=1;i<=n;i++){	
		for(j=1;j<=n;j++){
		cout <<i*j<<",";
		}
		cout<<endl;
	}
	return 0;
}
