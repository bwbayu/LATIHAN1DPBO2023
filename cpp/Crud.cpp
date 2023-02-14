// import library dan file
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

// using standard namespace
using namespace std;

class Crud
{
    /* class crud berisi vector of object dari class mahasiswa
    yang digunakan untuk memodifikasi vector tersebut, seperti
    menambahkan data, menampilkan data, memperbaharui data,
    dan menghapus data*/

private:
    // private atribut
    vector<Mahasiswa> dataMhs;

public:
    // CONSTRUCTOR
    Crud(vector<Mahasiswa> data)
    {
        /* konstruktor yang menerima parameter dengan tipe data vector sebagai inputannya*/
        dataMhs = data;
    }

    // PUBLIC METHOD
    int cariNIM(string nim)
    {
        /*method yang digunakan untuk mencari nim
        dan mengembalikan index nim tersebut*/
        for (int i = 0; i < dataMhs.size(); i++)
        {
            if (nim == dataMhs[i].getNIM()) // jika nim ditemukan
            {
                return i;
            }
        }
        return -1; // jika nim tidak ditemukan
    }

    void tampilData()
    {
        /*method yang digunakan untuk menampilkan data mahasiswa
        yang ada di dalam vector*/
        cout << "Data Mahasiswa : \n";
        for (int i = 0; i < dataMhs.size(); i++)
        {
            cout << "==========================================\n";
            cout << "Nama          : " << dataMhs[i].getNama() << endl;
            cout << "NIM           : " << dataMhs[i].getNIM() << endl;
            cout << "Program Studi : " << dataMhs[i].getProdi() << endl;
            cout << "Fakultas      : " << dataMhs[i].getFakultas() << endl;
        }
    }

    void tambahData(string nama, string nim, string prodi, string fakultas)
    {
        /*method yang digunakan untuk menambahkan data baru
        ke dalam vector*/
        Mahasiswa temp(nama, nim, prodi, fakultas); // instansiasi objek mahasiswa
        dataMhs.push_back(temp);                    // menambahkannya ke vector
    }

    void ubahData(int indexNIM, string nama, string nim, string prodi, string fakultas)
    {
        /*method yang digunakan untuk memperbaharui data mahasiswa
        pada index tertentu*/
        // memanggil setter untuk setiap atribut
        dataMhs[indexNIM].setNama(nama);
        dataMhs[indexNIM].setNIM(nim);
        dataMhs[indexNIM].setProdi(prodi);
        dataMhs[indexNIM].setFakultas(fakultas);
    }

    void hapusData(int indexNIM)
    {
        /*method yang digunakan untuk menghapus data mahasiswa
        pada index tertentu*/
        dataMhs.erase(dataMhs.begin() + indexNIM); // menggunakan erase() untuk menghapus data
    }

    // DESTRUCTOR
    ~Crud() {}
};