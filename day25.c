#include <stdio.h>
int main()
{
    int attendance,number;

    printf("enter the number between 1 to 100\n");
    scanf("%d",&attendance);

    switch (attendance)
    {
    case 95:
        printf("you get 5 marks");
        break;
        
    case 85:
        printf("you get 4 marks");
        break;
    
    case 80:
        printf("you get 2 marks");
        break;
    
    case 75:
        printf("you get 1 marks");
        break;
    
    default:
        printf("you get 0 marks");
        break;
    }
    return 0;
}
