# a = int(input())
# b = int(input())
# print("%d\n%d\n%d\n%d" % (a*(b%10), a*(b%100//10), a*(b//100), a*b))

a = int(input())
b = input()
print("%d\n%d\n%d\n%d" % (a*int(b[2]), a*int(b[1]), a*int(b[0]), a*int(b)))