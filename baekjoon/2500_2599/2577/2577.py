import sys
input = sys.stdin.readline

a, b, c = [int(input()) for i in range(3)]
multiply = a * b * c
arr = [0] * 10

while multiply > 0:
    temp = multiply % 10
    arr[temp] += 1
    multiply //= 10

for i in range(10):
    print(arr[i])
