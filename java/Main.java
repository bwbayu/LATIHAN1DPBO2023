
// import library
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Mahasiswa> llist = new ArrayList<>(); // deklarasi arraylist untuk menampung objek
        Crud temp = new Crud(llist); // instansiasi untuk objek crud
        //
        String cari, nama, nim, prodi, fakultas;
        int opsi = 0, idx = 0;
        System.out.println("1.Tambah data | 2.Ubah data | 3.Hapus data | 4.Tampilkan data | 5.Keluar");
        Scanner scan = new Scanner(System.in);
        do { // perulangan menu
            System.out.println("------------------------------------------------------------------------");
            System.out.print("Pilih menu : ");
            opsi = scan.nextInt();
            scan.nextLine();
            switch (opsi) {
                case 1:// opsi 1 untuk menambahkan data
                       // masukan user
                    System.out.print("Nama          : ");
                    nama = scan.nextLine();
                    System.out.print("NIM           : ");
                    nim = scan.nextLine();
                    System.out.print("Program studi : ");
                    prodi = scan.nextLine();
                    System.out.print("Fakultas      : ");
                    fakultas = scan.nextLine();
                    // memanggil method untuk menambahkan data baru
                    temp.tambahData(nama, nim, prodi, fakultas);
                    break;
                case 2:// opsi untuk memperbaharui data
                    System.out.print("Cari NIM yang mau diubah : ");
                    cari = scan.nextLine();
                    idx = temp.cariNIM(cari);// mencari index dari nim yang dicari
                    if (idx != -1) {// jika nim tersebut ditemukan
                        // masukan user
                        System.out.print("Nama          : ");
                        nama = scan.nextLine();
                        System.out.print("NIM           : ");
                        nim = scan.nextLine();
                        System.out.print("Program studi : ");
                        prodi = scan.nextLine();
                        System.out.print("Fakultas      : ");
                        fakultas = scan.nextLine();
                        // memanggil method untuk memperbarui data
                        temp.ubahData(idx, nama, nim, prodi, fakultas);
                    } else {// jika nim tidak ditemukan
                        System.out.println("========== NIM is not exist ==========");
                    }
                    break;
                case 3:// opsi 3 untuk menghapus data
                    System.out.print("Cari NIM yang mau dihapus : ");
                    cari = scan.nextLine();
                    idx = temp.cariNIM(cari);// mencari nim yang akan dihapus
                    if (idx != -1) {// jika nim tersebut ditemukan
                        // memanggil method hapusData
                        temp.hapusData(idx);
                    } else {// jika nim tidak ditemukan
                        System.out.println("========== NIM is not exist ==========");
                    }
                    break;
                case 4:// opsi 4 untuk menampilkan data
                    temp.tampilData();// memanggil method tampilData
                    break;
            }
        } while (opsi != 5);
        scan.close(); // menutup scanner
    }
}