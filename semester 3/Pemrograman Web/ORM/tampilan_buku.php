<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Daftar Buku</title>
    <link rel="stylesheet" href="CSS/tampilan_buku.css">
</head>
<body>
    <h2>Daftar Buku</h2>

    <?php
    require('rb.php');

    R::setup('mysql:host=localhost;dbname=buku', 'root', '');

    // Check if the form is submitted for deletion or update
    if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['action'])) {
        $bookId = $_POST['id'];

        // Debugging: Check if this block is executed
        echo "Received ID for action: $bookId";

        // Check the action type
        if ($_POST['action'] === 'delete') {
            // Delete the book with the specified ID
            $book = R::load('book', $bookId);
            R::trash($book);
        } elseif ($_POST['action'] === 'update') {
            // Debugging: Check if this block is executed
            echo "Update action triggered. Debugging...";
            // Redirect to the update page with the book ID
            header("Location: update_buku.php?id=$bookId");
            exit();
        }
    }

    // Retrieve all books from the 'book' table
    $books = R::findAll('book');

    // Check if there are books to display
    if (!empty($books)) {
        echo '<table border="1">';
        echo '<tr><th>Judul Buku</th><th>Pengarang Buku</th><th>Action</th></tr>';

        foreach ($books as $book) {
            echo '<tr>';
            echo '<td>' . $book->judul_buku . '</td>';
            echo '<td>' . $book->pengarang_buku . '</td>';
            echo '<td>';
            echo '<form method="post">';
            echo '<input type="hidden" name="id" value="' . $book->id . '">';
            echo '<button type="submit" name="action" value="delete">Delete</button>';
            echo '<button type="submit" name="action" value="update">Update</button>';
            echo '</form>';
            echo '</td>';
            echo '</tr>';
        }

        echo '</table>';
    } else {
        echo '<p>Tidak ada buku yang tersedia.</p>';
    }
    ?>

    <!-- Add a button to navigate back to the input form -->
    <button onclick="location.href='input_buku.php'">Kembali ke Form Input</button>
</body>
</html>
