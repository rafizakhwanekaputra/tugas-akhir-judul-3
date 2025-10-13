#include <iostream>
using namespace std;

int main() {
    int target;
    int counter = 0;

    // Jumlah mahasiswa
    int x = 30;
    int nilaiMahasiswa[x] = {80, 73, 49, 13, 98, 31, 82, 85, 90, 55, 80, 95, 68, 99, 76, 59, 90, 38, 55, 82,
    40, 57, 77, 81, 30, 66, 89, 19, 87, 93 };
    string namaMahasiswa[x] = {"Rafi", "Zidan", "Faqih", "Riffa", "Rifki", "Ridho", "Kadek", "Yaza", "Regina",
         "Nabila", "Vivian", "Nayla", "Putri", "Yostiar", "Rizky", "Fany", "Valerie", "Ica", "Satriyo", "Kanaya",
         "Jeje", "Revalina", "Wulan", "Ledi", "Hengky", "Edbert", "Maxwel", "Bintang", "Joshua", "Fahrezi"};

    cout << "Masukkan nilai kelulusan minimum mahasiswa: ";
    cin >> target;

    cout << "\nDaftar Nilai Mahasiswa:\n";
    cout << "=========================\n";
    for (int i = 0; i < x; i++) {
        cout << namaMahasiswa[i] << ": " << nilaiMahasiswa[i] << endl;
    }

    for (int i = 0; i < x; i++) {
        if (nilaiMahasiswa[i] >= target) {
            counter++;
        }
    }

    cout << "=========================\n";
    cout << "Jumlah mahasiswa yang lulus: " << counter << " orang" << endl;

    return 0;
}
