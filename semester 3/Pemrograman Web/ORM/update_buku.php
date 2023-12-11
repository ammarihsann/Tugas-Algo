<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Update Buku</title>
    <link rel="stylesheet" href="CSS/update_buku.css">
</head>
<body>
    <h2>Update Buku</h2>

    <?php
    require('rb.php');

    R::setup('mysql:host=localhost;dbname=buku', 'root', '');

    if ($_SERVER['REQUEST_METHOD'] === 'GET' && isset($_GET['id'])) {
        $bookId = $_GET['id'];

        // Retrieve the book with the specified ID
        $book = R::load('book', $bookId);

        if ($book->id == 0) {
            echo '<p>Buku tidak ditemukan.</p>';
        }
    } else {
        echo '<p>Permintaan tidak valid.</p>';
    }
    ?>

    <form method="post" action="process_update_buku.php">
        <input type="hidden" name="id" value="<?php echo $book->id; ?>">
        Judul Buku: <input type="text" name="judul_buku" value="<?php echo $book->judul_buku; ?>"><br>
        Pengarang Buku: <input type="text" name="pengarang_buku" value="<?php echo $book->pengarang_buku; ?>"><br>
        <input type="submit" value="Update">
        <button type="button" onclick="location.href='tampilan_buku.php'" style="background-color:#4682B4; color: white;">Kembali ke Daftar Buku</button>
    </form>
</body>
</html>
