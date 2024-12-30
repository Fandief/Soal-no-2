#include <iostream>
using namespace std;

int main() {
    double jamKerja, tarifPerJam, gaji;

    cout << "Masukkan jumlah jam kerja per minggu: ";
    cin >> jamKerja;
    cout << "Masukkan tarif per jam: ";
    cin >> tarifPerJam;

    if (jamKerja > 40) {
        gaji = (40 * tarifPerJam) + ((jamKerja - 40) * tarifPerJam * 1.5);
    } else {
        gaji = jamKerja * tarifPerJam;
    }

    cout << "Gaji total karyawan: Rp" << gaji << endl;

    return 0;
}
