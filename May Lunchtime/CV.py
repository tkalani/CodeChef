def isConsonant(val):
    l = ['a', 'e', 'i', 'o', 'u']
    return True if val not in l else False

def isVowel(val):
    l = ['a', 'e', 'i', 'o', 'u']
    return True if val in l else False

for _ in range(int(input())):
    n = int(input())
    s = input()
    count = 0
    for i in range(0, n-1):
        if isConsonant(s[i]) and isVowel(s[i+1]):
            count += 1
    print(count)