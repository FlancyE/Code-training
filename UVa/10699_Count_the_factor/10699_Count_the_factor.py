#10699 Count the factor
def count_factor(n):
    count = 0
    for i in range(2, n):
        if n % i == 0:
            count += 1
    return

while True:
    try:
        n = int(input())
        print(count_factor(n))
        if n == 0:
            break
    except EOFError:
        break
