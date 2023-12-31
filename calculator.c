#include<stdio.h>
#include<math.h>

int main()
{
    char operator;
    float number1;
    float number2;
    float result;

    printf("Enter the operator that you wish to perform(+, /, *,-)");
    scanf("%c",&operator);
    printf("Enter 1st number:");
    scanf("%f", &number1);
    printf("Enter 2nd number:");
    scanf("%f", &number2);

    switch(operator)
    {
      case '+':
        result = number1 + number2;
        printf("The result of addition will be:%.3f", result);
        break;
      
      case '*':
        result = number1 * number2;
        printf("The result of multiplication will be:%.3f", result);
        break;
      
      case '/':
        result = number1 / number2;
        printf("The result of division will be:%.3f", result);
        break;

      case '-':
        result = number1 - number2;
        printf("The result of subtraction will be:%.3f", result);  
        break;
      
      default:
        printf("Operator is not valid");

    }

    return 0;
}