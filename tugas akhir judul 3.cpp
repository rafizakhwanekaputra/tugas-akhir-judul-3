#include <iostream>
using namespace std;

int main() {
    int target;
    int counter = 0;

    int x = 10;
    int nilaiMahasiswa[x] = {80, 73, 49, 13, 98, 31, 82, 85, 90, 55};

    cout << "Masukkan nilai kelulusan minimum mahasiswa: ";
    cin >> target;

    for(int i = 0; i < x; i++) {
        if (nilaiMahasiswa[i] >= target) {
            counter++;
        }
    }

    cout << "Nilai mahasiswa lulus ada sebanyak " << counter << " orang" << endl;
    return 0;
}

