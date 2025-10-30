#include <iostream>
#include <iomanip>

using namespace std;

int tarif(char kode) {
    if (kode == 'C' || kode == 'c') return 500;
    else if (kode == 'K' || kode == 'k') return 700;
    else if (kode == 'N' || kode == 'n') return 1000;
    return 0;
}

string jenisBuku(char kode) {
    if (kode == 'C' || kode == 'c') return "Cerpen (Kumpulan Cerita Pendek)";
    else if (kode == 'K' || kode == 'k') return "Komik";
    else if (kode == 'N' || kode == 'n') return "Novel";
    return "Tidak Diketahui";
}

int main() {
    char ulang;
    do {
        string nama;
        char kode;
        int banyakPinjam;

        cout << "Perpustakaan \"Kecil-Kecilan\"\n";
        cout << "------------------------------------\n";

        cout << "Nama Penyewa Buku: ";
        cin >> ws;
        getline(cin, nama); 
        cout << "Kode Buku [C/K/N]: ";
        cin >> kode;

        cout << "Banyak Pinjam: ";
        cin >> banyakPinjam;

        int harga = tarif(kode);
        int totalBayar = harga * banyakPinjam;
        string jenis = jenisBuku(kode);

        cout << "\nTarif Sewa        : Rp. " << harga << endl;
        cout << "Jenis Buku        : " << jenis << endl;
        cout << "Penyewa dengan Nama: " << nama << endl;
        cout << "Jumlah Bayar Penyewaan Sebesar Rp. " << totalBayar << endl;

        cout << "\nIngin menjalankan program dari awal (y/n)? ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}

