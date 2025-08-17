#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int HoaDonToiThieu(int n){
	int x,a,b,c,d;
	if (n>=100) {
		a = n/100;
		n-= a*100;
	}
	if (n>=20) {
		b = n/20;
		n-= b*20;
	}
	if (n>=10) {
		c = n/10;
		n-= c*10;
	}
	if (n>=5) {
		d = n/5;
		n-= d*5;
	}
	if (n<=5) {
		x = a+b+c+d+n;
	}
	return x;
}


int main() {
	int n;
	cin>>n;
	int sum = HoaDonToiThieu(n);
	cout<<sum;
	return 0;
}
