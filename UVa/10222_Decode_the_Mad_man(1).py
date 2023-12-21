keyboard = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"

try:
    while True:
        line = input()

        for char in line:
            if 'A' <= char <= 'Z':
                char = char.lower()

            if char == keyboard[0]:
                print(" ", end="")
            else:
                for j in range(len(keyboard)):
                    if char == keyboard[j]:
                        print(keyboard[j-2], end="")
        print()
        
except EOFError:
    pass

