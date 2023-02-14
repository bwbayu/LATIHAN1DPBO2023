class Mahasiswa:  # deklarasi class
    """ class mahasiswa yang berisi data diri mahasiswa
    seperti nama, NIM, program studi, dan fakultas
    """
    # deklarasi class atribut untuk menampung nim agar memudahkan ketika pencarian data
    _allNIM = []

    # CONSTRUCTOR
    def __init__(self, nama, nim, prodi, fakultas):
        """ konstruktor yang akan mengatur private atribut 
        berdasarkan masukan inputan dari parameter """
        self.nama = nama
        self.nim = nim
        self.prodi = prodi
        self.fakultas = fakultas
        # menambahkan nim ke list tampungan
        Mahasiswa._allNIM.append(nim)

    def __str__(self):
        """ method untuk merepresentasikan class objek dengan string,
        digunakan untuk menampilkan data-data di dalam list """
        return f"Nama          : {self.nama}\nNIM           : {self.nim}\nProgram Studi : {self.prodi}\nFakultas      : {self.fakultas}"

    # GETTER & SETTER

    @property
    def nama(self):
        """ method yang digunakan sebagai getter untuk data nama"""
        return self.__nama

    @nama.setter
    def nama(self, nama):
        """method yang digunakan sebagai setter untuk data nama"""
        if not nama:  # validasi data nama yang masuk
            raise ValueError("Missing name")
        self.__nama = nama

    @property
    def nim(self):
        """method yang digunakan sebagai getter untuk data nim"""
        return self.__nim

    @nim.setter
    def nim(self, nim):
        """method yang digunakan sebagai setter untuk data nim"""
        # validasi data nim
        # if nim in Mahasiswa._allNIM: # agar data tidak duplikat
        #     raise ValueError("NIM already exist!")
        if not nim:  # agar data tidak berupa string kosong
            raise ValueError("Missing NIM")
        self.__nim = nim

    @property
    def prodi(self):
        """method yang digunakan sebagai getter untuk data prodi"""
        return self.__prodi

    @prodi.setter
    def prodi(self, prodi):
        """method yang digunakan sebagai setter untuk data prodi"""
        if not prodi:  # validasi data prodi
            raise ValueError("Missing program studi")
        self.__prodi = prodi

    @property
    def fakultas(self):
        """method yang digunakan sebagai getter untuk data fakultas"""
        return self.__fakultas

    @fakultas.setter
    def fakultas(self, fakultas):
        """method yang digunakan sebagai setter untuk data fakultas"""
        if not fakultas:  # validasi data fakultas
            raise ValueError("Missing fakultas")
        self.__fakultas = fakultas
