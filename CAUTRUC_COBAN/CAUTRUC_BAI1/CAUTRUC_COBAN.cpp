#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct NhanVien {
    char hoten[31];
    char ngaysinh[11];
    double luong;
    int gioitinh;
}nvien[10];

void Nhapnvien(nvien a[10], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i]->hoten;
        cin >> a[i]->ngaysinh;
        cin >> a[i]->luong;
        cin >> a[i]->gioitinh;
    }
}

void Xuatnvien(nvien a[10],int n) {
    cout << "Danh sach nhan vien:";
    for (int i = 0; i < n; i++) {
        cout << a[i]->hoten<<"\t";
    }
    cout<<endl;
}
//01/01/1985
void NvienLonHon40(nvien a[10], int n) {
    cout << "Nhan vien tren 40 tuoi:";
    char A[5];
    char B[5]="1985";
    for (int i = 0; i < n; i++) {
        A[0]=a[i]->ngaysinh[6];
        A[1]=a[i]->ngaysinh[7];
        A[2]=a[i]->ngaysinh[8];
        A[3]=a[i]->ngaysinh[9];
        if (strcmp(A,B) < 0){
            cout << a[i]->hoten<<" ";
        }
    }
    cout<<endl;
}

int SoNvienLuongNhieuHon1tr(nvien a[10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]->luong > 1000000) {
            sum++;
        }
    }
    return sum;
}
//a>b false = a>b
void SoSanhNamSinhNvien(nvien a[10], int n) {
    char A[4], B[4];
    //Gan
    for (int v=0;v<n;v++) {
    	for (int i=0;i<n-1;i++) {
        int k = 0;
        for (int j=6;j<=9;j++) {
            A[k] = a[i]->ngaysinh[j];
            B[k]= a[i+1]->ngaysinh[j];
            k++;           
        }
        
        	if (strcmp(A,B)<0) {
				swap(a[i], a[i + 1]);
		    }
	}
}
	for (int i=0;i<n;i++) {
		cout<<a[i]->hoten<<" ";
	}
}


int main() {
    int n;
    cin >> n;
    nvien a[10];
    
    Nhapnvien(a, n);
    SoSanhNamSinhNvien(a, n);
    return 0;
}
