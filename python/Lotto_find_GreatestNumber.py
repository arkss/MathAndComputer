import random

"""
f=open('C:/Users/sochu/OneDrive/lottotest.txt') 경로 바꿔주기
a=f.read() # 모든 줄을 다 읽는다.
f.close()
print(a)
split =a.split()
print(split)
resultlist=[]
for i in range(len(split)):
    resultlist.append(int(split[i]))
print(resultlist)

"""


list_all = [] # 모든 수를 저장할 리스트
number_count = [] # 각 수가 몇 번 나왔는지 확인하는 리스트
number_count_flatten = [] 
# number list를 평탄화한 리스트/ 여태까지 데이터에서 1이 3번 나왔으면 1을 3번 넣어준다.
answer = [] # 최종 결과값을 담을 리스트

# 총 1000회 data를 생성
for i in range(10):
    
    list = []
    count = 0
    while 1:
        number = random.randint(1,45)
        if number in list: # 이미 뽑은 수라면 continue
            continue
        else: # 뽑은 수가 아니면
            list.append(number) # list에 추가하고 
            list_all.append(number) # list_all 에 모든 값 저장
            count += 1 # count를 1씩 증가
        if count == 6: # count 가 6이 되면 종료
            break
    print(list)
    
print("list_all", list_all)


# 1부터 45까지의 수들이 각각 총 몇 번 나왔는지 
for i in range(1,46):
    number_count.append(list_all.count(i))

print("number_count :",number_count)


for i in range(45):
    # 해당 숫자가 한 번도 나오지 않았으면 다음 숫자로 넘어간다.
    if number_count[i] == 0:
        continue
    # 해당 숫자가 나온 count 만큼 반복해서 number_count_flatten 에 넣어준다.
    for j in range(number_count[i]):
        number_count_flatten.append(i+1)

print("number_count_flatten" ,number_count_flatten)

# number_count_flatten 에서 random하게 숫자 6개를 뽑는다.

while 1:
    # 0 부터 number_count_flatten 의 길이 중 랜덤한 수룰 뽑는다.
    random_number = random.randint(0,len(number_count_flatten)-1)
    if number_count_flatten[random_number] in answer :
        continue
    answer.append(number_count_flatten[random_number])
    if len(answer) == 6:
        break

print("answer :" , answer)








