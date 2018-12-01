def EEA(a,b):
    r1 = a
    r2 = b
    s1 = 1
    s2 = 0
    t1 = 0
    t2 = 1

    while(r2>0):
        q = r1 // r2
        r = r1 % r2
        r1,r2 = r2,r

        s = s1 - q * s2
        s1,s2 = s2,s

        t = t1 - q * t2
        t1,t2 = t2,t

        print("{} = {}*({}) + {}*({})".format(r1, a,s1,b,t1))

EEA(161,28)