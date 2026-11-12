
#include <iostream>
using namespace std;

int main() {
    string menu[3] = {"soto", "rawon", "pecel"};
    int harga[3] = {10000, 20000, 10000};
    int porsi[3];
    int total[3];
    int i;
    int totalMakanan = 0;

    for(i = 0; i < 3; i++)
    {
        cout << "menu ";
        cout << menu[i] << endl;
        cout << "harga ";
        cout << harga[i] << endl;
        cout << "masukkan porsi ";
        cin >> porsi[i];

        total[i] = porsi[i] * harga[i];
        cout << "total: " << total[i] << endl;

        totalMakanan = totalMakanan + total[i];
        cout << "____________" << endl;
    }

    string minuman[2] = {"teh", "kopi"};
    int hargaMinuman[2] = {3000, 5000};
    int jumlah[2];
    int totalMinuman[2];
    int totalBayar = 0;

    for(i = 0; i < 2; i++)
    {
        cout << "menu minuman ";
        cout << minuman[i] << endl;
        cout << "harga ";
        cout << hargaMinuman[i] << endl;
        cout << "masukkan jumlah ";
        cin >> jumlah[i];

        totalMinuman[i] = jumlah[i] * hargaMinuman[i];
        cout << "total: " << totalMinuman[i] << endl;

        totalBayar = totalBayar + totalMinuman[i];
        cout << "____________" << endl;
    }

    cout << "Total makanan: " << totalMakanan << endl;
    cout << "Total minuman: " << totalBayar << endl;
    cout << "Total pembayaran: " << totalMakanan + totalBayar;

    system("pause");
    return 0;
}
