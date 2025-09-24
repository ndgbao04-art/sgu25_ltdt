#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("BacVaoBacRa.inp");
    ofstream fout("BacVaoBacRa.out");
    
    int n;
    fin >> n;
    int a[1001][1001];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fin >> a[i][j];
        }
    }
    fout << n << "\n";
    for (int i = 0; i < n; i++) {
        int bacRa = 0; 
        int bacVao = 0; 
        for (int j = 0; j < n; j++) {
            bacRa += a[i][j]; 
            bacVao += a[j][i]; 
        }
        fout << bacVao << " " << bacRa << "\n";
    }
    fin.close();
    fout.close();
    return 0;
}
