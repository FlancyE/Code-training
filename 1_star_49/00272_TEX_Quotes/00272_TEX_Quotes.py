#272 TEX Quotes
count = 0 # 記得放在最外圍，不要歸0
while True:
    try:
        s = list(input())
        for i in range(len(s)):
            if s[i] == '"':
                if count % 2 == 0: 
                    s[i] = '``'
                else:
                    s[i] = "''"
                count += 1
        print(''.join(s))
    except EOFError:
        break
    
