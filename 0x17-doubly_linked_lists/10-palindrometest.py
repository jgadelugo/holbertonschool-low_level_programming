def check_pali(pali):
    return (pali[::-1] == pali)


def highest_pali():
    for i in range(998001, 10000, -1):
        if check_pali(str(i)) == False:
            continue
        for j in range(999, 99, -1):
            module = i % j
            if (int(i / j) > 999 or int(i / j) < 100):
                continue
            if (module != 0):
                continue
            print(i)
            return
    print("never")
highest_pali()