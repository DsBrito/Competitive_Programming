

# vector at 10^9 cause this rule -> (1 ≤ n ≤ 9) and k (0 ≤ k < 10^n)
vec_k = [1, 10, 100, 1000, 10000, 100000,
         1000000, 10000000, 100000000, 1000000000]

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    while k // vec_k[n] > 0:
        k //= 10

    result = k
    set_k = set()
    while k not in set_k:
        set_k.add(k)
        k *= k
        while k // vec_k[n] > 0:
            k //= 10
        if k > result:
            result = k
    print(result)
s
