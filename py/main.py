# import file
from crud import Crud

llist = []  # list untuk menampung objek
print("1.Tambah data | 2.Ubah data | 3.Hapus data | 4.Tampilkan data | 5.Keluar")
opsi = 0  # inisialisasi variabel untuk opsi menu
temp = Crud(llist)  # instansiasi untuk class Crud

while opsi != 5:  # selama opsi bukan 5, perulangan terus terjadi
    print("------------------------------------------------------------------------")
    opsi = int(input("Pilih menu : "))  # meminta inputan opsi

    if opsi == 1:  # opsi 1 untuk tambah data
        # masukan user
        nama = input("Nama          : ")
        nim = input("NIM           : ")
        prodi = input("Program Studi : ")
        fakultas = input("Fakultas      : ")
        # memanggil method untuk menambahkan data
        temp.tambahData(nama, nim, prodi, fakultas)

    elif opsi == 2:  # opsi 2 untuk memperbaharui data
        cari = input("Cari NIM yang akan diubah: ")
        idx = temp.cariNIM(cari)  # mencari nim
        if(idx != -1):  # jika nim ditemukan
            # masukan user
            nama = input("Nama          : ")
            nim = input("NIM           : ")
            prodi = input("Program Studi : ")
            fakultas = input("Fakultas      : ")
            # mamanggil method untuk memperbaharui data
            temp.ubahData(idx, nama, nim, prodi, fakultas)

    elif opsi == 3:  # opsi 3 untuk menghapus data
        cari = input("Cari NIM yang akan dihapus: ")
        idx = temp.cariNIM(cari)
        if(idx != -1):  # jika nim ditemukan
            temp.hapusData(idx)  # memanggil method untuk menghapus data

    elif opsi == 4:  # opsi 4 untuk menampilkan data
        temp.tampilData()
