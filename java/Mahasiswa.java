public class Mahasiswa {
    /*
     * class mahasiswa yang berisi data diri mahasiswa
     * seperti nama, NIM, program studi, dan fakultas
     */

    // private atribut
    private String nama, nim, prodi, fakultas;

    // CONSTRUCTOR
    Mahasiswa() {
        // konstruktur yang mengisi value atribut dengan default value
        this.nama = "";
        this.nim = "";
        this.prodi = "";
        this.fakultas = "";
    }

    Mahasiswa(String nama, String nim, String prodi, String fakultas) {
        // konstruktor yang mengisi value atribut berdasarkan parameter masukan user
        this.nama = nama;
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // METHOD
    void setNama(String nama) {
        // metode untuk menambahkan atau mengubah data nama mahasiswa
        this.nama = nama;
    }

    String getNama() {
        // metode untuk mengambil data nama mahasiswa
        return this.nama;
    }

    void setNIM(String nim) {
        // metode untuk menambahkan atau mengubah data NIM mahasiswa
        this.nim = nim;
    }

    String getNIM() {
        // metode untuk mengambil data NIM mahasiswa
        return this.nim;
    }

    void setProdi(String prodi) {
        // metode untuk menambahkan atau mengubah data program studi mahasiswa
        this.prodi = prodi;
    }

    String getProdi() {
        // metode untuk mengambil data program studi mahasiswa
        return this.prodi;
    }

    void setFakultas(String fakultas) {
        // metode untuk menambahkan atau mengubah data fakultas mahasiswa
        this.fakultas = fakultas;
    }

    String getFakultas() {
        // metode untuk mengambil data fakultas mahasiswa
        return this.fakultas;
    }
}