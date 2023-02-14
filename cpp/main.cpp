// import library
#include <bits/stdc++.h>
#include "Crud.cpp"

// using standard namespace
using namespace std;

int main()
{
    vector<Mahasiswa> listMhs; // vector untuk menampung objek
    Crud temp(listMhs);        // instansiasi untuk objek crud
    string cari, nama, nim, prodi, fakultas;
    cout << "1.Tambah data | 2.Ubah data | 3.Hapus data | 4.Tampilkan data | 5.Keluar\n";
    int opsi, idx;
    do // perulangan menu
    {
        cout << "------------------------------------------------------------------------\nPilih menu : ";
        cin >> opsi;
        switch (opsi) // menu
        {
        case 1: // opsi 1 untuk menambahkan data
            // meminta masukan user
            cout << "Nama          : ";
            cin.ignore();
            getline(cin, nama);

            cout << "NIM           : ";
            cin >> nim;

            cout << "Program studi : ";
            cin.ignore();
            getline(cin, prodi);

            cout << "Fakultas      : ";
            cin >> fakultas;
            // memanggil method tambahData dari objek crud
            temp.tambahData(nama, nim, prodi, fakultas);
            break;
        case 2: // opsi untuk memperbaharui data
            cout << "Cari NIM yang mau diubah : ";
            cin >> cari;
            idx = temp.cariNIM(cari); // mencari index dari nim
            if (idx != -1)            // jika nim tersebut ditemukan
            {
                // meminta masukan user
                cout << "Nama          : ";
                cin.ignore();
                getline(cin, nama);

                cout << "NIM           : ";
                cin >> nim;

                cout << "Program studi : ";
                cin.ignore();
                getline(cin, prodi);

                cout << "Fakultas      : ";
                cin >> fakultas;
                // memanggil method ubahData
                temp.ubahData(idx, nama, nim, prodi, fakultas);
            }
            else
            { // jika nim tidak ditemukan
                cout << "========== NIM is not exist ==========\n";
            }
            break;
        case 3: // opsi 3 untuk menghapus data
            cout << "Cari NIM yang mau dihapus : ";
            cin >> cari;
            idx = temp.cariNIM(cari); // mencari nim yang akan dihapus
            if (idx != -1)            // jika nim tersebut ditemukan
            {
                temp.hapusData(idx); // memanggil method hapusData
            }
            else // jika nim tidak ditemukan
            {
                cout << "========== NIM is not exist ==========\n";
            }
            break;
        case 4: // opsi 4 untuk menampilkan data
                // memanggil method tampilData
            temp.tampilData();
            break;
        }
    } while (opsi != 5);

    return 0;
}