def dereference_null_pointer():
    ptr = None  # Инициализируем "указатель" как None
    print(ptr.some_method())  # Попытка вызова метода на None, что вызовет AttributeError

dereference_null_pointer()
