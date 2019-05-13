# t = int(input())

# for _ in range(t):
#     n, k = input().strip().split(' ')
#     length = len(n)
#     i = length-1
#     index = length
#     flag = 0
#     if int(n[0]) > int(k):
#         flag = 1
#     else:
#         while i >= 0:
#             if int(n[i]) >= int(k):
#                 index = i
#                 i -= 1
#             else:
#                 if i == 0:
#                     break
#                 if int(n[i]) < int(n[i-1]):
#                     flag = 2
#                     index = i-1
#                     break
#                 elif int(n[i]) == int(n[i-1]):
#                     # index = i+1
#                     break
#                 else:
#                     # index = i+1
#                     break
#     # print('--', index)

#     if flag == 1:
#         print(k*length)
#     elif flag == 2:
#         print(n[:index]+n[index+1]+k*(length-index-1))
#     else:
#         if index == length-1:
#             print(n[:index]+k)
#         elif index > length-1:
#             print(n[:index])
#         else:
#             print(n[:index]+k*(length-index))

t = int(input())

for _ in range(t):
    n, k = input().strip().split(' ')
    n = sorted(n)
    # print(n)

    for i in range(len(n)):
        if int(n[i]) > int(k):
            n[i] = k

    print(''.join(n))