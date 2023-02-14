## Janji
Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 1 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Tugas latihan 1 DPBO 2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++, Java, Python, dan PHP yang menampilkan informasi daftar mahasiswa (sekumpulan objek mahasiswa) dan memiliki fitur menambah, mengubah, dan menghapus data. Setiap mahasiswa memiliki data nama, NIM, program studi, fakultas, dan foto profil (khusus bahasa PHP).

# Desain Program
Program ini dibuat menggunakan 2 class, yaitu :
1. class Mahasiswa
- class Mahasiswa memiliki 5 atribut yang merepresentasikan seorang mahasiswa, seperti nama, NIM, program studi, fakultas, dan foto profil (khusus PHP). Method pada tersedia class ini terdiri dari setter dan getter untuk setiap atributnya.
2. class Crud
- class Crud memiliki 2 atribut, yaitu list of objek dari class Mahasiswa dan list NIM (khusus python). Method-method yang tersedia pada class ini dibuat guna memfasilitasi pengguna dalam memodifikasi data pada list, seperti menambahkan data, memperbaharui data, menampilkan data, dan menghapus data.

# Alur Program
Alur program untuk setiap bahasa kurang lebih sama, kecuali pada bahasa PHP, inputan dilakukan secara hardcode. Tampilan awal pada program ini berupa menu, 

![image](https://user-images.githubusercontent.com/100755457/218673350-493d0bd3-d213-4f19-82aa-df693e98c5bb.png)
Setelah itu pengguna dapat memilih nomor yang sesuai untuk menjalankan perintah.

1. jika memilih opsi 1, maka akan menampilkan form untuk menambahkan data baru.

![image](https://user-images.githubusercontent.com/100755457/218674474-f41297b1-a700-4a25-82b4-5b3a0c4b4550.png)

2. Jika memilih opsi 2, maka pengguna akan dimintai NIM yang akan diubah.

![image](https://user-images.githubusercontent.com/100755457/218675145-5a1cd2da-91ba-4de8-9281-74b37c7a7c1e.png)

Jika NIM tersedia, maka akan menampilkan form untuk memperbaharui data dari NIM yang dicari.

![image](https://user-images.githubusercontent.com/100755457/218675425-f9cf6168-cdd5-448f-a3e6-8974e15225d1.png)

3. Jika memilih opsi 3, maka pengguna akan dimintai NIM yang akan dihapus.

![image](https://user-images.githubusercontent.com/100755457/218675799-4b3df4b2-f5bd-480a-ada0-697a20016fac.png)

Jika NIM tersedia, maka seluruh data dengan NIM tersebut akan dihapus.

4. Jika memilih opsi 4, maka data-data mahasiswa yang tersedia akan ditampilkan.

![a](https://user-images.githubusercontent.com/100755457/218676456-0dc37cfa-91a5-4fc1-94ef-94d1433a1bc1.png)

5. Jika memilih opsi 5, maka program akan berhenti.


# Dokumentasi
- Program PHP
![dokumentasi_php](https://user-images.githubusercontent.com/100755457/218676801-a021f15c-3d50-452b-83b9-953bcdd5bf90.png)

- Program python

![dokumentasi_py](https://user-images.githubusercontent.com/100755457/218676857-d43aa49f-c309-4508-8c49-f2b93e8ae316.png)
