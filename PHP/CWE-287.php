<?php
// A hardcoded username and password for demonstration purposes
$hardcoded_username = "admin";
$hardcoded_password = "password123";

// Retrieving user input from a form (in a real scenario, this would come from POST data)
$input_username = $_POST['username'];
$input_password = $_POST['password'];

// Improper authentication check
if ($input_username == $hardcoded_username && $input_password == $hardcoded_password) {
    echo "Authentication successful! Welcome, " . htmlspecialchars($input_username) . "!";
} else {
    echo "Authentication failed. Invalid username or password.";
}
?>
