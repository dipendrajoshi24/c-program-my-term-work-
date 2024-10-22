#include<stdio.h>
int main(){
    int a,b,ch;
    int add,sub,multi,div,rem;

    printf("Enter user chice:");
    scanf("%d",&ch);
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);

    if (ch==1)
    {
        add=a+b;
        printf("Addition: of %d",add);
    }
    else if(ch==2)
    {
        multi=a*b;
        printf("Multiplication: of %d",multi);
    }
      else if(ch==3)
    {
        sub=a-b;
        printf("Subtraction: of %d",sub);
    }
      else if(ch==4)
    {
        div=a/b;
        printf("Division: of %d",div);
    }
      else if(ch==5)
    {
        rem=a%b;
        printf("Remainder: of %d",multi);
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}
