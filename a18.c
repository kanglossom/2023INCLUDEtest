#include<stdio.h>
main(){
        int num, i;
        int mul=1;
        printf("숫자를 입력하시오");
        scanf("%d",&num);
        
        for(i=1;i<=num;i++){   //1부터 입력한 수 num까지 수를 1씩 더해가며 곱한다.
                mul=mul*i;
        }
        printf("1부터 %d까지의 곱은 %d이다.", num, mul);
}
예전에 정보 시간에 1부터 입력한 수까지의 합을 구하는 코드를 작성한 적이 있는데 그걸 응용해서 곱을 구하는 코드를 작성해보고 싶었습니다.
