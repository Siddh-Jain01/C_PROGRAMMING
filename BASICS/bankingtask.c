#include <stdio.h>
int main(){ 
    int age;
    long mobileno, accountno;   
    char name[50];              
    float deposit, credit, total;

    printf("Enter the name:\n");
    scanf("%s", name);          

    printf("Enter the age:\n");
    scanf("%d", &age);

    printf("Enter the mobile number:\n");
    scanf("%ld", &mobileno);

    printf("Enter the account number:\n");
    scanf("%ld", &accountno);

    printf("Enter the deposit amount:\n");
    scanf("%f", &deposit);

    printf("Enter the credit amount:\n");
    scanf("%f", &credit);

    total = deposit - credit;

    printf("\nRemaining amount is %.2f\n", total);



    
    int a[30];
   
    printf("enter the trasction\n");
    for (int i=0;i<30;i++){
        scanf("%d",a[i]);
    }
    
    
    }
     for(int i=0;i<30;i++){
        printf("%d",sum1+sum2);
    
    }
    
  






    return 0;
}