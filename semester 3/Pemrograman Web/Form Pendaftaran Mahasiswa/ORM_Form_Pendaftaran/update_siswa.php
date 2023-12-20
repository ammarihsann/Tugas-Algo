<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Update Buku</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css" integrity="sha384-Zenh87qX5JnK2Jl0vWa8Ck2rdkQ2Bzep5IDxbcnCeuOxjzrPF/et3URy9Bv1WTRi" crossorigin="anonymous">
    <link rel="stylesheet" href="css/update_siswa.css">
</head>
<body>
    <?php
    require('rb.php');

    R::setup('mysql:host=localhost;dbname=form_pendaftaran', 'root', '');

    if ($_SERVER['REQUEST_METHOD'] === 'GET' && isset($_GET['id'])) {
        $Id = $_GET['id'];

        // Retrieve the book with the specified ID
        $data = R::load('siswa', $Id);

        if ($data->id == 0) {
            echo '<p>Buku tidak ditemukan.</p>';
        }
    } else {
        echo '<p>Permintaan tidak valid.</p>';
    }
    ?>

    <form method="post" action="proses_update.php">
    <h2>Update Buku</h2>
        <input type="hidden" name="id" value="<?php echo $data->id; ?>">
        Nama: <input type="text" name="nama" value="<?php echo $data->nama; ?>"><br>
        Alamat: <input type="text" name="alamat" value="<?php echo $data->alamat; ?>"><br>
        Jenis Kelamin: <input type="text" name="jenis_kelamin" value="<?php echo $data->jenis_kelamin; ?>"><br>
        Agama: <input type="text" name="agama" value="<?php echo $data->agama; ?>"><br>
        Asal Sekolah: <input type="text" name="asal_sekolah" value="<?php echo $data->asal_sekolah; ?>"><br>
        <input type="submit" value="Update">
        <button type="button" onclick="location.href='data_siswa.php'" style="background-color:#4682B4; color: white;">Kembali ke Data Siswa</button>
    </form>
</body>
</html>
