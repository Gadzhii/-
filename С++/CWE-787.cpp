#CWE-787: Out-of-bounds Write

#Пример 1: Неправильное использование индексации списка

def write_to_list(index, value):
    my_list = [0] * 10  # Список из 10 элементов
    if index < 0 or index >= len(my_list):
        print("Index out of bounds!")
    else:
        my_list[index] = value
    return my_list

# Уязвимость: При вызове с индексом за пределами допустимого диапазона
print(write_to_list(15, 100))  # IndexError: list assignment index out of range

#Пример 2: Прямое обращение к массиву NumPy

import numpy as np

def write_to_array(index, value):
    arr = np.zeros(10)
    if index < 0 or index >= len(arr):
        print("Index out of bounds!")
    else:
        arr[index] = value
    return arr

# Уязвимость: При вызове с индексом за пределами допустимого диапазона
print(write_to_array(12, 5))  # IndexError: index 12 is out of bounds for axis 0 with size 10

#Пример 3: Неправильное управление буфером

def write_to_buffer(data, value):
    buffer = bytearray(10)  # Буфер из 10 байтов
    if data < 0 or data >= len(buffer):
        print("Buffer overflow attempt detected!")
    else:
        buffer[data] = value
    return buffer

# Уязвимость: При записи за пределы буфера
print(write_to_buffer(11, 255))  # IndexError: bytearray index out of range

#Пример 4: Уязвимость при конкатенации строк

def concatenate_strings(base_string, extra_string, max_length):
    if len(base_string) + len(extra_string) > max_length:
        print("Concatenation exceeds buffer limit!")
    else:
        base_string += extra_string
    return base_string

# Уязвимость: Допущение, что длина строки не превысит максимальную
print(concatenate_strings("hello", " world", 10))  # В результате "hello world", что превышает максимальную длину 10

#Пример 5: Работа с массивами из библиотеки array

from array import array

def write_to_array(arr, index, value):
    if index < 0 or index >= len(arr):
        print("Index out of bounds!")
    else:
        arr[index] = value
    return arr

arr = array('i', [0] * 10)

# Уязвимость: При записи за пределами массива
print(write_to_array(arr, 20, 5))  # IndexError: array assignment index out of range
