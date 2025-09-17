#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    while (cin >> N) { //nhap phan tu
        int dem = 0;
        int m = N;
        while (m > 0) {
            dem = dem + m / 5; //dem so chia het cho 5
            m = m / 5; //chia tiep cho 5 de lay boi so
        }
        cout << dem << "\n";
    } 
    return 0;
}
