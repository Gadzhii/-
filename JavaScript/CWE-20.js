const express = require('express');
const bodyParser = require('body-parser');

const app = express();
app.use(bodyParser.json());

let users = [];

app.post('/register', (req, res) => {
    const { username, email, age } = req.body;

    // Уязвимость: Нет проверки корректности введенных данных
    if (!username || !email || !age) {
        return res.status(400).send('All fields are required');
    }

    users.push({ username, email, age });
    res.status(201).send('User registered successfully');
});

app.get('/users', (req, res) => {
    res.json(users);
});

app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
