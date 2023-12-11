<?php
require('rb.php');

R::setup('mysql:host=localhost;dbname=buku', 'root', '');

if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['id'])) {
    $bookId = $_POST['id'];
    $judulBuku = $_POST['judul_buku'];
    $pengarangBuku = $_POST['pengarang_buku'];

    // Retrieve the book with the specified ID
    $book = R::load('book', $bookId);

    if ($book->id != 0) {
        // Update book information
        $book->judul_buku = $judulBuku;
        $book->pengarang_buku = $pengarangBuku;

        // Store the updated book in the database
        R::store($book);

        // Redirect back to the book display page
        header("Location: tampilan_buku.php");
        exit();
    } else {
        echo '<p>Buku tidak ditemukan.</p>';
    }
} else {
    echo '<p>Permintaan tidak valid.</p>';
}
?>
