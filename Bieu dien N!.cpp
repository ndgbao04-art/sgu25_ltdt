#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    while (cin >> N) { //nhap phan tu
        bool first = true; //them khoang trang 
        for (int p = 2; p <= N; p++) { //kiem tra tu 2-N
            bool nguyen_to = true;
            for (int i = 2; i * i <= p; i++) { //kiem tra so nguyen to
                if (p % i == 0) {
                    nguyen_to = false;
                    break;
                }
            }
            if (nguyen_to) {
                int cnt = 0;
                int power = p;
                while (power <= N) { //dem so lan p xuat hien 
                    cnt += N / power;
                    power *= p;
                }
                if (!first) cout << " "; //them khoang trang 
                cout << cnt;
                first = false;
            }
        }
        cout << "\n";
    }
    return 0;
}
