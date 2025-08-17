#include <iostream>
#include <cstring>
using namespace std;

typedef struct ttDIEM {
    int x;
    int y;
}diem;

//nhap , xuat
void Nhap(ttDIEM &a) {   
    cin >> a.x;
    cin >> a.y;
}

void Xuat(ttDIEM a) {
    cout << a.x;
    cout << a.y;
}

int main() {
    return 0;
}

