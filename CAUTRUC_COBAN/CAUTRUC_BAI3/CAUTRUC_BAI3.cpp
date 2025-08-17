#include<iostream>
#include <climits>
#include<cmath>
#include<cstring>
using namespace std;

typedef struct Oxy {
    char tendiem[2];
    double x, y;
} diem[10];

void NhapDiem(diem a[10],int n){
    for (int i=0;i<n;i++) {
        cin>>a[i]->tendiem>>a[i]->x>>a[i]->y;
    }
    cout<<endl;
}

void DanhSachTen(diem a[10], int n) {
    cout<<"Danh sach cac diem co trong danh sach: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]->tendiem<<" ";
    }
    cout<<endl;
}

void DiemThuocPhanTuThuI(diem a[10], int n) {
    cout<<"Cac diem thuoc phan tu thu I: ";
    for (int i=0;i<n;i++) {
        if (a[i]->x>=0 && a[i]->y>=0) {
            cout<<a[i]->tendiem<<" ";
        }
    }
    cout<<endl;
}


void DiemCoTungDoLonNhat(diem a[10], int n) {
    int max = INT_MIN;
    int k;
    for (int i=0;i<n;i++) {
        if (max<a[i]->y) {
            max=a[i]->y;
            k = i;
        }
    }
    cout<<"Diem co tung do lon nhat la: "<<a[k]->tendiem<<endl;
}

void SapXepDiemGanODan(diem a[10], int n) {
	double A,B,tamx,tamy;
	char tam[2];
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			A = sqrt(pow(a[j]->x,2) + pow(a[j]->y,2));
			B = sqrt(pow(a[j+1]->x,2) + pow(a[j+1]->y,2)); 
			if (A<B) {
				strcpy(tam,a[j]->tendiem);
				tamx = a[j]->x;
				tamy = a[j]->y;
				
				strcpy(a[j]->tendiem,a[j+1]->tendiem);
				a[j]->x = a[j+1] ->x;
				a[j]->y = a[j+1] ->y;
				
				strcpy(a[j+1]->tendiem,tam);
				a[j+1]->x = tamx;
				a[j+1]->y = tamy;
			}
		}
	}
	cout<<"Danh sach diem giam dan theo khoang cach tu no den O: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->tendiem<<" ";
	}
}

int main() {
    int n; cin>>n;
    diem a[10];
    NhapDiem(a, n) ;
    SapXepDiemGanODan(a,n);
    return 0;
}
