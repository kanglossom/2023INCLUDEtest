print("음식을 추천해 드릴게요!")
# 사용자로에게 원하는 음식의 종류, 맛, 온도에 대해서 묻는다
food_type = input("먹고 싶은 음식의 종류를 입력하세요 (한식, 중식, 양식, 일식 ): ")
taste = input("어떤 맛을 원하시나요? (매운맛, 달콤한맛 중 하나): ")
temperature = input("뜨거운 음식이나 차가운 음식 중 어떤 것을 원하시나요? (뜨거운 음식, 차가운 음식 중 하나): ")

# 각 나라별로 추천해줄 음식 목록
korean_foods = ["김치찌개", "불고기","홍시","매운 비빔냉면"]
chinese_foods = ["짜장면", "짬뽕", "양장피","없음"]
japanese_foods = ["타코야끼", "매운 일본식 카레", "없음", "초밥"]
western_foods = ["스테이크", "매운 리조또", "아이스크림","없음"]

# 사용자가 선택한 음식 종류에 따라서 추천한다
if food_type == "한식":
    # 사용자가 선택한 온도에 따라서 음식을 추천한다
    if temperature == "뜨거운 음식":
         recommended_food =  korean_foods[0] if taste == "매운맛" else korean_foods[1] 
    else:  
        recommended_food =  korean_foods[3] if taste == "매운맛" else korean_foods[2] 
elif food_type == "중식":
    if temperature == "뜨거운 음식":
        recommended_food = chinese_foods[1] if taste == "매운맛" else chinese_foods[0] 
    else:
        recommended_food = chinese_foods[3] if taste == "매운맛" else chinese_foods[2]
elif food_type == "일식":
    if temperature == "뜨거운 음식":
        recommended_food = japanese_foods[1] if taste == "매운맛" else japanese_foods[0] 
    else:
        recommended_food = japanese_foods[2] if taste == "매운맛" else japanese_foods[3]
else:
    if temperature == "뜨거운 음식":
        recommended_food = western_foods[1] if taste == "매운맛" else western_foods[0] 
    else:
        recommended_food = western_foods[3] if taste == "매운맛" else western_foods[2]

# 추천 음식을 출력한다
print("추천하는 음식은 {}입니다. 맛있게 드세요!".format(recommended_food))

 이 프로그램은 파이썬을 통해서 만들었습니다. 이 프로그램을 만든 이유는 평소에 배달 음식을 시킬 때 저는 어떤 음식을 시켜먹을지 고민하느라 시간을 많이 사용했었습니다. 그래서 그러한 고민을 줄이고자 그날 내가 어떤 종류와 어떤 맛의 음식을 먹고 싶은지 선택해서 음식을 추천해주는 프로그램을 만들어보고자 했습니다. 
