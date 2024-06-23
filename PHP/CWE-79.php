<!DOCTYPE html>
<html>
<head>
    <title>Vulnerable to XSS</title>
</head>
<body>
    <h1>Vulnerable to XSS</h1>
    <form method="get" action="">
        <label for="userInput">Enter something:</label>
        <input type="text" id="userInput" name="userInput">
        <input type="submit" value="Submit">
    </form>
    <div id="output">
        <?php
        if (isset($_GET['userInput'])) {
            $userInput = $_GET['userInput'];
            echo "User Input: " . $userInput; // This line is vulnerable to XSS
        }
        ?>
    </div>
</body>
</html>
