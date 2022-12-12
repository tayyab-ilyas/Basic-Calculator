#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  double a,b;
  char y;
  printf("Choose an operator from +, -, %, /, * \n");
  scanf("%c", &y);
  if(y == '+'){
    printf("Enter the two numbers :\n");
    scanf("%lf \n %lf", &a,&b);
    printf("Sum = %0.2lf ", a+b);
  }
  else if(y == '-'){
    printf("Enter the two numbers : \n");
    scanf("%lf \n %lf", &a,&b);
    printf("Difference : %0.2lf", a-b);
  }
  else if(y == '/'){
    printf("Enter the two numbers : \n");
    scanf("%lf \n %lf", &a,&b);
    printf("Quotient : %0.2lf", a/b);
  }
  else if(y == '%'){
    printf("Enter the two numbers : \n");
    scanf("%lf \n %lf", &a,&b);
    printf("Remainder : %lf", a%b);
  }
  else{
    printf("Invalid Operator cap'n ! fix yo game");
  }
  

}
