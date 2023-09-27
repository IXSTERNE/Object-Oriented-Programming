arr = [12, 4, 16, 4, 8]
n = len(arr)

def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)

def gcdArray(arr, n):
    result = arr[0]
    for i in range(1, n):
        result = gcd(arr[i], result)
        if result == 1:
            return 1
    return result

print(gcdArray(arr, n))