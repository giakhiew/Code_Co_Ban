#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

void inbamax(int a[10000], int n) {
    int max = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for (int i=0; i < n; i++) {
        if (max<a[i]) {
            max3 = max2;
            max2 = max;
            max = a[i];
        }
        else if (max2<a[i] && a[i]<max) {
            max3=max2;
            max2 = a[i];
        }
        else if (max3 < a[i] && a[i]<max2) {
            max3 = a[i];
        }
    }
    cout << max << " " << max2 << " " << max3;
}

void InSoPhanTuCo2PhanTuNhoHon(int a[100000], int n) {
    int max = INT_MIN;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max2 = max;
            max = a[i];
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] < max2) {
            cout << a[i];
        }
    }
}

int DemSoDep(int a[100], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool checknum1 = false;
        bool checknum9 = false;
        while (a[i] > 0) {
            int so = a[i] % 10;
            
            if (so == 1) {
                checknum1 = true;
            }
            
            else if (so == 9) {
                checknum9 = true;
            }
            
             a[i] /= 10;
            
            if (checknum1==true&&checknum9==true) {
                count++;
                break;
            }
        }
    }
    return count;
}

int InSoChanCuoiCung(int a[100], int n) {
    int check=-1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            check = i;
        }
    }
    return check;
}

int InPhanTuXaNhat(int a[100], int n, int x) {
    int max = INT_MIN;
    int tam;
    for (int i = 0; i < n; i++) {
        int khoangcach = abs(a[i] - x);
        if  (khoangcach > max) {
            max = khoangcach;
            tam = a[i];
        }
    }
    return tam;
}


int main()
{
    int a[100], n, x;
    do {
        cin >> n;
        if (n < 1 || n>100000) {
            cout << "Loi";
        }
    } while (n < 1 || n>100000);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    int count = InPhanTuXaNhat(a, n, x);
    cout << count;
    return 0;
}