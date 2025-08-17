#include <iostream>
#include <cstring>
using namespace std;

typedef struct vexemphim{
	char ten[21], thoigian[9], ngay[11];
	int gia;
}ve[10];

void Nhap(ve a[10],int n) {
	for (int i=0;i<n;i++) {
		cin>>a[i]->ten>>a[i]->gia>>a[i]->thoigian>>a[i]->ngay;
	}
}


void Xuat(ve a[10],int n) {	
	for (int i=0;i<n;i++) {
		cout<<"Ve xem phim co trong danh sach: "<<a[i]->ten<<" ";
	}
	cout<<endl;
}

int TongGiaTienCacVe(ve a[10],int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->gia;
	}
	return sum;

}

void SapXepTangDanXuatChieu(ve a[10], int n) {
	char A[11],B[11], tam[31],tam1[11];
	char A1[11] = "00/00/0000"; //nam
	char B1[11] = "00/00/0000";
	char A2[9] = "00:00:00";
	char B2[9] = "00:00:00";//thoi gian
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			int k = 0;
			for (int e=0;e<11;e++) {
				A[k] = a[j]->ngay[e];
				B[k] = a[j+1]->ngay[e];
				if (k<=7 && e<=7) {
					A2[k] = a[j]->thoigian[e];
					B2[k] = a[j+1]->thoigian[e];
				}
				if (e>=6) {
					A1[k] = a[j]->ngay[e];
					B1[k] = a[j+1]->ngay[e];
				}
				
				k++;
			}
			if (strcmp(A1,B1)>0) { //so sanh nam
				strcpy(tam,a[j]->ten);
				strcpy(tam1,a[j]->ngay);
				
				strcpy(a[j]->ten,a[j+1]->ten);
				strcpy(a[j]->ngay,a[j+1]->ngay);
				
				strcpy(a[j+1]->ten,tam);
				strcpy(a[j+1]->ngay,tam1);
			}
			else if(strcmp(A1,B1)==0){
				if (strcmp(A,B)>0) { //so sanh ngay
					strcpy(tam,a[j]->ten);
					strcpy(tam1,a[j]->ngay);
				
					strcpy(a[j]->ten,a[j+1]->ten);
					strcpy(a[j]->ngay,a[j+1]->ngay);
				
					strcpy(a[j+1]->ten,tam);
					strcpy(a[j+1]->ngay,tam1);
					}
				else if (strcmp(A2,B2)>0) { //so sanh thoi gian
						strcpy(tam,a[j]->ten);
						strcpy(tam1,a[j]->thoigian);
				
						strcpy(a[j]->ten,a[j+1]->ten);
						strcpy(a[j]->thoigian,a[j+1]->thoigian);
				
						strcpy(a[j+1]->ten,tam);
						strcpy(a[j+1]->thoigian,tam1);
					}
			}
		}
}
cout<<"Ve tang dan theo xuat chieu la: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->ten<<" ";
	}
}
int main() {
	int n;cin>>n;
	ve a[10];
	Nhap(a,n);
	SapXepTangDanXuatChieu(a,n);
	return 0;
}
