#include<stdio.h>
int main()
{
   int num1,num2;
   char kuka1;
   scanf("%d%c%d",&num1,&kuka1,&num2);
   if(kuka1=='*')
   { 
        printf("%d", num1*num2);
   }
   else if(kuka1=='/')
{   
        printf("%.2lf",(double)num1/num2);
}
    else if(kuka1=='+')
    { 
       printf("%d",num1+num2);
   }
   else if(kuka1=='-')
   { 
       printf("%d",num1-num2);
   } 
}
저는 dev c++에서 if문과 else if 문을 사용하여서 이러한 소스코드를 만들었습니다. 먼저 이 프로그램은 기본적인 계산기로 사칙연산만을 할 수 있게 끔 만들어 보았습니다. 먼저 숫자를 입력받을 변수 2개 int num1,num2; 와 연산기호를 입력받을 변수 1개 char kuka1; 선언해준 후 정수,문자,정수 순서로 입력받은뒤 kuka1 변수안에 들어오는 값에 따라 결과값이 다르게 나오게 하였습니다 그러하여서 if문과 else if문을 사용하여 그 문자값에 따라서 printf 가 되도록 만들어 보았습니다. 정수의 더하기와 빼기 또 곱하기의 결과값은 항상 정수로 나오지만, 나누기의 결과값은 실수로 나올 수 있기에 형변환을 이용하여 num1과 num2 변수 형태를 double로 바꾼 후 %.2lf를 이용하여 소수 둘째자리까지 출력 하도록 하였습니다.
