#include <iostream>
using namespace std;

// Fungsi untuk menghitung subtotal berdasarkan harga dan jumlah
int hitungSubtotal(int harga, int jumlah) {
    return harga * jumlah;
}

int main() {
    int pilihMakan, jmlMakan, hargaMakan = 0, totalMakan = 0;
    int pilihMinum, jmlMinum, hargaMinum = 0, totalMinum = 0;
    int totalBayar = 0;
    char ulang;

    do {
        cout << "=== MENU MAKANAN ===" << endl;
        cout << "1. Soto  - Rp 15.000" << endl;
        cout << "2. Rawon - Rp 20.000" << endl;
        cout << "3. Pecel - Rp 10.000" << endl;
        cout << "0. Tidak pesan makan" << endl;
        cout << "Pilih makanan (0-3): ";
        cin >> pilihMakan;

        if (pilihMakan == 1) hargaMakan = 15000;
        else if (pilihMakan == 2) hargaMakan = 20000;
        else if (pilihMakan == 3) hargaMakan = 10000;
        else hargaMakan = 0;

        if (hargaMakan > 0) {
            cout << "Jumlah porsi makanan: ";
            cin >> jmlMakan;
            totalMakan = hitungSubtotal(hargaMakan, jmlMakan);
        } else {
            totalMakan = 0;
        }

        cout << "\n=== MENU MINUMAN ===" << endl;
        cout << "1. Teh   - Rp 3.000" << endl;
        cout << "2. Kopi  - Rp 5.000" << endl;
        cout << "0. Tidak pesan minum" << endl;
        cout << "Pilih minuman (0-2): ";
        cin >> pilihMinum;

        if (pilihMinum == 1) hargaMinum = 3000;
        else if (pilihMinum == 2) hargaMinum = 5000;
        else hargaMinum = 0;

        if (hargaMinum > 0) {
            cout << "Jumlah gelas minuman: ";
            cin >> jmlMinum;
            totalMinum = hitungSubtotal(hargaMinum, jmlMinum);
        } else {
            totalMinum = 0;
        }

        totalBayar = totalMakan + totalMinum;
        cout << "\n----------------------------" << endl;
        cout << "Subtotal Makanan : Rp " << totalMakan << endl;
        cout << "Subtotal Minuman : Rp " << totalMinum << endl;
        cout << "Total Bayar      : Rp " << totalBayar << endl;
        cout << "----------------------------" << endl;

        cout << "\nTransaksi lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih telah memesan!\n";
    cout << "Tekan Enter untuk keluar...";
    cin.ignore();
    cin.get();

    return 0;
}
