#include<stdio.h>
void sequence(int x, int y){
    int k;
    for(k=0;k<11;k++){
        printf("%d\n",x+y*k);
    }
}
//첫째항 x, 공차 y인 x부터 10번째항까지의 등차수열을 구하는 함수

main(){
    int a,d;
    printf("첫째항:");
    scanf("%d",&a); //첫째항를 입력받는다
    printf("공차:");
    scanf("%d",&d); //공차를 입력받는다
    sequence(a,d);
}

수학I에서 등차수열에 대해 공부했는데, 직접 일반항을 구하지 않아도 첫째항과 공차를 입력하면 등차수열을 한 눈에 볼 수 있는 프로그램을 만들면 흥미로울 것 같아 개발하였습니다.
