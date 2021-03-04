#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,s,h;
	cout << "nhap 3 canh tam giac : ";
	cin >> a >> b >> c;
	s=(a+b+c)/2;
	h= sqrt(s*(s-a)*(s-b)*(s-c));
	cout << "dien tich cua tam giac la :" << h;
	return 0;


}
