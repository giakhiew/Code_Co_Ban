#include <string>
#include <iostream>
#include <fstream>
using namespace std;
//crtl k c = dong note
//crtl k u = mo note
void GhiFile() {
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        outFile << "Xin chao, day la file text!\n";
        outFile << "Dong thu hai.\n";
        outFile.close();
    }
    else {
        cout << "ko the mo file";
    }
}

void DocFile() {
    ifstream inFile("input.txt");
    if (inFile.is_open())  {
        string line;
        int a, b, c;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
}

int DemSoDongTrongFile() {
    int sum = 0;
    ifstream inFile("input.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            sum++;
        }
        inFile.close();
    }
    return sum;
}

void BoDongTrong() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (inFile >> line) {
            outFile << line << endl;
        }
        inFile.close();
        outFile.close();
    }
}

void InThemSoThuTuVaoDauDong() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    int k = 1;
    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (getline(inFile,line)) {
            if (line.size() == 0) {
                continue;
            }
            outFile << k << ". " << line << endl;
            k++;
        }
        inFile.close();
        outFile.close();
    }
}

void XoaKhoangTrangTrongDong() { 
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if (inFile.is_open() && outFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            //Xoa dau 
            size_t checkdau = line.find_first_not_of(" ");
            line.erase(0, checkdau);
            //Xoa cuoi
            size_t checkcuoi = line.find_last_not_of(" ");
            int k = line.size();
            line.erase(checkcuoi+1, k - checkcuoi);
            //Xoa giua
            k = line.size();
            int tam = 0;
            while (tam < k) {
             
                if (line[tam] != ' ') {
                    tam++;
                    continue;
                }
               
                size_t checkgiua = tam + 1;
             
                while (line[checkgiua] == ' ') {
                    line.erase(checkgiua, 1);
                    tam = 0;
                   
                }
                k = line.size();
                
                tam++;
                
            }
            cout << line;
            //outFile << line << endl;
        }
            inFile.close();
            outFile.close();
        }
    }

void TimVaThayTheTu() {
	ifstream inFile("input.txt");
	ofstream outFile("output.txt");
	string TuCanThayThe,TuThayThe,tam;
	getline(cin,TuCanThayThe);
	getline(cin,TuThayThe);
	size_t a = TuCanThayThe.size();
	size_t b = TuThayThe.size();
	if (inFile.is_open() && outFile.is_open()) {
        string line;
		while (getline(inFile,line)) {
			size_t check = line.find_first_of("TuCanThayThe");
				if ( check != string::npos ) {
					int i = check;
					while (i<=i+a) {
						tam = line[i];
						i++;
					}
					tam.swap(TuThayThe);
				}
			outFile << line<< endl;
			cout<<line;
		}
		inFile.close();
		outFile.close();
	}
}

int main()
{
    TimVaThayTheTu();
}
