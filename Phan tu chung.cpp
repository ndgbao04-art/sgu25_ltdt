#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nx, ny, nz;
    cin >> nx; //nhap phan tu mang x
    int x[10005];
    for (int i = 0; i < nx; i++) cin >> x[i];

    cin >> ny;//nhap phan tu mang y
    int y[10005];
    for (int i = 0; i < ny; i++) cin >> y[i];

    cin >> nz;//nhap phan tu mang z
    int z[10005];
    for (int i = 0; i < nz; i++) cin >> z[i];

    int common[10005]; //mang luu phan tu mang chung
    int cnt = 0;       
    for (int i = 0; i < nx; i++) { //tim gia tri trong mang y
        int value = x[i];
        bool inY = false, inZ = false;
        for (int j = 0; j < ny; j++) {
            if (y[j] == value) {
                inY = true;
                break; //tim thay thi thoat khoi mang
            }
        }
        for (int k = 0; k < nz; k++) { //tim gia tri trong mang z
            if (z[k] == value) {
                inZ = true;
                break; //tim thay thi thoat khoi mang
            }
        }
        if (inY && inZ) { //neu co trong ca 2 mang 
            bool ok = true; //kiem tra, tranh trung lap 
            for (int t = 0; t < cnt; t++) {
                if (common[t] == value) {
                    ok = false;
                    break;
                }
            }
            if (ok) { //chua co thi them vao mang
                common[cnt] = value;
                cnt++;
            }
        }
    }
    for (int i = 0; i < cnt - 1; i++) { //sap xep tang dan
        for (int j = i + 1; j < cnt; j++) {
            if (common[i] > common[j]) {
                int tmp = common[i];
                common[i] = common[j];
                common[j] = tmp;
            }
        }
    }
    cout << cnt << "\n"; //in ra phan tu chung
    for (int i = 0; i < cnt; i++) { //in ra danh sach phan tu chung
        cout << common[i] << " ";
    }
    cout << "\n"; 
    return 0;
}
