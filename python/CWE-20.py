import re

class User:
    def __init__(self, username, email, age):
        self.username = username
        self.email = email
        self.age = age

    def __str__(self):
        return f"Username: {self.username}, Email: {self.email}, Age: {self.age}"

class UserManager:
    def __init__(self):
        self.users = []

    def add_user(self, username, email, age):
        if self.validate_username(username) and self.validate_email(email) and self.validate_age(age):
            user = User(username, email, age)
            self.users.append(user)
            print("User added successfully!")
        else:
            print("Invalid user data")

    def validate_username(self, username):
        # Уязвимость: не проверяет длину имени пользователя
        return re.match(r"^[a-zA-Z0-9_]+$", username) is not None

    def validate_email(self, email):
        # Уязвимость: не проверяет полную корректность email
        return "@" in email and "." in email

    def validate_age(self, age):
        # Уязвимость: не проверяет диапазон возраста
        return age.isdigit()

    def find_user(self, username):
        for user in self.users:
            if user.username == username:
                return user
        return None

    def display_users(self):
        for user in self.users:
            print(user)

def main():
    manager = UserManager()

    while True:
        print("1. Add User")
        print("2. Find User")
        print("3. Display Users")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            username = input("Enter username: ")
            email = input("Enter email: ")
            age = input("Enter age: ")
            manager.add_user(username, email, age)
        elif choice == '2':
            username = input("Enter username to find: ")
            user = manager.find_user(username)
            if user:
                print(user)
            else:
                print("User not found")
        elif choice == '3':
            manager.display_users()
        elif choice == '4':
            break
        else:
            print("Invalid choice, please try again")

if __name__ == "__main__":
    main()
