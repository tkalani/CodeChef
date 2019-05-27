for _ in range(int(input())):
    s = input()

    set_s = set(list(s))

    if len(set_s) == 0:
        print("!DPS")
    elif len(set_s) <= 3:
        print("DPS")
    else:
        print("!DPS")

    # if len(set_s)==1:
    #     if list(set_s)[0] == 'a':
    #         if len(s)%2 != 0:
    #             print("DPS")
    #         else:
    #             print("!DPS")
    #     else:
    #         print("!DPS")
    # else:
    #     print("!DPS")