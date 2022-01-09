import sys
input = sys.stdin.readline

input_n = int(input())
n = input_n
count = 0

while True:
    nl = n // 10
    nr = n % 10
    n = (nr*10) + (nl+nr)%10

    count += 1
    if n == input_n: break

print(count)
