// password checker is a passward is strong or weak.
#include<stdio.h>
#include<string.h>
#include <ctype.h>   // for isalnum()
int main()
{
    int num = 0, upperCase = 0, lowerCase =0, special_char = 0;
    char password[100];
    printf("Enter the Password: ");
    gets(password);
    int len = strlen(password);
    if (len < 8) printf("Password length is less than 8. Please enter at least 8 character.\n");
    else{
        for (int i=0; i<len; i++)
        {
            if (password[i]>='0' && password[i]<='9') num++;
            else if (password[i]>= 'A' && password[i]<= 'Z') upperCase ++;
            else if (password[i]>= 'a' && password[i]<= 'z') lowerCase ++;
            else if (!isalnum(password[i])) special_char ++; 
        }   
        if (num == 0) printf("In your password there is no number.Please add at least a number in your password.\n");
        if (upperCase == 0) printf("In your password there is no upper case. Please add at least 1 upper case in your password.\n");
        if (lowerCase == 0) printf("In your password there is no lower case. Please add at least 1 lower case in your password.\n");
        if (special_char == 0) printf("In your password there is no special character. Please add at least 1 special character in your password.\n");
        if (num > 0 && upperCase > 0 && lowerCase > 0 && special_char > 0) printf("Your password is strong.\n");  
    }    
    return 0;
}


/*
// improve version... 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int num = 0, upperCase = 0, lowerCase = 0, special_char = 0;
    char password[100];

    printf("Enter the Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';  // remove newline

    int len = strlen(password);

    if (len < 8) {
        printf("Password length is less than 8. Please enter at least 8 characters.\n");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (isdigit(password[i])) num++;
        else if (isupper(password[i])) upperCase++;
        else if (islower(password[i])) lowerCase++;
        else if (!isalnum(password[i])) special_char++;
    }

    if (num == 0)
        printf("No number found. Please add at least one number.\n");
    if (upperCase == 0)
        printf("No uppercase letter found. Please add at least one uppercase letter.\n");
    if (lowerCase == 0)
        printf("No lowercase letter found. Please add at least one lowercase letter.\n");
    if (special_char == 0)
        printf("No special character found. Please add at least one special character.\n");

    if (num > 0 && upperCase > 0 && lowerCase > 0 && special_char > 0)
        printf("✅ Your password is strong.\n");
    else
        printf("❌ Your password is weak.\n");

    return 0;
}

*/