<?php
class Mahasiswa{ // deklarasi class
    /* class mahasiswa yang berisi data diri mahasiswa
    seperti nama, NIM, program studi, fakultas, dan foto profil*/

    // PRIVATE ATRIBUT
    private $nama = "";
    private $nim = "";
    private $prodi = "";
    private $fakultas = "";
    private $foto = "";

    // CONSTRUCT
    function __construct($nama = "", $nim = "", $prodi = "", $fakultas = "", $foto = ""){
        // konstruktor yang akan mengatur atribut berdasarkan parameter inputan user
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }

    // PUBLIC METHOD (SETTER & GETTER)
    function setNama($nama = ""){
        /* metode yang digunakan sebagai setter untuk data nama mahasiswa*/
        $this->nama = $nama;
    }

    function getNama(){
        /* metode yang digunakan sebagai getter untuk data nama mahasiswa*/
        return $this->nama;
    }

    function setNIM($nim = ""){
        /* metode yang digunakan sebagai setter untuk data NIM mahasiswa*/
        $this->nim = $nim;
    }

    function getNIM(){
        /* metode yang digunakan sebagai getter untuk data NIM mahasiswa*/
        return $this->nim;
    }

    function setProdi($prodi = ""){
        /* metode yang digunakan sebagai setter untuk data program studi mahasiswa*/
        $this->prodi = $prodi;
    }

    function getProdi(){
        /* metode yang digunakan sebagai getter untuk data program studi mahasiswa*/
        return $this->prodi;
    }

    function setFakultas($fakultas = ""){
        /* metode yang digunakan sebagai setter untuk data fakultas mahasiswa*/
        $this->fakultas = $fakultas;
    }

    function getFakultas(){
        /* metode yang digunakan sebagai getter untuk data fakultas mahasiswa*/
        return $this->fakultas;
    }

    function setFoto($foto = ""){
        /* metode yang digunakan sebagai setter untuk data foto profil mahasiswa*/
        $this->foto = $foto;
    }

    function getFoto(){
        /* metode yang digunakan sebagai getter untuk data foto profil mahasiswa*/
        return $this->foto;
    }
    
    // DESTRUCTOR
    function __destruct(){
    }
}

?>