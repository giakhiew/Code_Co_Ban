#include <iostream>
#include <cmath>
#include <climits>
#include <cstring>
using namespace std;

void Fibonacci(int n) {
    int F0 = 0;
    int F1 = 1;
    int sum = 0;
    cout << F0 << " " << F1 << " ";
    for (int i=2; i < n; i++) {
        sum = F1 + F0;
        F0 = F1;
        F1 = sum;
        cout << sum << " ";
        }
}

bool checkFibonacci(int n) {
    int F0 = 0;
    int F1 = 1;
    int sum = 0;
    int i = 0;
    while (i<=n) {
        sum = F1 + F0;
        F0 = F1;
        F1 = sum;
        if (n == sum) {
            return true;
        }
        i++;
    }
}

bool checkSochinhphuong(int n) {
    double sum = sqrt(n);
    double a = round(sum);
    if (round(sum) * round(sum) == n) {
    return true;
    }
}

int tinhtonguoc(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int demuoc(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
        return count;
}

bool sohoanhao(long long n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return true;
    }
}

bool checkminus(int a[100],int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            return false;
        }
    }
    return true;
}

bool checkdoixung(int a[100], int n) {
    for (int i = 0; i <= (n / 2); i++) {
        if (a[i] != a[n - (1 + i)]) {
            return false;
            }
        }
    return true;
}

void SapXepChieuGiamDan(int a[100], int n) {
	int tam;
	for (int i=0;i<n;i++) {
		for (int j=1;j<n;j++) {
			if (a[j]>a[j-1]) {
			tam = a[j];
			a[j] = a[j-1];
			a[j-1] = tam;
		}
		}
	}
	for (int i=0;i<n;i++) {
		cout << a[i];
	}
}

void PhanTuXuatHienNhieuNhat(char a[100], int n) {
	char tam;
	char tam1;
	int sum = 0;
	int sum1 = 0;
	for (int i=0;i<n;i++) {
		int k = 0;
		for (int j = 0;j<n;j++) {
			if (tam == "" && tam != a[j]) {
				tam = a[j];
			}
		 	else if (tam != a && tam1 != tam) {
		 		tam = a[j];
			}
			else if (tam == a[j]) {
				sum++;
			}	
			else if (tam1 == a[j]) {
				sum1++;
			}
		}
	}
}
int main() {
	int n;cin>>n;
	char a[100] = "";
	cout<<a;
    return 0;
}
