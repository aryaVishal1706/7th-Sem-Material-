<?php
session_start();

// Hardcoded credentials (for demonstration only)
$valid_username = "user";
$valid_password = "password";

// Retrieve POST data
$username = $_POST['username'] ?? '';
$password = $_POST['password'] ?? '';

// Check credentials
if ($username === $valid_username && $password === $valid_password) {
    $_SESSION['loggedin' ] = true;
    header("Location: welcome.php");
    exit();
} else {
    echo "<p class='text-danger text-center'>Invalid username or password</p>";
    echo "<a href='../index.php' class='d-block text-center mt-3'>Try again</a>";
}
?>
