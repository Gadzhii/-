def add_large_numbers(a, b):
    result = a + b
    return result

if __name__ == "__main__":
    max_int = 2**31 - 1  # Maximum value for a 32-bit signed integer
    a = max_int
    b = 1
    print(f"The result of adding {a} and {b} is: {add_large_numbers(a, b)}")
