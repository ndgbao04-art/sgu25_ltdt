#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("MaTranKe.inp");
    ofstream fout("MaTranKe.out");

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
        int degree = 0;
        for (int j = 0; j < n; j++) {
            degree += a[i][j];  
        }
        fout << degree << "\n";
    }
    fin.close();
    fout.close();
    return 0;
}
