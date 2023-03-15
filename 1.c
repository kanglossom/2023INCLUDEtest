#include<stdio.h>
int main() {
    int menu;
    int a, b;
    while (1) {        //while을 써주어서 계산기가 끝나지 않게 해줌
        printf("MENU   1.덧셈   2.뺄셈   3.곱셈   4.나눗셈 5.종료\n");
        printf("숫자를 입력해주세요 : "); 
        scanf("%d", &menu);        // 조건문을 통해 알맞은 menu로 이동하기 위한 값을 받아줌
        if (menu == 1) {
            printf("두 수를 입력해주세요 : ");
            scanf("%d %d", &a, &b);
            printf("%d + %d = %d\n", a, b, a + b);        //두개의 인자를 받아주어 덧셈을 해줌
        }
        else if (menu == 2) {
            printf("두 수를 입력해주세요 : ");
            scanf("%d %d", &a, &b);
            printf("%d - %d = %d\n", a, b, a - b);        //두개의 인자를 받아주어 빼기을 해줌
        }
        else if (menu == 3) {
            printf("두 수를 입력해주세요 : ");
            scanf("%d %d", &a, &b);
            printf("%d * %d = %d\n", a, b, a * b);        //두개의 인자를 받아주어 곱셈을 해줌
        }
        else if (menu == 4) {
            printf("두 수를 입력해주세요 : ");
            scanf("%d %d", &a, &b);
            printf("%d / %d = 몫 : %d 나머지 : %d\n", a, b, a / b, a%b);        //두개의 인자를 받아주어 몫을 구하는 연산과 나머지를 구하는 연산을 처리함
        }
        else if (menu == 5) {    //while로 무한 반복문을 돌고 있으니 break를 통해 끝낼 수 있게 해줌
            break;
        }
    }
}
