import random


list_all = [] # 모든 수를 저장할 리스트
number_count = [] # 각 수가 몇 번 나왔는지 확인하는 리스트
origin_number_count = [] # number_count는 sorting을 할 것이기 때문에 원래의 값을 보존하고 있을 리스트
for i in range(1000):
    
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

for i in range(len(number_count)):
    origin_number_count.append(number_count[i])

number_count.sort(reverse = True) # sorting 해주면 index 0~5까지가 제일 순서대로 제일 큰 수 이다.


print("origin_number_count :",origin_number_count)
print("number_count :",number_count)

# 로또 번호는 1부터 시작하고 index는 0부터 시작하므로 구한 index에 1을 더해 출력한다.
for i in range(6):
    print(origin_number_count.index(number_count[i])+1)
