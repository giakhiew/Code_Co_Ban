#include<iostream>
#include <climits>
#include<cmath>
#include <cstring>
using namespace std;

typedef struct Hopsua{
    char ten[21],hsd[11];
    double trongluong;
}hop[10];

void Nhap(hop a[10], int n) {
    for (int i =0;i<n;i++) {
        cin>>a[i]->ten>>a[i]->trongluong>>a[i]->hsd;
    }
}

void Ten(hop a[10], int n) {
    cout<<"Danh sach cac hop sua: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]->ten;
    }
    cout<<endl;
}

int SoLuongHopSXTruoc2003(hop a[10], int n) {
    int b=0;
    char A[5];
    char B[5] = "2003";
    for (int i=0;i<n;i++) {
        A[0] = a[i]->hsd[6];
        A[1] = a[i]->hsd[7];
        A[2]= a[i]->hsd[8];
        A[3] = a[i]->hsd[9];
        if (strcmp(A, B) < 0) {
            b++;
        }
    }
    return b;
}

void HopSuaMoiNhat(hop a[10], int n) {
    char max[5] = "0000";
    char A[5];
    int k;
    for (int i=0;i<n;i++) {
        A[0] = a[i]->hsd[6];
        A[1] = a[i]->hsd[7];
        A[2]= a[i]->hsd[8];
        A[3] = a[i]->hsd[9];
        if (strcmp(max, A) <0) {
            strcpy(max, A);
            k = i;
        }
    }
    cout<<"Hop sua moi nhat: "<<a[k]->ten<<endl;
}

// 12/12/2025 > 11/11/2025
void SapXepHopSuaTangDanHSD(hop a[10], int n) {
	char A[11],B[11], tam[31],tam1[31];
	char A1[11] = "00/00/0000";
	char B1[11] = "00/00/0000";
	for (int i=0;i<n;i++) {
		for (int j=0;j<n-1;j++) {
			int k = 0;
			for (int e=0;e<11;e++) {
				A[k] = a[j]->hsd[e];
				B[k] = a[j+1]->hsd[e];
				if (e>=6) {
					A1[k] = a[j]->hsd[e];
					B1[k] = a[j+1]->hsd[e];
				}
				k++;
			}
			if (strcmp(A1,B1)==0) {
				if (strcmp(A,B)>0) {
				strcpy(tam,a[j]->ten);
				strcpy(tam1,a[j]->hsd);
				
				strcpy(a[j]->ten,a[j+1]->ten);
				strcpy(a[j]->hsd,a[j+1]->hsd);
				
				strcpy(a[j+1]->ten,tam);
				strcpy(a[j+1]->hsd,tam1);
				}
			}
			else if (strcmp(A1,B1)>0) {
				strcpy(tam,a[j]->ten);
				strcpy(tam1,a[j]->hsd);
				
				strcpy(a[j]->ten,a[j+1]->ten);
				strcpy(a[j]->hsd,a[j+1]->hsd);
				
				strcpy(a[j+1]->ten,tam);
				strcpy(a[j+1]->hsd,tam1);
				}
			}	
		}
	cout<<"Hop sua tang dan HSD la: ";
	for (int i=0;i<n;i++) {
		cout<<a[i]->ten<<" ";
	}
}


int main() {
    int n; cin>>n;
    hop a[10];
    Nhap(a, n) ;
    SapXepHopSuaTangDanHSD(a,n);
    return 0;
}
