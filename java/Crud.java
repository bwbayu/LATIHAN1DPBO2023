
// import library
import java.util.ArrayList;

public class Crud {
    /*
     * class crud berisi arraylist of object dari class mahasiswa
     * yang digunakan untuk memodifikasi arraylist tersebut, seperti
     * menambahkan data, menampilkan data, memperbaharui data,
     * dan menghapus data
     */

    // private atribut
    private ArrayList<Mahasiswa> dataMhs;

    // CONSTRUCTOR
    Crud(ArrayList<Mahasiswa> data) {
        /*
         * konstruktor yang menerima parameter dengan tipe data arraylist sebagai
         * inputannya
         */
        dataMhs = data;
    }

    // PUBLIC METHOD
    int cariNIM(String nim) {
        /*
         * method yang digunakan untuk mencari nim
         * dan mengembalikan index nim tersebut
         */
        for (int i = 0; i < dataMhs.size(); i++) {
            if (dataMhs.get(i).getNIM().equals(nim)) {// jika nim ditemukan
                return i;
            }
        }
        return -1;// jika nim tidak ditemukan
    }

    void tambahData(String nama, String nim, String prodi, String fakultas) {
        /*
         * method yang digunakan untuk menambahkan data baru
         * ke dalam vector
         */

        Mahasiswa temp = new Mahasiswa(nama, nim, prodi, fakultas); // instansiasi objek mahasiswa
        dataMhs.add(temp); // menambahkan objek ke list
    }

    void tampilData() {
        System.out.println("Data Mahasiswa");
        for (int i = 0; i < dataMhs.size(); i++) {
            /*
             * method yang digunakan untuk menampilkan data mahasiswa
             * yang ada di dalam vector
             */
            System.out.println("==========================================");
            System.out.println("Nama          : " + dataMhs.get(i).getNama());
            System.out.println("NIM           : " + dataMhs.get(i).getNIM());
            System.out.println("Program Studi : " + dataMhs.get(i).getProdi());
            System.out.println("Fakultas      : " + dataMhs.get(i).getFakultas());
        }
    }

    void hapusData(int indexNIM) {
        /*
         * method yang digunakan untuk menghapus data mahasiswa
         * pada index tertentu
         */
        dataMhs.remove(indexNIM); // menggunakan remove() untuk menghapus data
    }

    void ubahData(int indexNIM, String nama, String nim, String prodi, String fakultas) {
        /*
         * method yang digunakan untuk memperbaharui data mahasiswa
         * pada index tertentu
         */
        // memanggil setter untuk setiap atribut
        dataMhs.get(indexNIM).setNama(nama);
        dataMhs.get(indexNIM).setNIM(nim);
        dataMhs.get(indexNIM).setProdi(prodi);
        dataMhs.get(indexNIM).setFakultas(fakultas);
    }

}
