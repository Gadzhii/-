<?php
class Database {
    private $host = 'localhost';
    private $db = 'my_database';
    private $user = 'admin';
    private $pass = 'password123'; // Жёстко закодированные учетные данные

    public function connect() {
        try {
            $pdo = new PDO("mysql:host=$this->host;dbname=$this->db", $this->user, $this->pass);
            $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
            return $pdo;
        } catch (PDOException $e) {
            echo 'Connection failed: ' . $e->getMessage();
        }
    }
}

$db = new Database();
$conn = $db->connect();
?>
