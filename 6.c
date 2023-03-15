#include<stdio.h>
main(){
        int a,b,c,d,e,f,g,h,j;
        f=0;
        
        printf("자기소개하겠습니다!!\n\n\n\n\n");
        
        printf("1,ㅇㅇㅇ의 MBTI는 무엇일까요?\n1,enfj 2,estp 3,intp 4,istj 5,istp\n");
        for(g==0;g<100;g++){             //정답을 맞출 때까지 반복 
                scanf("%d",&a);              //답하기 
                if(a>=1&&5>=a){              //답 외 숙자 제거 
                        
                        if(a==5){                //맞았는지 틀렸는지 확인 
                        
                                printf("정답!!!\n\n\n\n");
                                g=100;
                        }else{
                                printf("땡!\n");
                                f=f+1;
                        }
                }else{
                        printf("1~5중에서 골라주세요.\n");
                        
                }
        }
        
        
        
        printf("2,제일 성적이 높은 과목은?\n1,정보 2,국어 3,수학 4,통과 5,영어\n");
        for(h==0;h<100;h++){
                scanf("%d",&b);
                if(b>=1&&5>=b){
                        
                        if(b==1){
                        
                                printf("정답!!!\n\n\n\n");
                                h=100;
                        }else{
                                printf("땡!\n");
                                f=f+1;
                        }
                }else{
                        printf("1~5중에서 골라주세요.");
                }
        }
        printf("당신은 %d번 틀임.ㅠㅠ\n\n\n",f);
        
        printf("시간이 없어서 이런 것 밖에 못했는데 열십히 하겠습니다.");

}
저를 모르는 사람들에게 자기 소개 할려고 게임 감각으로 재밌게 소개하기 위해 
늦어서 죄송합니다...
