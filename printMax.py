print("Hello, World!")
N = int(raw_input())
M = int(raw_input())
X = int(raw_input())
Y = int(raw_input())
res = 1
for i in range(1,N,1):
    temp = i * X
    if temp == M:
     res = temp
print(res)