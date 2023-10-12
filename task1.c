#include<stdio.h>
#include<string.h>

struct  Register
{
    char FirstName [20];
    char LastName [20];
    char Email [30];
    char Password [20];
};

struct Login
{
    char Email [30];
    char Password [20];
};


int main (){

    struct Register R;
    struct Login L;

    printf("\n_*_*_*_*_*_*_*_*_*_ Register _*_*_*_*_*_*_*_*_*_\n");
    printf("\n");

    printf("Enter your first name : ");
    gets(R.FirstName);

    printf("Enter your last name :");
    gets(R.LastName);

    printf("Enter your Email :");
    gets(R.Email);

    printf("Enter your password :");
    gets(R.Password);
    printf("\n");


    printf("\n--------------------------------------\n");
    printf("\n");
    printf("_*_*_*_*_*_*_*_*_*_*_ Login _*_*_*_*_*_*_*_*_*_*_\n");
    printf("\n");

    printf("Enter your Email :");
    gets(L.Email);

    printf("Enter your password :");
    gets(L.Password);

    if(strcmp(R.Email,L.Email)==0 && strcmp(L.Password,L.Password)==0)

            {   
                printf("\nSuccessful Login\n");
            }
        else 
            {
                printf("\nIncorrect Login Details\nPlease enter the correct Information\n");
            }

    return 0;
}