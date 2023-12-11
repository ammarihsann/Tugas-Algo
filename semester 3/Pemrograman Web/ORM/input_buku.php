<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Input Buku</title>
    <link rel="stylesheet" href="CSS/style.css">
</head>
<body>
    <?php
    require('rb.php');

    R::setup('mysql:host=localhost;dbname=buku', 'root', '');

    // Check if the form is submitted
    if ($_SERVER['REQUEST_METHOD'] === 'POST') {
        // Check if the form fields are set and not empty
        $judul_buku = isset($_POST['judul_buku']) ? $_POST['judul_buku'] : '';
        $pengarang_buku = isset($_POST['pengarang_buku']) ? $_POST['pengarang_buku'] : '';

        $new_book = R::dispense('book');
        $new_book->judul_buku = $judul_buku;
        $new_book->pengarang_buku = $pengarang_buku;
        R::store($new_book);

        $message = 'Data berhasil disimpan.'; // Set success message
    }
    ?>

    <h2>Form Input Buku</h2>
    
    <?php
    // Display the success message
    if (!empty($message)) {
        echo '<p style="color: green;">' . $message . '</p>';
    }
    ?>

    <form method="post" action="">
        <label for="judul_buku">Judul Buku:</label>
        <input type="text" name="judul_buku" required><br>

        <label for="pengarang_buku">Pengarang Buku:</label>
        <input type="text" name="pengarang_buku" required><br>

        <input type="submit" value="Simpan">
    </form>

    <!-- Add a button to navigate to buku.php -->
    <button onclick="location.href='tampilan_buku.php'">Tampil Buku</button>
</body>
</html>
