f=open('LottoNumber.txt') 
a=f.read() # 모든 줄을 다 읽는다.
f.close()

LottoNumberList =a.split()

resultlist=[]
for i in range(len(split)):
    resultlist.append(int(split[i]))

