import sys

input = sys.stdin.readline
t = int(input())

for i in range(0, t):
    a, b = map(int, input().split())
    print("Case #%d: %d + %d = %d" % (i+1, a, b, a+b))
