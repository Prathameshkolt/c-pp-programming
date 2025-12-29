// 18/09/2025
#include <stdio.h>
#include<string.h>
int main() {
    printf("WELCOME TO LOGIN PAGE \n");

    char username[20] = "Admin"; 
    char password[20] = "Jay9998";
    
    char userid[20] = "";
    printf("\nPlease enter the userid:\n");
    scanf("%s",&userid);
    char passid[20] = "";
    printf("\nPlease enter the passid:\n");
    scanf("%s",&passid);

    if(strcmp(username,userid)==0){
        if (strcmp(password,passid)==0){
            printf("LOGIN SUCCESFULLY COMPLETE\n");
        }else{
            printf("Wrong Password Entered\n TRY AGAIN\n");
        }        
    }else{
        printf("Wrong User Name\n Try Again");
    }
    return 0;
}
