n = input()
for i in range(1, int(n) + 1):
    seconds = input()
    m, s = divmod(int(seconds), 60)
    h, m = divmod(m, 60)
    print ("%02d:%02d:%02d" % (h, m, s))