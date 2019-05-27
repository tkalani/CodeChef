n, trans = input().strip().split(' ')
n = int(n)

s = 'abcdefghijklmnopqrstuvwxyz'

for _ in range(n):
    arr = []
    for i in list(input()):
        if i == "_":
            arr.append(" ")
        elif i in ['.', '?', '!', ',', ';', ':', '-', '(', ')', '{', '}', '[', ']']:
            arr.append(i)
        else:
            if i.isupper():
                arr.append(trans[s.find(i.lower())].upper())
            else:
                arr.append(trans[s.find(i.lower())].lower())
    print(''.join(arr))
