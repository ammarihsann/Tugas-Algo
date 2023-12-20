<h2>Data Mahasiswa</h2>
<?php
require_once('rb.php');
R::setup('mysql:host=localhost;dbname=form_pendaftaran', 'root', ''); //Untuk Menghubungkan ke Database
    if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['action'])) {
        $Id = $_POST['id'];

        // Check the action type
        if ($_POST['action'] === 'delete') {
            // Delete the book with the specified ID
            $data = R::load('siswa', $Id);
            R::trash($data);
        } elseif ($_POST['action'] === 'update') {
            // Redirect to the update page with the book ID
            header("Location: update_siswa.php?id=$Id");
            exit();
        }
    }
    $show_data = R::findAll('siswa');

    if (!empty($show_data)) {
        echo '<table border="1">';
        echo '<tr><th>Nama</th><th>Alamat</th><th>Jenis Kelamin</th><th>Agama</th><th>Asal Sekolah</th><th>Operation</th></tr>';

        foreach ($show_data as $data) {
        echo '<tr>';
        echo '<td>' . $data->nama . '</td>';
        echo '<td>' . $data->alamat . '</td>';
        echo '<td>' . $data->jenis_kelamin . '</td>';
        echo '<td>' . $data->agama . '</td>';
        echo '<td>' . $data->asal_sekolah . '</td>';
        echo '<td>';
        echo '<form method="post">';
        echo '<input type="hidden" name="id" value="' . $data->id . '">';
        echo '<button type="submit" name="action" class="update-button" value="update">Update</button>';
        echo '<button type="submit" name="action" class="delete-button" value="delete">Delete</button>';
        echo '</form>';
        echo '</td>';
        echo '</tr>';     
        }
        echo '</table>';
    } else {
        echo '<p>Tidak ada siswa yang tersedia.</p>';
    }


?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/data_siswa.css">
    <title>Data Siswa</title>
</head>
<body>
</br>
    <button onclick="location.href='form_pendaftaran.php'">Kembali ke Form Pendaftaran</button>
</body>
</html>