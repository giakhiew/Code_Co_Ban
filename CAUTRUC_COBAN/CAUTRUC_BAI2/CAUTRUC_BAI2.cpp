#include <iostream>
#include <cstring>
using namespace std;

typedef struct hocsinh {
    char hoten[31];
    double diemtoan, diemvan, trungbinh;
}hs[10];

void Nhap(hs a[10], int n) {
    for (int i=0;i<n;i++) {
        cin>>a[i]->hoten>>a[i]->diemtoan>>a[i]->diemvan>>a[i]->trungbinh;
        
    }
}

void DanhSachHS(hs a[10], int n) {
	cout<<"Danh sach hoc sinh: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->hoten<<" ";
	}
	cout<<"\n";
}

void HSinhDiemToanNhoHon5(hs a[10], int n) {
	cout<<"Hoc sinh co diem toan nho hon 5: ";
	for (int i=0;i<n;i++) {
		if (a[i]->diemtoan<5) {
			cout<<a[i]->hoten<<" ";
		}
	}
	cout<<"\n";
}

int HSDiemToanVanLonHon8(hs a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		if (a[i]->diemtoan>8 && a[i]->diemvan>8) {
			sum++;
		}
	}
	return sum;
}

//Giam dan diem trung binh
//a<b

void SapXepDiemTrungBinh(hs a[10], int n) {
	char tam[31];
	double tam1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			if (a[j]->trungbinh<a[j+1]->trungbinh) {
				strcpy(tam,a[j]->hoten);
				tam1 = a[j]->trungbinh;
				
				strcpy(a[j]->hoten,a[j+1]->hoten);
				a[j]->trungbinh = a[j+1]->trungbinh;
				
				strcpy(a[j+1]->hoten,tam);
				a[j+1]->trungbinh = tam1;
			}
		}	
	}
	cout<<"Danh sach hoc sinh diem trung binh giam dan: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->hoten<<" ";
		
	}
}

int main() {
	int n;cin>>n;
	hs a[10];
	Nhap(a,n);
	SapXepDiemTrungBinh(a,n);
    return 0;
}
