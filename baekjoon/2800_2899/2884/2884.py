hour, minute = map(int, input().split())
alarm = 45

if minute < alarm:
    minute += 60

    if hour == 0:
        hour = 23
    else:
        hour -= 1

print(hour, minute-alarm)