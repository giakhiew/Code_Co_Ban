#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int giai_thua(int n) {
    if (n == 1) return 1;
    return giai_thua(n-1) * n;
}

int luy_thua(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    int tam1 = luy_thua(a, b / 2);
    if (b % 2 == 0) return tam1 * tam1;
    else return tam1 * tam1 * a;
}

int Fibonacci(int n) {
    int F0 = 0, F1 = 1;
    if (n == 2 || n == 1) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int GCD(int a, int b) {
    int du = a % b;
    if (du == 0) return a/b;
    return GCD(b, a % b);
}

int LCM(int a, int b) {
    int check = GCD(abs(a),abs(b)), tu = abs(a*b);
    return tu / check;
}

int tong_chu_so(int n) {
    
    return tong_chu_so(n);
}

int main()
{
    int check = tong_chu_so(12345);
    cout << check;
    return 0;
}