import random

list_all = [] # 모든 수를 저장할 리스트
number_count = [] # 각 수가 몇 번 나왔는지 확인하는 리스트
number_count_flatten = [] 
# number list를 평탄화한 리스트/ 여태까지 데이터에서 1이 3번 나왔으면 1을 3번 넣어준다.
answer = [] # 최종 결과값을 담을 리스트

# 파일로 부터 읽어오기
f=open('LottoNumber.txt','r') 
a=f.read() # 모든 줄을 다 읽는다.
f.close()

LottoNumberList =a.split()


for i in range(len(LottoNumberList)):
    list_all.append(int(LottoNumberList[i]))


# 1부터 45까지의 수들이 각각 총 몇 번 나왔는지 
for i in range(1,46):
    number_count.append(list_all.count(i))


for i in range(45):
    # 해당 숫자가 한 번도 나오지 않았으면 다음 숫자로 넘어간다.
    if number_count[i] == 0:
        continue
    # 해당 숫자가 나온 count 만큼 반복해서 number_count_flatten 에 넣어준다.
    for j in range(number_count[i]):
        number_count_flatten.append(i+1)


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








