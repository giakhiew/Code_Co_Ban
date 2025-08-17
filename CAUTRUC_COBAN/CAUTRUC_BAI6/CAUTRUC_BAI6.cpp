#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

typedef struct Sach{
	char ten[51], tentacgia[31];
	int xuatban;
}sach[10];


void Nhap(sach a[10],int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->tentacgia>>a[i]->xuatban;
	}
}


void Xuat(sach a[10],int n) {	
	for (int i=0;i<n;i++) {
		cout<<"Thong tin cua sach "<<a[i]->ten<<": ";
		cout<<"Ten tac gia: "<<a[i]->tentacgia<<endl;
		cout<<"Nam xuat ban: "<<a[i]->xuatban<<endl;
	}
}

void SachCuNhat(sach a[10], int n) {
	int min=INT_MAX;
	int k=0;
	for (int i=0;i<n;i++) {
		if (min>a[i]->xuatban) {
			min = a[i]->xuatban;
			k=i;
		}
	}
	cout<<"Quyen sach cu nhat trong danh sach: "<<a[k]->ten;
}

void NamNhieuSachSXNhat(sach a[10], int n) {
	
}

int main() {
	int n; cin>>n;
	sach a[10];
	Nhap(a,n);
	Xuat(a,n);
	SachCuNhat(a,n);
	return 0;
}
