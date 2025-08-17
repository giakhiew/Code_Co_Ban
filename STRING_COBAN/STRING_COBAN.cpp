#include <iostream>
#include <cctype>
#include <string>
#include <climits>
using namespace std;

#include <iostream>

/*void VietHoa(string a) {
    a.front() = toupper(a.front());
    cout << a;
}*/

int TimSoDaToiThieu(string a, int n) {
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        if (a[i] == a[i + 1]) {
            sum++;
        }
    }
    return sum;
}

void XacDinhNamNu(string a) {
    size_t str = a.size();
    string b;
    for (int i = 0; i < str; i++) {
        size_t check = b.find(a[i]);
        if (check == string::npos) {
            b += a[i];
        }
    }
    size_t str1 = b.size();
    if (str1 % 2 == 0) {
        cout << "CHAT WITH HER";
    }
    else {
        cout << "IGNORE HIM";
    }
}

void VasyaHello(string a) {
    size_t Size = a.size();
    bool check = true;
    for (int i=0;i<Size;i++) {
    	size_t findH = a.find_first_of('h');
    	if (findH == string::npos) {
    		check = false;
    		break;
		}
		else {
			size_t findE = a.find_first_of('e');
			if (findE == string::npos) {
				check = false;
				break;
			}
			else {
				size_t findL = a.find_first_of('l');
				if (findL==string::npos || a[findL+1] != 'l') {
					check = false;
					break;
				}
				else {
					size_t findO = a.find_first_of('o');
					if (findO == string::npos) {
						check = false;
						break;
					}
				}
			}
		}
	}
	if (check == true) cout<<"YES";
	else cout<<"NO";
}

void DichNgonNgu(string a, string b){
	size_t Size = a.size();
	int j = Size - 1;
	bool check = true;
	for (int i=0;i<Size;i++) {
		cout<<a[i]<<b[j]<<" ";
		if (a[i] == b[j]) {
			check = true;
		}
		else{
			check = false;
		}
		j--;
	}
	if (check == true) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}
 
void SoSanhHoaThuong(string a) {
	size_t Size = a.size();
	int checkHoa = 0;
	int checkThuong = 0;
	for (int i=0;i<Size;i++) {
		if (a[i] >= 'A' && a[i]<='Z') {
			checkHoa++;
		}
		else if (a[i] >= 'a' && a[i]<= 'z') {
			checkThuong++;
		}
	}
	for (int i=0;i<Size;i++) {
		if (checkHoa > checkThuong) {
			a[i] = toupper(a[i]);
		}
		else {
			a[i] = tolower(a[i]);
		}
		cout<<a[i];
	}	
}

void AntonDanik(string a, int n) {
	int Anton = 0;
	int Danik = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == 'A') {
			Anton++;
		}
		else {
			Danik++;
		}
	}
	if (Anton<Danik) {
		cout<<"Danik";
	}
	else if (Anton>Danik) {
		cout<<"Anton";
	}
	else {
		cout<<"Friendship";
	}
} 

void Hulk(int n) {
	string str1 = "I hate it";
	string str2 = "I love it";
	int A = 1;
	for (int i = 1;i<=n;i++) {
		if (A%2!=0) {
			cout<<str1<<" ";
		}
		else {
			cout<<str2<<" ";
		}
		A++;
	}
}

void Shapur(string a,string b) {
	size_t Size = a.size();
	for (int i=0;i<Size;i++) {
		if (a[i] == b[i]) {
			cout<<"0";
		}
		else {
			cout<<"1";
		}
	}
}

int AntonChuCai(string a) {
	size_t Size = a.size();
	string b;
	int sum=0;
	for (int i=0;i<Size;i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			size_t check = b.find_first_of(a[i]);
			if (check == string::npos) {
				b += a[i];
				sum++;
			}
		}
	}
	return sum;
}

void Pangram(string a,int n) {
	if (n<26) {
		cout<<"NO";
	}
	else {
		for (int i=0;i<n;i++) {
			a[i] = tolower(a[i]);
		}
	string b;
		for (int i=0;i<n;i++) {
			size_t check = b.find_first_of(a[i]);
				if (check==string::npos) {
					b += a[i];
				}
		}
	size_t check1 = b.size();
		if (check1==26) {
			cout<<"YES";
		}	
		else {
			cout<<"NO";
		}
	}
}

void Noel(string a,string b,string c) {
	int suma = 0;
	int sumb = 0;
	int sumc = 0;
	size_t Sizea = a.size();
	size_t Sizeb = b.size();
	size_t Sizec = c.size();
	if (Sizec > Sizea + Sizeb) {
		cout<<"NO";
	}
	else {
		for (int i=0;i<Sizea;i++) {
			suma += a[i];
		}
		for (int i=0;i<Sizeb;i++) {
			sumb+=b[i];
		} 
		for (int i=0;i<Sizec;i++) {
			sumc +=c[i];
		}
	}
	
	if (sumc == suma + sumb) {
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
}

void So1LienKe(string a,int n) {
    int sum = 0;
    for (int j = 0;j<n;j++) {
    	sum=0;
    	cin>>a;
    	size_t checkdau = a.find_first_of("1");
    	size_t checkcuoi = a.find_last_of("1");
    	for (int i = checkdau+1;i<checkcuoi;i++) {
    		if (a[checkdau] == '1' && a[i]=='0' &&a[checkcuoi]=='1') {
    			sum++;
			}
			else if (checkdau==string::npos||checkcuoi==string::npos) {
				sum = 0; break;
			}
		}
		cout<<sum;
	}
	
}

void CheckSoDienThoai(string a,int n) {
	size_t find8 = a.find_first_of('8');
	if (find8 == string::npos) cout<<"NO";
	else {
		if (n - 1 - find8 == 11) cout<<"YES";
		else cout<<"NO";
	}
}

void TongSoChan(string a,int n) {
	int sum=0;
	for ( int i=0;i<n;i++) {
		if (a[i]%2==0) {
			sum++;
		}
	}
	cout<<sum;
}

void CheckChuoiGiongNhau(string a,string b,string c) {
	size_t Size = a.size();
	int check = true;
	for (int i=0;i<Size;i++) {
		if (c[i]== b[i] || c[i] == a[i]) check = true;
		else check = false; break;
	}
	if (check == true) cout<<"YES";
	else cout<<"NO";
}

void CheckaBangb(string a,int n) {
	int counta=0;
	int countb=0;
	int sum=0;
	for (int i=0;i<n;i++) {
		if (a[i]=='a') counta++;
		else countb++;
	}
	
	for (int i=0;i<n;i++) {
		if (counta>countb) {
			if (a[i] == 'a') {
				a[i] = 'b'; 
				countb++;
				counta--;
				sum++;
				if (counta==countb) break;
			}
		} 
		
		else if (countb>counta) {
			if (a[i]=='b') {
				a[i] = 'a';
				counta++;
				countb--;
				sum++;
				if (counta==countb) break;
			}
		}
		
		else if (counta == 0) {
			if (a[i]=='b') {
				a[i] = 'a';
				counta++;
				countb--;
				sum++;
				if (counta==countb) break;
			}
		}
		
		else if (countb==0) {
			if (a[i]=='a') {
				a[i] = 'b';
				countb++;
				counta--;
				sum++;
				if (counta==countb) break;
			}
		}
	}
	
	if (counta>countb) cout<<sum<<endl;
	else if (countb>counta) cout<<sum<<endl;
	else if (counta==countb) cout<<sum<<endl;
	else if (counta==0 || countb==0) cout<<sum<<endl;
	
	for (int i=0;i<n;i++) cout<<a[i];	
}
	
void AnhHungDoiTen(string a,string b) {
	size_t Size = a.size();
	size_t Sizeb = b.size();
	bool checka,checkb,checktotal;
	if (Size != Sizeb) checktotal=false;
	else {
		for (int i=0;i<Size;i++) {
			if (a[i] == 'a'|| a[i] == 'e'|| a[i] == 'i' ||a[i] == 'o' ||a[i] =='u' ) {
				checka = true;
			}
			if (b[i] == 'a'|| b[i] == 'e'|| b[i] == 'i' ||b[i] == 'o' ||b[i] =='u' ) {
				checkb = true;
			}
			if (checka==checkb) checktotal=true;
			else checktotal = false;
		}
	}
	if (checktotal==false) cout<<"NO";
	else cout<<"YES";
}

void AliceThicha(string a) {
	size_t Size = a.size();
	size_t check = a.size();
	int counta;
	for (int i=0;i<Size;i++) {
		if (a[i] == 'a') {
			counta++;
			check--;
		}
	}
	if (check>=counta) {
		while (check>=counta) {
		check--;
	}
	cout<<check+counta;
	}
	else cout<<counta;
}

//bai 20

void ChuCaiLatinh(string a,int n,int k) {
	string b;
	int min=INT_MAX;
	int sum=0;
	int sum1=0;
	for (int i=0;i<n;i++) {
		size_t check = b.find_first_of(a[i]);
		if (check == string::npos) {
			b+=a[i];
		}
	}
	size_t Size =b.size();
	if (k > n/2) min = 0;
	else {
		for (int i=0;i<Size;i++) {
			for (int j=0;j<n;j++) {
				if (b[i] == a[j]) {
					sum++;
				}
			}
			if (min>sum) {
				min = sum;
			}
			sum = 0;
		}
	}
	cout<<min*k;
}

void PolycarpBanPhim(string a){
	size_t Size = a.size();
	string b;
	char tam;
	if (Size == 1) cout<<a;
	else {
		for (int i=0;i<Size-1;i++) {
			if (a[i] == a[i+1]) i++;
			else {
				b+=a[i];
				if (Size - i == 2) {
					b+=a[i+1];
				}
			}
		}
	}
	for (int i=0;i<Size;i++) {
		for (int j=0;j<Size-1;j++) {
			if (b[j] > b[j+1]) {
				tam = b[j];
				b[j] = b[j+1];
				b[j+1] = tam;
			}
		}
	}
	cout<<b;
}

void ChuoiLienKeDoiXung(string a) {
	size_t Size = a.size();
	bool check = true;
	int HalfSize = Size/2;
	int j;
	if (Size>2) j = Size -1;
	else j = 1;
	
	for (int i = 0;i<HalfSize;i++) {
		if (a[i] == a[j]) check = true;
		else {
			if (a[i]+1 == a[j]-1 || a[i]-1 == a[j]+1) check = true;
			else {
				check = false;  
				break;
			}
		}
		
		j--;
	}
	
	if (check==true) cout<<"YES";
	else cout<<"NO";
}

int main() 
{
    string a;//b;//c;
    int n; cin >> n;
    cin>>a;//b;//>>c;
    CheckSoDienThoai(a,n);
    
}
