from flask import Flask, request, jsonify, session

app = Flask(__name__)
app.secret_key = 'supersecretkey'

# Пример данных пользователей
users = {
    "admin": {
        "password": "admin123",
        "role": "admin"
    },
    "user": {
        "password": "user123",
        "role": "user"
    }
}

# Уязвимая функция аутентификации
def authenticate(username, password):
    if username in users and users[username]['password'] == password:
        session['username'] = username
        return True
    return False

@app.route('/login', methods=['POST'])
def login():
    username = request.form.get('username')
    password = request.form.get('password')
    
    if authenticate(username, password):
        return jsonify({"message": f"Welcome {username}!"})
    else:
        return jsonify({"message": "Authentication failed!"}), 401

@app.route('/admin', methods=['GET'])
def admin():
    if 'username' in session:
        username = session['username']
        # Ошибка аутентификации: не проверяется пароль при доступе к админке
        if users[username]['role'] == 'admin':
            return jsonify({"message": "Welcome to the admin panel!"})
        else:
            return jsonify({"message": "Access denied!"}), 403
    return jsonify({"message": "You are not logged in!"}), 401

if __name__ == '__main__':
    app.run(debug=True)
