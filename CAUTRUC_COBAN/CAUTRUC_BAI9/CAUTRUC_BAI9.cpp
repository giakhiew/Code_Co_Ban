#include <iostream>
#include <climits>
#include <cstring>
using namespace std;

typedef struct Mathang{
	char ten[21];
	int ton;
}hang;


void Nhap(hang a[10],int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->ton;
	}
}


void Xuat(hang a[10],int n) {	
	for (int i=0;i<n;i++) {
		cout<<"Danh sach cac mat hang: "<<a[i]->ten<<": ";
	}
	cout<<endl;
}

void MatHangTonMax(hang a[10],int n) {
	int max=INT_MIN;
	int k=0;
	for (int i=0;i<n;i++) {
		if (max<a[i]->ton) {
			max = a[i]->ton;
			k = i;
		}
	} 
	cout<<"Mat hang ton nhieu nhat la: "<<a[k]->ten<<endl;
}

int SoMatHangTonLonHon1000(hang a[10],int n) {
	int sum;
	for (int i=0;i<n;i++) {
		if (a[i]->ton>1000) {
			sum++;
		}
	}
	return sum;
}

int main() {
	return 0;
}
