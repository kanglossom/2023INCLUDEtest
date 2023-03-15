#파이썬 입니다.
ID = [] #회원 아이디가 저장될 리스트
PW = [] #회원 비밀번호가 저장될 리스트
id_pw = {"F": "1"} #회원 아이디와 비밀번호가 딕셔너리 형식으로 저장될 리스트

def Login():
    reply_L = input("로그인 하시겠습니까? Y/N : ")
    if reply_L == "Y": #대답이 '예'일 때
        new_ID = input("아이디를 입력해 주세요 : ") #로그인 할 아이디 입력
        new_PW = input("비밀번호를 입력해 주세요 : ") #로그인 할 비밀번호 입력
        if new_ID in list(id_pw.keys()) and new_PW in list(id_pw.values()): #아이디와 비밀번호가 존재하는지 확인
            for i in range(1, 5):
                if ID.index(new_ID) == PW.index(new_PW): #아이디와 비밀번호가 맞는 짝인지 확인
                    print("성공적으로 로그인 되었습니다.")
                    break
                else:
                    print("틀리셨습니다.")
                    new_ID = input("아이디를 다시 입력해 주세요 : ")
                    new_PW = input("비밀번호를 다시 입력해 주세요 : ")
        else:
            print("틀리셨습니다.")
            Login()
    elif reply_L == "N": #대답이 '아니요'일 때
        M_join() # 회원가입 창으로 이동
    else:
        Login() #처음으로 다시

def M_join():
    print("회원가입을 진행합니다.")
    new_ID = input("아이디를 입력해 주세요 : ") #회원가입 할 아이디 입력
    for user in ID:
        if user == ID:
            new_ID = input(new_ID + "라는 아이디가 이미 존재합니다, 다시 입력해 주세요 : ") #회원가입 할 아이디 중복 확인
    new_PW = input("비밀번호를 입력해 주세요 : ") #회원가입 할 비밀번호 입력
    new_PW2 = input("비밀번호를 다시 입력해 주세요 : ") #회원가입 할 비밀번호 확인
    if new_PW != new_PW2:
        new_PW2 = input("비밀번호가 일치하지 않습니다, 다시 입력해 주세요 : ") #회원가입 할 비밀번호 일치 여부
    ID.append(new_ID) #회원 아이디 추가
    PW.append(new_PW) #회원 비밀번호 추가
    id_pw[new_ID] = new_PW #회원 아이디, 비밀번호 추가
    print("회원가입이 완료되었습니다, 감사합니다.\n")
    Login()
   
Login()
