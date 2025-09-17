#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T; //nhap so luong phan tu
    while (T--) {
        string s;
        cin >> s; //nhap cuoi ky tu

        map<string, int> dem; //luu so lan xuat hien bo ba
        int n = s.length(); //lay tung bo ba
        for (int i = 0; i + 2 < n; i++) {
            string bo_ba = s.substr(i, 3); //lay bo 3 ky tu tai vi tri i
            dem[bo_ba]++; //so lan xuat hien bo ba
        }
        int kq = 0; 
        for (auto it = dem.begin(); it != dem.end(); it++) { //kiem tra cac bo ba
            if (it->second > kq) {
                kq = it->second; //cap nhat neu bo ba xuat hien nhieu lan
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
