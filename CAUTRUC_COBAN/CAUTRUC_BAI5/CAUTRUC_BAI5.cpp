#include <iostream>
#include <cstring>
using namespace std;

typedef struct Phongks {
    char ma[6], ten[31];
    double gia;
    int sogiuong, tinhtrang;
} phong[10];

void Nhap(phong a[10], int n) {
    for (int i = 0 ;i<n;i++) {
        cin>>a[i]->ma>>a[i]->ten>>a[i]->gia>>a[i]->sogiuong>>a[i]->tinhtrang;
    }
}

void Xuat(phong a[10], int n) {
    for (int i=0;i<n;i++) {
        cout<<"Thong tin cua phong "<<a[i]->ten<<": ";
        cout<<"Ma phong: "<<a[i]->ma<<endl;
        cout<<"Gia phong: "<<a[i]->gia<<endl;
        cout<<"So giuong: "<<a[i]->sogiuong<<endl;
        cout<<"Tinh trang: ";
        if (a[i]->tinhtrang==1) {
            cout << "ban";
        }
        else {
            cout<< "ranh";
        }
        cout<<endl;
    }
}

void PhongTrong(phong a[10],int n) {
	cout<<"Cac phong con trong la: ";
	for (int i=0;i<n;i++) {
		if (a[i]->tinhtrang==0) {
			cout<<a[i]->ten;
		}
		else {
			cout<<"0";
			break;
		}
	}
	cout<<endl;
}

int TongSoLuongGiuong(phong a[10], int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum+=a[i]->sogiuong;
	}
	return sum;
}

//a>b
void SapXepGiaThueTangDan(phong a[10],int n) {
	char tam[31];
	double A,B,tam1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			A = a[j]->gia;
			B = a[j+1]->gia;
			if (A>B) {
				strcpy(tam,a[j]->ten);
				tam1 = a[j]->gia;
				
				strcpy(a[j]->ten,a[j+1]->ten);
				a[j]->gia = a[j+1]->gia;
				
				strcpy(a[j+1]->ten,tam);
				a[j+1]->gia = tam1;
			}
		}
	}
	cout<<"Cac phong theo gia tang dan: ";
	for (int i = 0;i<n;i++) {
		cout<<a[i]->ten<<" ";
	}
}

int main() {
    int n;
    cin >> n;
    phong a[10];
    Nhap(a, n);
    SapXepGiaThueTangDan(a,n);
    return 0;
}
