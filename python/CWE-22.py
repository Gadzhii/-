import os

def read_file(filename):
    # Каталог, в котором должны находиться файлы
    base_directory = "/safe_directory/"
    
    # Путь к файлу, который необходимо прочитать
    file_path = os.path.join(base_directory, filename)
    
    try:
        with open(file_path, 'r') as file:
            return file.read()
    except FileNotFoundError:
        return "File not found."
    except Exception as e:
        return str(e)

# Входной файл запрашивается у пользователя
user_input = input("Enter the filename: ")

# Чтение содержимого файла
file_content = read_file(user_input)
print(file_content)
