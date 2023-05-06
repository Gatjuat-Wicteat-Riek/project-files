#include<stdio.h>
int main(){
    /*int i = 1;
    while(i <= 5){
        int j = 1;
        while(j <= 5){
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }i++;
        printf("\n");
        
    }*/

/*int age;

printf("How old are you dear one? \n");
scanf("%d", &age);

printf("You are %d years old \n", age);

int i = 0;
while ( i < 10)
{
    printf("%d", i);
    i++;
}
int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
printf(a[3][0]);*/

/*double C;
double F;
double temp;
printf("\n C is in celsius");56
scanf("%.lf" C);*/

char operator;
double num1, num2;
double results;


printf("Enter the operator (- + * /): \n");
scanf("%c", &operator);

printf("Enter number 1: \n");
scanf("%lf", &num1);

printf("Enter number 2: \n");
scanf("%lf", &num2);

switch(operator){

    case '-':
        results = num1-num2;
        printf("The results is %.2lf\n", results);
        break;

    case '+':
        results = num1+num2;
        printf("The results is %.2lf\n", results);
        break;

    case '*':
        results = num1*num2;
        printf("The results is %.2lf", results);
        break;

    case '/':
        results = num1/num2;
        printf("The results is %.2lf\n", results);
        break;


    default:
    printf("The number you have entered is invalid");
        break;
}













    return 0;
}