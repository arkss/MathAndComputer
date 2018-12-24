import random

def Miller_Rabin(n):
    m = 0
    k = 0
    p = n - 1
    while 1:
        if p % 2 == 0:
            k += 1
            p = p / 2
        else:
            m = p
            break
    a = random.randint(2,n-2)
    
    T = pow(a,int(m),n)
    if (T == 1) and (T == n-1):
        return "prime"
    for i in range(1,k):
        
        T = pow(T,2,n)
        if T == 1:
            return "composite"
        if T == n-1:
            return "prime"
    
    return "composite"
    
    
answer = Miller_Rabin(13)
print(answer)