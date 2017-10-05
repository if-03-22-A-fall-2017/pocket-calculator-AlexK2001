#include <stdio.h>
#include <float.h>

void enter_numbers(double* number_one,double* number_two)
{
  printf("Type in two operands: ");
  printf("First number:\n");
  scanf("%lf", number_one);
  printf("Second number:\n");
  scanf("%lf",number_two);

}

double Subtract(double number_one, double number_two)
{
  return number_one - number_two;
}
double Multiply(double number_one, double number_two)
{
  return number_one * number_two;
}
double Add(double number_one, double number_two)
{
  return number_one + number_two;
}
double Divide(double number_one, double number_two)
{
  if (number_two == 0) {
    return printf("Division by zero\n");
  }
  return number_one / number_two;
}
int operation(int type_of_operation)
{
  double result;
  ;
  switch (type_of_operation)
  {
    double number_one;
    double number_two;
    if(result >= DBL_MAX)
    {
      printf("Number overflow\n");
    }
    if (result <= DBL_MIN)
    {
      printf("Number underflow\n");
    }
    case 1:
      enter_numbers(&number_one,&number_two);
      result = Add(number_one,number_two);
      break;
    case 3:
      enter_numbers(&number_one,&number_two);
      result = Multiply(number_one,number_two);
      break;
    case 2:
      enter_numbers(&number_one,&number_two);
      result = Subtract(number_one,number_two);
      break;
    case 4:
      enter_numbers(&number_one,&number_two);
      result = Divide(number_one,number_two);
      break;
    case -1:
      break;
    default:
      break;
  }
  return result;
}

int menu()
{
  printf("Choose one of these following operations\n");
  printf(" Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n)");
  printf("Stop program (-1)\n");

  int type_of_operation;
  scanf("%d\n",&type_of_operation);

  return type_of_operation;
}

int main(int argc, char* argv[])
{
 int choose_operation = menu();
 double result = operation(choose_operation);
 printf("%f\n",result);


 return 0;
}
