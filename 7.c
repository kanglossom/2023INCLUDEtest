#include<stdio.h>
main(){
        int a,i;
        int num[15];
        char one[100]="평소에 근육이 긴장되고 아프다.\n";
        char two[100]="잠이 잘 안 오고 불면증이 심해졌다.\n";
        char three[100]="소화가 잘 안되고 식욕이 줄었다.\n";
        char four[100]="쉽게 짜증이 나고 기분 변동이 심하다.\n";
        char five[100]="얼굴이 거칠어지고 민감해지는 편이다.\n"; 
        char six[100]="매사에 자신감이 부족해졌다.\n";
        char seven[100]="뭐든 쉽게 피로해져서 힘들다.\n";
        char eight[100]="매사에 집중이 어렵고 학습 능력이 떨어졌다.\n";
        char nine[100]="별다른 이유 없이 불안하고 초조하다.\n";
        char ten[100]="기억력이 나빠져서 자주 잊어버린다.\n"; 
        //질문들을 변수에 담은 까닭은 한 번에 간편하게 볼 수 있게 하기 위함입니다. 
        
        num[0]=0;
        
        printf("스트레스 자가 진단 테스트\n");
        printf("총 15문항 입니다.\n\n");
        printf("전혀 그렇지 않다.(0점) 그렇지 않다.(1점) 그렇다.(2점) 매우 그렇다.(3점)\n\n");
        printf("1. %s",one); 
        scanf("%d",&num[1]);
        printf("2. %s",two);
        scanf("%d",&num[2]);
        printf("3. %s",three);
        scanf("%d",&num[3]); 
        printf("4. %s",four);
        scanf("%d",&num[4]); 
        printf("5. %s",five);
        scanf("%d",&num[5]); 
        printf("6. %s",six);
        scanf("%d",&num[6]); 
        printf("7. %s",seven);
        scanf("%d",&num[7]); 
        printf("8. %s",eight);
        scanf("%d",&num[8]); 
        printf("9. %s",nine);
        scanf("%d",&num[9]); 
        printf("10. %s",ten);
        scanf("%d",&num[10]); 
        //변수에 담겨있는 질문들이 각각 번호에 맞춰 나온 후 숫자를 입력 받습니다. 
        
        for(i=1;i<=10;i++){
                num[0]=num[0]+num[i];
        }
        //각각 입력받은 숫자들을 모두 합칩니다. 
        
        printf("당신의 결과: ");
        if(num[0]<=13){
                printf("정상적인 상태이며 심리적으로 안정되어 있습니다.");
        }else if(num[0]<=16){
                printf("심각하진 않으나 스트레스가 약간 쌓여있습니다.");
        }else if(num[0]<=20){
                printf("정신건강에 빨간불이 들어올 정도로 힘든 상태입니다.");
        }else{
                printf("일상 생활이 어려울 수 있는 단계로 전문가와의 상담이 필요합니다.");
        }
        //입력받은 숫자들의 합에 따라 결과가 다르게 나타납니다. 
        
}

이 프로그램은 15개의 문항들을 읽고 자신의 상태에 맞춰 점수를 입력하면 그를 합한 값에 따라 스트레스 결과를 알려주는 것입니다. 의도는 요즘 주변 친구들과 sns 등을 통해 학업, 친구 관계, 진로 등으로 인해 스트레스를 받는 학생들이 많다는 것을 느껴 그런 학생들이 자신의 스트레스 지수를 간편하게 확인하여 그에 알맞은 조치를 빠르게 취할 수 있도록 하고자 이렇게 자신의 상태를 진단할 수 있는 프로그램을 직접 만들게 되었습니다.
