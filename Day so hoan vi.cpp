#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N; //nhap so phan tu 
    int a[100000]; //mang luu    
    int check[100000]; //mang danh dau 
    for (int i = 1; i <= N; i++) { //kiem tra day so
        check[i] = 0;   
    }
    bool ok = true;
    for (int i = 1; i <= N; i++) { //doc day so
        cin >> a[i];
        if (a[i] < 1 || a[i] > N) { //neu so nam ngoai N thi khong hoan vi
            ok = false; 
        } else {
            if (check[a[i]] == 1) { //trung lap, khong hoan vi
                ok = false; 
            }
            check[a[i]] = 1; //danh dau so xuat hien
        }
    }
    for (int i = 1; i <= N; i++) { //kiem tra so xuat hien chua
        if (check[i] == 0) {
            ok = false;
        }
    }
    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}
