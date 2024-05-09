#10642_Can_you_solve _it
def loc(x, y):
    return (x + y) * (x + y + 1) // 2 + x

def main():
    n = int(input())
    for t in range(1, n + 1):
        x1, y1, x2, y2 = map(int, input().split())
        result = loc(x2, y2) - loc(x1, y1)
        print("Case {}: {}".format(t, result))

main()

#PYTH3 AC 0.060