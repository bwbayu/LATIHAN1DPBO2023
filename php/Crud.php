<?php
// import file
require("Mahasiswa.php");

class Crud{ //deklarasi class
    /* class Crud berisi array of object dari class mahasiswa 
    yang digunakan untuk mmeodifikasi array tersebut, seperti
    menambahkan data, menampilkan data, memperbaharui data, dan
    menghapus data */

    // private atribut
    private $dataMhs = array();

    // CONSTRUCT
    public function __construct($data = array()){
        /* konstruktor yang menerima parameter dengan tipe data array sebagai inputannya*/ 
        $this->dataMhs = $data;
    }

    // PUBLIC METHOD
    public function tambahData($idx, $nama = "", $nim = "", $prodi = "", $fakultas = "", $foto = ""){
        /*method yang digunakan untuk menambahkan data baru
        ke dalam vector*/
        $this->dataMhs[$idx] = new Mahasiswa($nama, $nim, $prodi, $fakultas, $foto); #instansiasi objek mahasiswa
    }

    public function tampilData(){
        /*method yang digunakan untuk menampilkan data mahasiswa
        yang ada di dalam vector*/
        echo "<table border='1'>";
        echo "<tr>
            <th>Nama</th>
            <th>NIM</th>
            <th>Program Studi</th>
            <th>Fakultas</th>
            <th>Foto Profil</th>
            </tr>";
        for($i = 0; $i < sizeof($this->dataMhs); $i++){
            echo "<tr><td>";
            echo $this->dataMhs[$i]->getNama();
            echo "</td><td>";
            echo $this->dataMhs[$i]->getNIM();
            echo "</td><td>";
            echo $this->dataMhs[$i]->getProdi();
            echo "</td><td>";
            echo $this->dataMhs[$i]->getFakultas();
            echo "</td><td>";
            echo "<img src='" . $this->dataMhs[$i]->getFoto(). "'style='width:100px'>";
            echo "</td>";
            echo "</tr>";
        }
        echo "</table>";
    }

    function cariNIM($nim = ""){
        /*method yang digunakan untuk mencari nim
        dan mengembalikan index nim tersebut*/
        for($i = 0; $i < sizeof($this->dataMhs); $i++){
            if(strcmp($nim, $this->dataMhs[$i]->getNIM()) == 0){
                return $i; //mengembalikan index jika nim tersebut ditemukan
            }
        }
        return -1;
    }

    public function updateData($idx, $nama = "", $nim = "", $prodi = "", $fakultas = "", $foto = ""){
        /*method yang digunakan untuk memperbaharui data mahasiswa
        pada index tertentu*/
        // memanggil setter untuk setiap atribut
        $this->dataMhs[$idx]->setNama($nama);
        $this->dataMhs[$idx]->setNIM($nim);
        $this->dataMhs[$idx]->setProdi($prodi);
        $this->dataMhs[$idx]->setFakultas($fakultas);
        $this->dataMhs[$idx]->setFoto($foto);
    }

    public function hapusData($idx){
        /*method yang digunakan untuk menghapus data mahasiswa
        pada index tertentu*/
        array_splice($this->dataMhs, $idx, 1); # menggunakan array_splice untuk menghapus data dan reindexing
    } 
    
    // DESTRUCTOR
    function __destruct(){}
}

?>