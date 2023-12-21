def isprime(n):
    if n <= 1:
        return False
    for k in range(2, n):
        if n % k == 0:
            return False
    return True

def reversed_number(n):
    reversed_n = 0
    while n:
        reversed_n = reversed_n * 10 + n % 10   #左移一位 + n 的"餘數"
        n //= 10    # n = n // 10 (求 n 的商數，作為新的 n)
    return reversed_n

while True:
    try:
        n = int(input())
        if isprime(n):
            n1 = n
            n2 = reversed_number(n1)
            if n2 != n and isprime(n2):
                print(f"{n} is emrip.")    
            else:
                print(f"{n} is prime.")
        else:
            print(f"{n} is not prime.")

    except EOFError:
        break
        