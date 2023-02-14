# import file dan library
from mahasiswa import Mahasiswa


class Crud:  # deklarasi class
    """ class crud berisi list of object dari class mahasiswa
    yang digunakan untuk memodifikasi vector tersebut, seperti
    menambahkan data, menampilkan data, memperbaharui data,
    dan menghapus data
    """
    # CONSTRUCTOR

    def __init__(self, data: list):
        """ konstruktor yang menerima parameter dengan tipe data list sebagai inputannya """
        self.__data = data

    # PUBLIC METHOD

    def tampilData(self):
        """ method untuk menampilkan data yang ada di dalam list """
        print("Data Mahasiswa : ")
        for x in self.__data:
            print("==========================================")
            print(x)

    def tambahData(self, nama, nim, prodi, fakultas):
        """ method untuk menambahkan data baru ke dalam list """
        temp = Mahasiswa(nama, nim, prodi, fakultas)  # instansiasi objek class
        self.__data.append(temp)  # menambahkannya ke list

    def cariNIM(self, nim):
        """ method yang digunakan untuk memudahkan pencarian NIM ketika
         ingin memperbaharui atau menghapus data """
        if nim not in Mahasiswa._allNIM:
            # jika nim yang dicari tidak ada di list NIM
            return -1
        else:
            # jika nim ditemukan maka akan mengembalikan indexnya
            return Mahasiswa._allNIM.index(nim)

    def ubahData(self, indexNIM, nama, nim, prodi, fakultas):
        """ method untuk memperbaharui data mahasiswa """
        # mengupdate data lama dengan data baru melalui index dengan setter
        self.__data[indexNIM].nama = nama
        self.__data[indexNIM].nim = nim
        self.__data[indexNIM].prodi = prodi
        self.__data[indexNIM].fakultas = fakultas
        Mahasiswa._allNIM[indexNIM] = nim

    def hapusData(self, indexNIM):
        """ method untuk menghapus data mahasiswa """
        # memanggil fungsi pop untuk mengeluarkan data yang ingin dihapus
        self.__data.pop(indexNIM)
