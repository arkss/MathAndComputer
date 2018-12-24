import random
##from random import randrange

def gcd(a,b):
    while b!=0:
        a,b = b, a%b
    return a

def e_gcd(a,b):
    r1, r2 = a, b
    s1, s2 = 1, 0
    t1, t2 = 0,1
    while ( r2 > 0):
        q = r1//r2
        r = r1-q*r2
        r1, r2 = r2, r
        s = s1-q*s2
        s1, s2 = s2, s
        t = t1-q*t2
        t1, t2 = t2, t
    return(r1, s1, t1)
    

# 그냥 소수 판별
def TT(n):
    if (n % 2)==0:
##        print('2 is a divisor')
        return False
    m=int(n**0.5)
    i=3
    while i  <=  m:
        if (n % i)==0:
##            print(i,' is a divisor')
            return False
        i=i+2
##        print(i)
    return True

# 1000까지만 소수 판별
def TT1(n):
    if (n % 2)==0:
        return False
    m=1000
    i=3
    while i  <= m:
        if (n % i)==0:
            return False
        i=i+2
    return True

# 밀러라빈
def MR(n):
    k=0
    b=n-1
    while (b % 2)==0:
        k=k+1
        b = b >> 1
    a = random.randrange(2,n-1)
    T = pow(a,b,n)
    if T==1 or T==n-1:
        return True
    for i in range(k-1):
        T = pow(T,2,n)
        if T==1:
            return False
        if T==n-1:
            return True
    return False

# trivial과 밀러라빈 조합해서 판별
def PT(n):
    if TT1(n)==False:
        return False
    for i in range(20):
        if MR(n)==False:
##            print(i,'-th MR test is failed')
            return False
    return True

def PG(bitsize):
    global p,q
    p = random.randrange(2**(bitsize-1),2**bitsize-1)
    while (PT(p)==False):
        p=p+1
    q = random.randrange(2**(bitsize-1),2**bitsize-1)
    while (PT(q)==False):
        q=q+1
    return (p,q)

def rsa_key(p,q):
    n=p*q
    phi=(p-1)*(q-1)
    e = random.randrange(2, phi)
    g = gcd(e, phi)
    while g!=1:
        e = random.randrange(2, phi)
        g = gcd(e, phi)
    (a,b,c)=e_gcd(e,phi)
    d = b % phi
    return ((e,n),(d,n))

##한 글자를 한블록으로 암호화
def rsa_enc(ek, pt):
    ct = [pow(ord(i), ek[0], ek[1]) for i in pt]
    return ct

def rsa_dec(dk, ct):
    pt = ''
    a = [chr(pow(i, dk[0], dk[1])) for i in ct]
    for i in a:
        pt +=i
    return pt


## string을 큰수로 변환하여 암호황 : 'abc' -> 0x616263 
def rsa_enc2(ek,pt): 
    ct = pow(pt, ek[0], ek[1])
    return ct

def rsa_dec2(dk,ct):
    pt = pow(ct,dk[0], dk[1])
    return pt

def str_to_num(abc):
    num=0
    a = [ord(i) for i in abc]
    for i in a:
        num = (num << 8) + i
    return num

def num_to_str(num):
    a=''
    while(num !=0):
        a += chr(num & 0xff)
        num = num >> 8
    a = a[::-1]
    return a

    

if __name__ == '__main__':
    PG(1024)
    ek,dk = rsa_key(p,q)
    print("p -> ", p)
    print("q ->  ", q)

    pt = 'to be or not to be'
    num = str_to_num(pt)
    print("\n PT -> ",hex(num))

    ct = rsa_enc2(ek,num)
    print("\n CT -> ",ct)

    num = rsa_dec2(dk,ct)
    pt2 = num_to_str(num)
    print("\n PT -> ",pt2)

else:
    print('rsa.py is imported!')




    
    
    
    
