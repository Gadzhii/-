<?php
session_start();

if (!isset($_SESSION['user_id'])) {
    die("Access denied");
}

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    if (isset($_POST['amount']) && isset($_POST['recipient'])) {
        $amount = $_POST['amount'];
        $recipient = $_POST['recipient'];

        // Важная операция перевода средств, уязвимая для CSRF
        $db = new PDO('mysql:host=localhost;dbname=mydb', 'username', 'password');
        $stmt = $db->prepare("UPDATE accounts SET balance = balance - ? WHERE user_id = ?");
        $stmt->execute([$amount, $_SESSION['user_id']]);

        $stmt = $db->prepare("UPDATE accounts SET balance = balance + ? WHERE user_id = ?");
        $stmt->execute([$amount, $recipient]);

        echo "Transfer completed";
    }
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Transfer Money</title>
</head>
<body>
    <form method="POST" action="">
        Amount: <input type="text" name="amount" /><br>
        Recipient: <input type="text" name="recipient" /><br>
        <input type="submit" value="Transfer" />
    </form>
</body>
</html>
