s = list(input())
found = False
counter = 'a'
for i in range(len(s)):
    c = s[i]
    if c <= counter:
        s[i] = counter
        counter = chr(ord(counter)+1)
        if counter > 'z':
            print(''.join(s))
            found = True
            break

if not found:
    print(-1)


        
