import math

def factorial(n):
    res = 1
    if n == 0:
        return 1
    for i in range(1, n+1):
        res *= i
    return res

def bellNumber(natural):
    values = [0] * 100
    values[0] = 1
    for n in range(1, natural):
        summa = 0
        for k in range(n+1):
            summa += factorial(n-1) // (factorial(k) * factorial(n - 1 - k)) * values[k]
        values[n] = summa
    return values[natural-1]

def main():
    sum = 0
    part_sum = 0
    k = 0
    for r in range(1, 30):
        print(bellNumber(r))

if __name__ == "__main__":
    main()