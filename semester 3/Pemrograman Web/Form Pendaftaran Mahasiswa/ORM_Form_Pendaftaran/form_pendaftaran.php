<?php
require_once('rb.php');

R::setup('mysql:host=localhost;dbname=form_pendaftaran', 'root', ''); //Untuk Menghubungkan ke Database
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Check if the form fields are set and not empty
    $nama = isset($_POST['nama']) ? $_POST['nama'] : '';
    $alamat = isset($_POST['alamat']) ? $_POST['alamat'] : '';
    $jenis_kelamin = isset($_POST['jenis_kelamin']) ? $_POST['jenis_kelamin'] : '';
    $agama = isset($_POST['agama']) ? $_POST['agama'] : '';
    $asal_sekolah = isset($_POST['asal_sekolah']) ? $_POST['asal_sekolah'] : '';

    $siswa = R::dispense('siswa'); //Membuat tabel siswa
    $siswa->nama = $nama;
    $siswa->alamat = $alamat;
    $siswa->jenis_kelamin = $jenis_kelamin;
    $siswa->agama = $agama;
    $siswa->asal_sekolah = $asal_sekolah;

    R::store($siswa); //Mengirim Data ke Database

    $message = 'Data berhasil disimpan.'; // Set success message
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Pendaftaran</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css" integrity="sha384-Zenh87qX5JnK2Jl0vWa8Ck2rdkQ2Bzep5IDxbcnCeuOxjzrPF/et3URy9Bv1WTRi" crossorigin="anonymous">
    <link rel="stylesheet" href="css/style.css">
</head>
<body>
    <form action="" method="post">
        <h2>Form Pendaftaran</h2>

        <?php if (!empty($message)) : ?>
            <div class="message-container">
                <p class="success-message"><?= $message ?></p>
            </div>
        <?php endif; ?>

        <label for="nama">Nama:</label>
        <input type="text" name="nama" required>

        <label for="alamat">Alamat:</label>
        <input type="text" name="alamat" required>

        <label for="jenis_kelamin">Jenis Kelamin:</label>
        <select name="jenis_kelamin" required>
            <option value="Laki-laki">Laki-laki</option>
            <option value="Perempuan">Perempuan</option>
        </select>

        <label for="agama">Agama:</label>
        <select name="agama" required>
            <option value="Islam">Islam</option>
            <option value="Kristen Katolik">Kristen Katolik</option>
            <option value="Kristen Protestan">Kristen Protestan</option>
            <option value="Hindu">Hindu</option>
            <option value="Budha">Budha</option>
            <option value="Konghucu">Konghucu</option>
        </select>

        <label for="asal_sekolah">Asal Sekolah:</label>
        <input type="text" name="asal_sekolah" required>

        <input type="submit" value="Daftar">
        <button class="button" onclick="location.href='data_siswa.php'">Lihat Data Siswa</button>
    </form>
</body>
</html>