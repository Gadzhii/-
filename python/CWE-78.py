import os

def ping_host(host):
    # Уязвимая строка
    command = f"ping -c 4 {host}"
    os.system(command)

if __name__ == "__main__":
    user_input = input("Введите адрес хоста: ")
    ping_host(user_input)

def list_directory(directory):
    # Уязвимая строка
    command = f"ls {directory}"
    os.system(command)

if __name__ == "__main__":
    user_input = input("Введите директорию: ")
    list_directory(user_input)

def search_file(keyword, directory):
    # Уязвимая строка
    command = f"grep -r {keyword} {directory}"
    os.system(command)

if __name__ == "__main__":
    keyword = input("Введите ключевое слово для поиска: ")
    directory = input("Введите директорию для поиска: ")
    search_file(keyword, directory)