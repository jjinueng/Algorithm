t = int(input())
for i in range(t):
    ans = 1
    n, m = map(int, input().split())
    for j in range(int(n)):
        ans *= m - j
        ans /= j + 1
    print(int(ans))