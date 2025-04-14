#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string jumlahHalaman;
    string pengarang;
};

int main(){
    Buku bk;

    cout << "masukkan judul = ";
    cin >> bk.judul;
    cout << "masukkan jumlah Halaman = ";
    cin >> bk.jumlahHalaman;
   cout << "masukkan penggarang = ";
   cin >> bk.pengarang;

   cout << endl;
   cout << "tampilkan data buku" << endl;
   cout << endl;

   cout << "judul buku = " << bk.judul << endl;
   cout << "jumlah Halaman buku = " << bk.jumlahHalaman << endl;
   cout << "pengarang buku = " << bk.pengarang << endl;
}