#include <stdio.h>  

int main()  
{  
    char opt;
    int n1, n2;
    float res;
    char choice;

    do {
        printf("Choose an operator (+, -, *, /) to perform the operation in C Calculator: ");
        scanf(" %c", &opt);

        if (opt == '/')  
            printf("You have selected: Division\n");  
        else if (opt == '*')  
            printf("You have selected: Multiplication\n");  
        else if (opt == '-')  
            printf("You have selected: Subtraction\n");  
        else if (opt == '+')  
            printf("You have selected: Addition\n");  

        printf("Enter the first number: ");  
        scanf("%d", &n1);  
        printf("Enter the second number: ");  
        scanf("%d", &n2);  
          
        switch(opt)  
        {  
            case '+':  
                res = n1 + n2;  
                printf("Addition of %d and %d is: %.2f\n", n1, n2, res);  
                break;  
              
            case '-':  
                res = n1 - n2;  
                printf("Subtraction of %d and %d is: %.2f\n", n1, n2, res);  
                break;  
                
            case '*':  
                res = n1 * n2;  
                printf("Multiplication of %d and %d is: %.2f\n", n1, n2, res);  
                break;            
              
            case '/':  
                if (n2 == 0)   
                {  
                    printf("Divisor cannot be zero. Please enter another value: ");  
                    scanf("%d", &n2);        
                }  
                res = (float)n1 / n2;  
                printf("Division of %d and %d is: %.2f\n", n1, n2, res);  
                break;  
                
            default:  
                printf("Invalid operator\n");               
        }  

        printf("Do you want to perform another calculation? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    printf("Thank you for using the calculator!\n");

    return 0;  
} 
