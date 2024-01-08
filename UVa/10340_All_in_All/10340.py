#UVa10340 - All in All
while True:
    try:
        s, t = input().split()
    except EOFError:
        break
    
    sindex = 0
    for i in range(len(t)):
        if t[i] == s[sindex]:
            sindex += 1
            if sindex == len(s):
                break
    if sindex == len(s):
        print("Yes")
    else:
        print("No")