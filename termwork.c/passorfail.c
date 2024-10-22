#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    float total,percentage;
    
    printf("Enter  marks for subject 1(out of 100) :");
    scanf("%d",&marks1);
 
     printf("Enter  marks for subject 2(out of 100) :");
     scanf("%d",&marks2);

     printf("Enter  marks for subject 3(out of 100) :");
     scanf("%d",&marks3);

     total=marks1+marks2+marks3;
     percentage=(total/300)*100;

     if(percentage >40){
        printf("pass\n");
        printf("congrats you are passed the exam. ");
       }else{
        printf("fails\n");
        printf("sorry you are failed the exam. Best of luck for next time, ");

        }
     
    return 0;
}