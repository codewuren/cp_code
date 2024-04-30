def is_prime(x):
    if x == 1:
        return False
    elif x == 2:
        return True
    elif x % 2 == 0:
        return False
    for i in range(3, int(x ** 0.5) + 1, 2):
        if x % i == 0:
            return False
    return True

def main():
    num = int(input())
    n = num
    ans = 1
    while n != 0:
        if is_prime(n):
            print(n)
            ans *= n
        n -= 1
    print(ans % 50000, end='')

if __name__ == "__main__":
    main()