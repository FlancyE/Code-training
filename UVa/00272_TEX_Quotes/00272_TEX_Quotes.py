#272 TEX Quotes
c = 0
while True:
    try:
        n = list(input())
        for i in range(len(n)):
            if n[i] == '"':
                if c % 2 == 0:
                    n[i] == '``'
                else:
                    n[i] == "''"
                c += 1
        print(''.join(n))
    except EOFError:
        break
    
