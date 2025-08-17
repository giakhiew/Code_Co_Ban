#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

typedef struct Tinh{
	char ten[31];
	double DT;
	int danso;
}tinh[10];

void Nhap(tinh a[10], int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->DT>>a[i]->danso;
	}
}

void Xuat(tinh a[10],int n) {
	for (int i=0;i<n;i++) {
		cout<<"Thong tin cua tinh "<<a[i]->ten<<": ";
		cout<<"Dien tich: "<<a[i]->DT<<endl;
		cout<<"Dan so "<<a[i]->danso<<endl;
	}
}

int TongDT(tinh a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->DT;
	}
	return sum;
}

void TinhDTMax(tinh a[10],int n) {
	double max = INT_MIN;
	int k=0;
	for (int i=0;i<n;i++) {
		if (max<a[i]->DT) {
			max = a[i]->DT;
			k = i;
		}
	}
	cout<<"Tinh co DT lon nhat la: "<<a[k]->ten;
}

void TinhDanSoMax(tinh a[10],int n) {
	double max = INT_MIN;
	int k=0;
	for (int i=0;i<n;i++) {
		if (max<a[i]->danso) {
			max = a[i]->danso;
			k = i;
		}
	}
	cout<<"Tinh co DT lon nhat la: "<<a[k]->ten;
}

void SapXepDientichTangDan(tinh a[10],int n) {
	char tam[31];
	double A,B,tam1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			A = a[j]->DT;
			B = a[j+1]->DT;
			if (A>B) {
				strcpy(tam,a[j]->ten);
				tam1 = a[j]->DT;
				
				strcpy(a[j]->ten,a[j+1]->ten);
				a[j]->DT = a[j+1]->DT;
				
				strcpy(a[j+1]->ten,tam);
				a[j+1]->DT = tam1;
			}
		}
	}
	cout<<"Cac tinh dien tich tang dan: ";
	for (int i = 0;i<n;i++) {
		cout<<a[i]->ten<<" ";
	}
}


int main() {
	int n;cin>>n;
	tinh a[10];
	Nhap(a,n);
	SapXepDientichTangDan(a,n);
	return 0;
}
