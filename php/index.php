<?php
// import file
require("Crud.php");

$dataMahasiswa = array(); #deklarasi tampungan data
$temp = new Crud($dataMahasiswa); # instansiasi objek crud
// TAMBAH DATA
echo "Data Mahasiswa";
$temp->tambahData(0, "Seulgi", "210", "ilkom", "fpmipa", "asset/seulgi.jpg");
$temp->tambahData(1, "Wendy", "211", "ilkom", "fpmipa", "asset/wendy.jpg");
$temp->tambahData(2, "Lia", "212", "ilkom", "fpmipa", "asset/lia.jpg");
// MENAMPILKAN DATA
$temp->tampilData();
echo "<hr>";
echo "Data Mahasiswa setelah diupdate";
// UPDATE DATA
$idxnim = $temp->cariNIM("211");
$temp->updateData($idxnim, "Son Seung-wan", "21111111", "ilkom", "fpmipa", "asset/wendy.jpg");
// HAPUS DATA
$idxnim = $temp->cariNIM("210");
$temp->hapusData($idxnim);
$temp->tampilData();

?>