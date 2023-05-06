#include<stdio.h>
int main(){


char operator;
double num1, num2;
double results;


printf("\n Enter the operator (- + * /): ");
scanf("%c", &operator);

printf("Enter number 1:");
scanf("%lf", num1);

printf("Enter number 2:");
scanf("%lf", num2);

switch(operator){

    case '-':
        results = num1-num2;
        printf("The results is %lf", results);
        break;

    case '+':
        results = num1+num2;
        printf("The results is %lf", results);
        break;

    case '*':
        results = num1*num2;
        printf("The results is %lf", results);
        break;

    case '/':
        results = num1/num2;
        printf("The results is %lf", results);
        break;


    default:
    printf("The number you have entered is invalid");
        break;
}

}