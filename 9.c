#include <stdio.h>

int main(void) {
        int i = 0, n = 0, f = 0, j = 0;
        int answer;
        printf("새로운 친구를 사귀는 것이 어렵다. 1. 예 2. 아니오\n");
        scanf("%d" ,&answer);
        if(answer == 1 ) i++;
      
//사용자가 1을 고를 경우 i가 1이 된다.
        printf("평소에 현실성없는 상상을 자주 한다. 1. 예 2. 아니오\n");
        scanf("%d" ,&answer);
        if(answer == 1 ) n++;
   
//사용자가 1을 고를 경우 n가 1이 된다.
        printf("친구들에게 공감을 잘해준다. 1. 예 2. 아니오\n");
        scanf("%d" ,&answer);
        if(answer == 1 ) f++;
     
//사용자가 1을 고를 경우 f가 1이 된다.
        printf("어떤 일을 시작할 때 계획 부터 짠다. 1. 예 2. 아니오\n");
        scanf("%d" ,&answer);
        if(answer == 1 ) j++;

//사용자가 1을 고를 경우 j가 1이 된다.
        if(i == 1) printf("i");
        else printf("e");

//i의 값에 1이 저장되어 있다면 i가 출력되고 아니라면  e가 출력된다.
        if(n == 1) printf("n");
        else printf("s");

//i의 값에 1이 저장되어 있다면 n가 출력되고 아니라면  s가 출력된다.
        if(f == 1) printf("f");
        else printf("t");

//i의 값에 1이 저장되어 있다면 f가 출력되고 아니라면  t가 출력된다.
        if(j == 1) printf("j");
        else printf("p");

//i의 값에 1이 저장되어 있다면 j가 출력되고 아니라면  p가 출력된다.
}


요즈음 mbti가 첫만남 공식 질문일 정도로 mbti를 중요시하는 학생들이 많아 간단한 질문으로 mbti를 알 수 있는 프로그램을 만들고 싶어 코드를 짰습니다. mbti가 궁금한 친구들에게 프로그램을 사용하게 하여 mbti를 알아내는 데에 활용하고 싶습니다.          
 
