#include <stdio.h>

void enter_numbers(double* number_one,double* number_two)
{
  printf("Type in two numbers, do you want to add");
  printf("First number:\n");
  scanf("%lf", number_one);
  printf("Second number:\n");
  scanf("%lf",number_two);

}

double Add(double number_one, double number_two)
{
  return number_one + number_two;
}

int operation(int type_of_operation)
{
  double result;
  switch (type_of_operation)
  {
    double number_one;
    double number_two;

    case 1:
      enter_numbers(&number_one,&number_two);
      result = Add(number_one,number_two);
      break;
    // case 2:
    //    Multiply();
    //   break;
    // case 3:
    //    Subtract();
    //   break;
    // case 4:
    //  Divide();
    //  break;
    default:
    result =-1;
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
