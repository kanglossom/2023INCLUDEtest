#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
        int a=0;
        char b='0';
        double c=0.0;
    double d=0.0;
    int e=0;
    char f='0';
    int g=0; 
    int h=0;
    int i=0;
    int j=0;
    double k=0;
    double l=0;
    double n=0;
    char z='0';
    
    
        while(1)
        { 
        printf("┌────────────────┐\n");
    printf("│         다용도 계산기          │\n");
    printf("│  1: 사칙연산    2: 단위 변환   │\n");
    printf("│  3: 넓이 계산   4: 부피 계산   │\n");
    printf("│  0: 프로그램 종료              │\n");
    printf("└────────────────┘\n"); 
        printf("> 모드를 선택하세요: ");
        scanf("%d",&a);
        if(a==1)
        {
        printf("┌──────────────┐\n");
    printf("│       사칙 연산 모드       │\n");
    printf("│  +: 덧셈      -: 뻴셈      │\n");
    printf("│  *: 곱셈      /: 나눗셈    │\n");
    printf("│  %%: 나머지   m: 모드 선택  │\n");
    printf("└──────────────┘\n"); 
                printf("> 수행할 연산을 입력하세요: ");
            fflush(stdin);
                scanf("%c",&b);
                while(b!='m'){
                        
                printf("> 첫 번째 수를 입력하세요: ");//수 입력 후 사칙연산 계산 
                scanf("%lf",&c);
                printf("> 두 번째 수를 입력하세요: ");
                scanf("%lf",&d);  
                switch(b)
                 { 
                
                 case '+': 
                      printf(" ───────\n");
                         printf(" %g + %g = %g\n",c,d,c+d);
                         printf(" ───────\n");
                 break;
                 case '-':
                         printf(" ───────\n");
                         printf(" %g - %g = %g\n",c,d,c-d);
                         printf(" ───────\n");
                 break;
                 case '*':
                        printf(" ───────\n");
                        printf(" %g * %g = %g\n",c,d,c*d);
                        printf(" ───────\n");
                 break;
                 case '/':
                
                         if(d==0)
                         {
                                 printf("> 오류\n");
                         }
                         else
                         {
                          printf(" ───────\n");
                          printf(" %g / %g = %g\n",c,d,c/d);        
                          printf(" ───────\n");
                         }
                 break;
             case '%':
                         if(d==0)
                         {
                                 printf("> 오류\n");// 2번째 수가 0일 때 오류 
                         }
                         else
                         {
                          printf(" ───────\n");
                          printf(" %g %% %g = %g\n",c,d,fmod(c,d));        
                          printf(" ───────\n");
                         } 
                break;
                case 'm':
                        break;
                default:
                        printf("> 잘못된 값을 입력했습니다.\n"); 
                        }
                        printf("> 수행할 연산을 입력하세요: ");
            fflush(stdin);
                scanf("%c",&b);                
                }
        }
        else if(a==2)
        {
                
                while(1)
        { 
    printf("┌─────────────┐\n");
    printf("│       단위 변환 모드     │\n");
    printf("│   1: 길이     2: 시간    │\n");
    printf("│   3: 온도     4: 옛날 돈 │\n"); 
        printf("│   m. 모드 선택           │\n");
    printf("└─────────────┘\n"); 
        printf("> 변환할 것은 무엇인가요?:");  
        fflush(stdin);
                scanf("%c",&f); 
            if(f=='1')
            {
                printf("┌───────────────┐\n"); 
            printf("│1: cm -> inch   2. inch -> cm │\n");//길이 일때 방법 설정
            printf("└───────────────┘\n");
            printf("> 어떻게 변환할까요?:");//길이 일때 방법 설정
                scanf("%d",&e);
                   if(e==1)//cm을 inch로 전환
               {
                    printf("> 변환할 값을 입력하세요: ");
                   scanf("%lf",&c);
                   d=0.39*c;
                   
               printf("  ────────────\n");
                   printf("  %.2lf cm = %.2lf inch\n",c,d);
                   printf("  ────────────\n");
           }
               else if(e==2)//inch을 cm로 전환 
               {
                   printf("> 변환할 값을 입력하세요: ");
                   scanf("%lf",&c);
                   d=2.54*c;
                   printf("  ────────────\n");
                   printf("  0%.2lf inch = %.2lf cm\n",c,d);
                   printf("  ────────────\n");
           }
               else 
           { 
               printf("> 잘못된 값입니다.");
           }


}

        else if(f=='2')
        {
        printf("┌───────────────┐\n"); 
            printf("│1: 초 -> 시간   2. 시간 -> 초 │\n");//시간 일때 방법 설정
            printf("└───────────────┘\n");
            printf("> 어떻게 변환할까요?:");
            scanf("%d",&e);
        
                if(e==1)
                { 
                    printf("> 변환할 값을 입력하세요: ");//입력된 수를 시간으로  전환
                scanf("%d", &a);      
                g=a/3600;                          
                h=(a%3600)/60;
                i=(a%3600)%60;
            printf("%02d:%02d:%02d\n", g, h, i); 
            }
                else if(e==2)
                {
                printf("> 변환할 값을 입력하세요: ");//입력된 수를 초로  전환
                scanf("%d:%d:%d", &a,&g,&h);    
                j=3600*a;
            i=g*60;
            printf("──");
            printf("%d\n",j+i+h);
            printf("──");
            }
            else
            {
                printf("> 잘못된 값입니다.\n"); 
            }
        }
        else if(f=='3')
        {
            printf("┌────────────────┐\n"); 
            printf("│1: 섭씨 -> 화씨 2. 화씨 -> 섭씨 │\n");
            printf("└────────────────┘\n");//온도 일때 방법 설정

            printf("> 어떻게 변환할까요?:");
            scanf("%d",&e);
        
            if(e==1)//섭씨를 화씨로 전환
            {
                   printf("> 변환할 값을 입력하세요: ");
                   scanf("%lf",&d);
                c=(1.8*d)+32;
                printf("──────────────\n");
                printf("섭씨 %.2lf℃= 화씨 %.2lf℉\n",d,c);
                printf("──────────────\n");
                } 
        
            else if(e==2)//화씨를 섭씨로 전환
                {
                    printf("> 변환할 값을 입력하세요: ");
                    scanf("%lf",&c);
                    d=(c-32)/1.8;
                    printf("──────────────\n");
                    printf("화씨 %.2lf℉= 섭씨 %.2lf℃\n",c,d);
                        printf("──────────────\n");         
                } 
        
                else
                {
                    printf("> 잘못된 값입니다.\n");
                }
        
        }
        else if(f=='4')
                {
                printf("┌───────────────┐\n"); 
            printf("│1: 전 -> 원 + 전 2. 원 -> 전  │\n");
            printf("└───────────────┘\n");//돈 일때 방법 설정
                printf("> 어떻게 변환할까요?:");
                scanf("%d",&g);
                        if(g==1)
                        {
                        printf("> 변환할 값을 입력하세요: ");
                        scanf("%d",&h);
                        
                        i=h/100;
                        j=h%100;
                        printf("─────────\n");        
                        printf("%d전 = %d 원 %d 전\n",h,i,j);
                        printf("─────────\n");
                          }
                  else if(g==2)
                  {
                          printf("> 변환할 값을 입력하세요: ");
                        scanf("%d",&h);
                        i=h*100;
                        printf("──────\n");
                        printf("%d원 = %d전\n",h,i); 
                          printf("──────\n");
                  }else 
                  {
                  printf("> 잘못된 값입니다.\n");
                  }
            }
        else if(f=='m')
        {
            break;
        }        
                else
                {
                        printf("> 잘못된 입력입니다.\n"); 
        }
    }
        }
   else if(a==3)
   {
                   while(1)
        { 
        i:
    printf("┌───────────────┐\n");//다각형의 넓이를 여러 방법으로 계산 
    printf("│      넓이 계산  모드         │\n");
    printf("│  1: 삼각형   2: 삼각형(길이) │\n");
    printf("│  3: 사다리꼴 4: 직사각형     │\n");
    printf("│  5: 원       m: 모드 선택    │\n");
    printf("└───────────────┘\n"); 
    printf("> 도형을 선택하세요:"); 
        
            fflush(stdin);
                scanf("%c",&b);
                if(b=='m'){break;}
                while(b!='m'){
                        
                switch(b)
                 { 
         case '1': //삼각형 넓이계산 
         printf("> 밑변의 길이를 입력하세요: ");
        scanf("%lf",&c);
        printf("> 높이를 입력하세요: ");
        scanf("%lf",&d);
        k=c*d*0.5;
        printf("> 넓이는 %g입니다.\n",k);
        goto i;
         break;
          case '2': 
                  printf("> 세 변의 길이를 입력하세요: ");
        scanf("%lf %lf %lf",&c,&d,&l);
          k=(c+d+l)/2;
          n=k*(k-c)*(k-d)*(k-l);
          printf("> 넓이는 %g입니다.\n",(double)sqrt(n));
          goto i;
         break;
          case '3': //사다리꼴 넓이 계산 
                  printf("> 윗변, 아랫변, 높이를 입력하세요: ");
                scanf("%lf %lf %lf",&c, &d, &l);
                k=((c+d)*l)/2;
                printf("> 넓이는 %g입니다.\n",k);
                goto i;
         break;
          case '4': //직사각형 넓이 계산 
                  printf("> 가로, 세로를 입력하세요: ");
           scanf("%lf %lf",&c, &d); 
           k=c*d;
           printf("> 넓이는 %g입니다.\n",k);
           goto i;
         break;
          case '5': //원 넓이 계산 
                printf("> 반지름을 입력하세요: ");
                scanf("%lf",&c);
                k=c*c*3.14;
                printf("> 넓이는 %g입니다.\n",k); 
                goto i;
         break;
         default:
        printf("> 잘못된 값입니다.\n");
        goto i;
        break;        
   }
   }
   }
   
        } 
        else if(a==4){
                while(1){
                   
           
    printf("┌─────────────┐\n");//여러가지 도형의 부피를 구함 
    printf("│      부피 계산 모드      │\n");
    printf("│ 1: 원기둥   2: 원뿔      │\n");
    printf("│ 3: 구       m: 모드 선택 │\n");
    printf("└─────────────┘\n"); 
        printf("> 어떤 것을 계산할 까요?:"); 
           fflush(stdin);
           scanf("%c",&z);
        if(z=='m'){break;}
        switch(z)
        {
        case '1': //원기둥의 부피 
                    printf("> 밑면의 반지름을 입력해주세요:");
                    scanf("%lf",&c);
                    printf("> 높이를 입력해주세요:"); 
                    scanf("%lf",&d);
                    k=c*c*3.14*d;
                    printf("> 부피는 %g입니다.\n",k); 
                break;
        case '2'://원뿔의 부피 
                printf("> 밑면의 반지름을 입력해주세요:");
                           scanf("%lf",&c);
                           printf("> 높이를 입력해주세요:"); 
                           scanf("%lf",&d);
                           
                           k=c*c*3.14*d*(1/3);
                           printf("> 부피는 %g입니다.\n",k); 
                break;
        case '3': //구의 부피 
        printf("> 반지름을 입력해주세요:");
                           scanf("%lf",&c);
                           
                           k=(4/3)*3.14*c*c*c;
                           printf("> 부피는 %g입니다.\n",k); 
                break;
        case 'm':
                break;
        default:
                printf("> 잘못된 입력입니다.\n");
                break;
}
        
        }
}
        
        else if(a==9)
        {
                system("cls");
        }
        else if(a==0)
        {
                printf("> 프로그램을 종료합니다.\n");
                break;
}
 else
 {
         printf(">잘못된 입력입니다.\n"); 
 }
         } 
        return 0;
}

수학에서 다양한 문제를 풀때 계산이 복잡한 경우가 존재합니다. 물론 이미 계산기라는 기기가 있지만 계산기에는 사칙연산과 같은 간단한 연산만 할 수 있습니다. 이러한 점을 보완하기 위해서 사칙연산뿐만아니라 나머지 연산, 넓이 계산, 단위 계산, 부피 계산을 해주는 계산기를 제작하였습니다. 이러한 프로그램을 동아리에서 더 심화적으로 배우면서 그래프로도 제작하는등의 심화학습을 해보고싶습니다.
