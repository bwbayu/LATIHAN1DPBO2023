// import library
#include <bits/stdc++.h>

// using standard namespace
using namespace std;

class Mahasiswa
{
    /* class mahasiswa yang berisi data diri mahasiswa
    seperti nama, NIM, program studi, dan fakultas*/
private:
    // private atribut
    string nama, nim, prodi, fakultas;

public:
    // CONSTRUCTOR
    Mahasiswa()
    {
        // konstruktor yang akan mengatur private atribut ke default value
        this->nama = "";
        this->nim = "";
        this->prodi = "";
        this->fakultas = "";
    }

    Mahasiswa(string nama, string nim, string prodi, string fakultas)
    {
        // konstruktor yang akan mengatur private atribut berdasarkan masukan inputan dari parameter
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    // public method
    // SETTER & GETTER

    void setNama(string nama)
    {
        /* metode yang digunakan sebagai setter untuk data nama mahasiswa*/
        this->nama = nama;
    }

    string getNama()
    {
        /* metode yang digunakan sebagai getter untuk data nama mahasiswa*/
        return this->nama;
    }

    void setNIM(string nim)
    {
        /* metode yang digunakan sebagai setter untuk data NIM mahasiswa*/
        this->nim = nim;
    }

    string getNIM()
    {
        /* metode yang digunakan sebagai getter untuk data NIM mahasiswa*/
        return this->nim;
    }

    void setProdi(string prodi)
    {
        /* metode yang digunakan sebagai setter untuk data program studi mahasiswa*/
        this->prodi = prodi;
    }

    string getProdi()
    {
        /* metode yang digunakan sebagai getter untuk data program studi mahasiswa*/
        return this->prodi;
    }

    void setFakultas(string fakultas)
    {
        /* metode yang digunakan sebagai setter untuk data fakultas mahasiswa*/
        this->fakultas = fakultas;
    }

    string getFakultas()
    {
        /* metode yang digunakan sebagai getter untuk data fakultas mahasiswa*/
        return this->fakultas;
    }

    // DESTRUCTOR
    ~Mahasiswa()
    {
    }
};