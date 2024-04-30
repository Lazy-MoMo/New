//Program to identify the number of uppercases and lowercase alphabet
//and convert the uppercase to lowercase

#include<ctype.h>
#include<stdio.h>

char* identity_convert_ul(char a[]);

int main(){
    char a[] = "Hi, my name is Abhishekh Joshi";
    char* p;
    //declares a pointer named P that points to a char type.
    p = identity_convert_ul(a);
    printf("%s", p);
}

char* identity_convert_ul(char a[])
/*identify_convert_ul that returns a pointer to a char. 
  It takes a single argument,
  which is an array of characters (a string).*/
{
    int count_upper = 0 , count_lower = 0;
    for(int i = 0; a[i] != '\0' ; i++)
    {
        if(isupper(a[i])){
            count_upper++;
            a[i] = tolower(a[i]);
        }

        else if(islower(a[i])){
            count_lower++;
            a[i] = toupper(a[i]);
        }
    }
    printf("No of upper case characters are %d \n",count_upper);
    printf("No of lower case character are %d \n",count_lower);
    return a;
}
