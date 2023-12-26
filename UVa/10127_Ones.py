#10127 Ones

def count_smallest(n):
    number = 1
    length = 1

    while number % n != 0:
        number = number * 10 + 1
        length += 1
    return length

while True:
    try:
        n = int(input())
        print(count_smallest(n))
    except EOFError:
        break