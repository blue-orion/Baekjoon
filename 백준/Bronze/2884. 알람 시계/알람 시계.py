time = input().split(" ")
hour = int(time[0])
minute = int(time[1])
total = hour*60 + minute
if total >= 45:
    total = total - 45
    hour = total // 60
    minute = total % 60
    print("{} {}".format(hour, minute))
else:
    sub = 45 - total
    total = 1440 - sub
    hour = total // 60
    minute = total % 60
    print("{} {}".format(hour, minute))