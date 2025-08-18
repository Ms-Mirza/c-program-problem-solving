// Simple calculator.......

#include<stdio.h>
#include<math.h>
void calculator_menu();
void division(double, double);
int modulus(double, double);
int main(){
    int option;
    double a, b, result;
    while(1){
        calculator_menu();
        scanf("%d", &option);
        if (option == 7){
            break;
        }
        else if (option < 1 || option > 7){
            printf("Invalid input. Please enter option between (1 to 7).");
            continue;
        }
        else{
            printf("Enter the first number: ");
            scanf("%lf", &a);
            printf("Enter the second number: ");
            scanf("%lf", &b);
            switch(option){
                case 1: 
                    result = a+b;
                    printf("The summation %.2lf and %.2lf is: %.2lf", a,b,result);
                    break;
                case 2: 
                    result = a-b;
                    printf("The substraction %.2lf and %.2lf is: %.2lf", a,b,result);
                    break;
                case 3: 
                    result = a*b;
                    printf("The multiplication %.2lf and %.2lf is: %.2lf", a,b,result);
                    break;
                case 4: 
                    division(a,b);
                    break;
                case 5: 
                    printf("The modulus %d %% %d = %d\n", (int)a, (int)b, modulus(a,b));
                    break;    
                case 6: 
                    result =pow(a,b);
                    printf("The power %.2lf ^ %.2lf = %.2lf\n", a, b, result);
                    break;
            }
        }
    }
    return 0;
}

void calculator_menu(){
    printf("\n-------------------------------\n");
    printf("Welcome User: \n");
    printf("The available operation option:\n");
    printf("1.Summation. \n");
    printf("2.Substraction. \n");
    printf("3.Multiplication. \n");
    printf("4.Division.\n");
    printf("5.Modulus. \n");
    printf("6.Power. \n");
    printf("7.Exit. \n");
    printf("Choose an option: ");
}

void division(double a, double b){    
    if (b == 0)
        printf("Division is Invalid\n");
    else
        printf("The division %.2lf / %.2lf = %.2lf\n", a, b, a/b);
}

int modulus(double a, double b){
    int result = (int)a % (int)b;
    return result;
}