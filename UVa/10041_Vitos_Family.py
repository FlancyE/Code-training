#Vito's Family

def main():
    cs = int(input())
    for _ in range(cs):
        n = int(input())
        s = list(map(int, input().split()))
        s.sort()
        median = s[n // 2]
        total_diff = 0
        for k in range(n):
            total_diff += abs(s[k] - median)
        print(total_diff)

if __name__ == "__main__":
    main()