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

void tim_cap_so(int n, int x, vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    bool check = false;
    int size = arr.size() - 1, i = 0, j = size;
    while (i < j) {
            int tam = 0;
            tam = arr[i] + arr[j];
            if (tam == x) {
                check = true;
                break;
            } 
            if (tam > x) {
                j--;
            }
            if (tam < x) {
                i++;
            }
        }

    if (check == true) cout << i + 1<< " " << j + 1;
    else cout << "No solution";
}

void day_ko_vuot_qua_x(int n, long long x, vector <long long> arr) {

    int i = 0, j = 0, size = 0, sum = arr[i], maxtam = 0; 

    while (sum <= x) {
        j++;
        sum += arr[j];
        size++;
        if (sum > x) {
            i++;
            j = i;
            maxtam = max(size, maxtam);
            size = 0;
            sum = arr[i];
        }
    }
    
    cout << maxtam;
}

void tich_x_y(int p) {
    int i = 1, j = p, sum = i * j;
    while (sum < p) {
        j--;
        sum /= j;
        if (sum == p) {
            break;
        }
        if (sum > p) {
            i++;
            j = i + 1;
            sum = i * j;
        }
    }
    cout << i << " " << j;
}

int day_2_sum(int n, vector<int> arr) {
    int dodai,sumtam = 0;
    vector<int> sum;
    for (int i = 0; i < n; i++) { //tinh mang sum
        sumtam += arr[i];
        sum.push_back(sumtam);
    }

    for (dodai = n; dodai >= 2; dodai--) {
        for (int tam = n - 1; tam >= dodai - 1; tam--) {
            int j = tam, i = j - dodai + 1, sumlr, k = i;

            if (i == 0) sumlr = sum[j];
            else sumlr = sum[j] - sum[i - 1];

            if (sumlr % 2 != 0) continue;

            int s1 = arr[i], s2 = sum[j] - sum[i];
            if (s1 == s2) return dodai;

            while (k < j && s1 > s2) {
                k++;
                s1 += arr[k];
                s2 -= arr[k];
                if (s1 == s2) return dodai;
            }
        }

    }
    return 0;
}

int main()
{   //2,6,9,4,6,5,5,8,9
    vector<int> v1 = { 2,10,2,2,5,1 };
    vector<int> v2 = { 1,3,3,4,5,5,5,8 };
    vector<int> v3 = {7,9,6,2,1,5 };
    int n = v1.size();
    int m = v2.size();
    int check = day_2_sum(v1.size(), v1);
    cout << check;
    return 0;
}
