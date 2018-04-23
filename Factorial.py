
import math
L = [1000]
sum = 0
N = int(raw_input())
i = 0
while i<N:
    x = int(raw_input())
    L[i] = x
    i  = i + 1
for j in range(0,N):
    x = math.factorial(L[j])
    sum = sum + x
res = sum % 107
print res