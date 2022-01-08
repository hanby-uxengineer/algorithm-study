import sys

input = sys.stdin.readline
n, x = map(int, input().split())
numList = list(map(int, input().split()))

for i in range(n):
    if numList[i] < x:
        print(numList[i], end=" ")
