// Уязвимый JavaScript код с жестко заданными учетными данными
const hardCodedUsername = 'admin';
const hardCodedPassword = 'password123';

function authenticate(username, password) {
    if (username === hardCodedUsername && password === hardCodedPassword) {
        console.log('Аутентификация успешна!');
        // Продолжить действия с аутентификацией
    } else {
        console.log('Аутентификация не удалась!');
    }
}

// Пример использования
const inputUsername = 'admin'; // Обычно это приходит от пользовательского ввода
const inputPassword = 'password123'; // Обычно это приходит от пользовательского ввода

authenticate(inputUsername, inputPassword);
