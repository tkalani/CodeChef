t = int(input())

for _ in range(t):
    n = int(input())
    a = [0]*n
    e = [0]*n
    i = [0]*n
    o = [0]*n
    u = [0]*n
    prev_index, full_string, count = 0, 0, 0
    for index in range(n):
        temp = input()
        a_count, e_count, i_count, o_count, u_count = 0, 0, 0, 0, 0
        for j in range(len(temp)):
            if temp[j] == "a":
                a_count += 1
            if temp[j] == "e":
                e_count += 1
            if temp[j] == "i":
                i_count += 1
            if temp[j] == "o":
                o_count += 1
            if temp[j] == "u":
                u_count += 1
        if(a_count and e_count and i_count and o_count and u_count):
            count += n-full_string-1
            full_string += 1
        else:
            a[prev_index] = a_count
            e[prev_index] = e_count
            i[prev_index] = i_count
            o[prev_index] = o_count
            u[prev_index] = u_count
            prev_index += 1
    for index in range(prev_index-1):
        for j in range(index+1, prev_index):
            if((a[index]+a[j]) and (e[index]+e[j]) and (i[index]+i[j]) and (o[index]+o[j]) and (u[index]+u[j])):
                count += 1
    print(count)