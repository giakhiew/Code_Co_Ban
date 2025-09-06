#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void tron_mang(int n, int m, vector<int> v1, vector<int> v2) {
    vector<int> v3(n + m);
    int i = 0; int j = 0;
    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            v3[i + j] = v1[i]; i++;
        }
        else {
            v3[i + j] = v2[j]; j++;
        }
    }

    while (i < n) {
        v3[i + j] = v1[i]; i++;
    }
    while (j < m) {
        v3[i + j] = v2[j]; j++;
    }
    for (auto item : v3) cout << item << " ";
}

void phan_tu_nho_hon(int n, int m, vector<int> v1, vector<int> v2) {
    int i = 0, j = 0, sum = 0;
    while (j < m && i < n) {
        if (v1[i] < v2[j]) {
            i++;
            sum++;
        }
        else {
            j++;
            cout << sum;
        }       
    }
    while (i < n) {
        cout << sum; i++;
    }
    while (j < m) {
        cout << sum; j++;
    }
}

void phan_tu_bang_nhau(int n, int m, vector<int> v1, vector<int> v2) {
    int i = 0, j = 0, sum = 0;
    while (i < n && j < m) {

        if (v1[i] < v2[j]) {
            i++;
            continue;
        }

        if (v1[i] > v2[j]) {
            j++;
            continue;
        }

        if (v1[i] == v2[j]) {
            int tam = j;
            while (tam < m && v1[i] == v2[tam]) {
                sum++;
                tam++;
            }
            i++;
        }
    }

    cout << sum;
}

void doan_con_co_tong_nho(int n, int s, vector<int> arr) {
    int i = 0, j = 0, count = 0, tam = 0, maxtam = 0;
    while (i < n && j < n) {
        tam += arr[j];
        if (tam <= s) {
            count++;
            j++;
        }
        else {
            maxtam = max(maxtam, count);
            count = 0;
            tam = 0;
            i++;
        }
    }
    cout << maxtam;
}

void doan_con_co_tong_lon(int n, int s, vector<int> arr) {

}

void black_jack(int n, int m, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int tongday = 0, maxtam = 0;
    
    for (int k = 0; k < n; k++) {
        int i = 0, j = n - 1;
        if (maxtam == m) break;

        while (i < j) {
            if (k == i) {
                i++; continue;
            }
            if (k == j) {
                j--; continue;
            }
            tongday = arr[k] + arr[i] + arr[j];

            if (tongday <= m) {
                i++;
                maxtam = max(maxtam, tongday);
            }
            else j--;
        }
    }
    cout << maxtam;
}

int main()
{   //2,6,9,4,6,5,5,8,9
    vector<int> v1 = { 1,1,3,3,3,5,5 };
    vector<int> v2 = { 1,3,3,4,5,5,5,8 };
    vector<int> v3 = {7,9,6,2,1,5 };
    int n = v1.size();
    int m = v2.size();
    black_jack(v3.size(), 20, v3);

     
    return 0;
}
