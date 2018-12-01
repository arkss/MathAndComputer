
def gcd(a,b):
    if a<b: # 큰 수가 앞에 오도록 값 교환
        a,b = b,a
    while b != 0: # 나머지가 0이 될 때
        a,b = b, a% b
    return a # 나눈 수를 return

answer = gcd(240,26)
print(answer) # 2
