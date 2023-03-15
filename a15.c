#include<stdio.h>

main(){

printf("Choose shape \n 1. triangle \n 2. inverted triangle\n 3. square\n 4. diamond\n ");
int a;
scanf("%d",&a);

int i,j;
if(a==1){
for(i=0;i<=5;i++){
for(j=0;j<i;j++){
printf("*");
}
printf("\n");
}

}

if(a==2){
for(i=0;i<=5;i++){
for(j=5;j>i;j--){
printf("*");
}
printf("\n");
}

}

if(a==3){
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("*");
}
printf("\n");
}

}
if(a==4){

int num=5;
for(int i=0;i<num;i++){
    for(int j=num-1;j>i;j--){
printf(" ");
    }
   
    for(int j=0;j<2*i+1;j++){
printf("*");
    }
    printf("\n");
}

for(int i=1;i<num;i++){
    for(int j=0;j<i;j++){
printf(" ");
    }

    for(int j=2*num-1;j>2*i;j--){
          printf("*");
    }
    printf("\n");
}
}
}


