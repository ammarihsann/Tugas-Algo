<?php
require('rb.php');

R::setup('mysql:host=localhost;dbname=form_pendaftaran', 'root', '');

if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['id'])) {
    $Id = $_POST['id'];
    $nama = $_POST['nama'];
    $alamat = $_POST['alamat'];
    $jenis_kelamin = $_POST['jenis_kelamin'];
    $agama = $_POST['agama'];
    $asal_sekolah = $_POST['asal_sekolah'];

    // Retrieve the book with the specified ID
    $data = R::load('siswa', $Id);

    if ($data->id != 0) {
        // Update book information
        $data->nama = $nama;
        $data->alamat = $alamat;
        $data->jenis_kelamin = $jenis_kelamin;
        $data->agama = $agama;
        $data->asal_sekolah = $asal_sekolah;

        // Store the updated book in the database
        R::store($data);

        // Redirect back to the book display page
        header("Location: data_siswa.php");
        exit();
    } else {
        echo '<p>Buku tidak ditemukan.</p>';
    }
} else {
    echo '<p>Permintaan tidak valid.</p>';
}
?>
