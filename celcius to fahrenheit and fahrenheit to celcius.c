#include<stdio.h>
int main()
{
    int choice;
    float celcius,fahrenheit,temp;
    printf("Its a temp converter.\nEnter celsius temp to convert it Fahrenheit and Fahrenheit temp to convert celsius");
    printf("\nEnter your choice:\n");
    printf("Press 1 to see celcius and 2 for Fahrenheit Temperature: \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("You have chosen 1 to see Celcius Temperature\n");
            printf("Enter Fahrenheit temp: \n");
            scanf("%f",&fahrenheit);
            temp = (fahrenheit-32)/1.8;
            printf("Celcicus Temperature is %.2f",temp);
            break;
        case 2:
            printf("You have chosen 2 to see Fahrenheit Temperature\n");
            printf("Enter Celcius temp to see Fahrenheit: \n");
            scanf("%f",&celcius);
            temp = (celcius*1.8)+32;
            printf("Fahrenheit Temperature is %.2f",temp);
            break;
        default:
            printf("Not a correct number");
    }
    getch();



    return 0;
}
