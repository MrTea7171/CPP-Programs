#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    //strlen
    cout<<"Strlen Section"<<endl;
    char c[50]="Hello";
    cout<<"The String is: "<<c<<endl;
    cout<<"The Lenght of String is: "<<strlen(c)<<endl<<endl<<endl;

    //strcat,strncat 
    cout<<"Strcat Section"<<endl;
    char s1[50]="Good";
    char s2[50]="Morning";
    // strcat(s1,s2);
    strncat(s1,s2,3);
    cout<<s1<<endl<<endl<<endl;

    //strcpy
    cout<<"Strcpy Section"<<endl;
    char string1[50]="Live";
    char string2[50];
    // strcpy(string2,string1);
    strncpy(string2,string1,3);
    cout<<string2<<endl<<endl<<endl;

    //strstr
    cout<<"Strstr Section"<<endl;
    char main[50]="Gameboy";
    char search[50]="boy";
    if(strstr(main,search)!=NULL)
    {
        cout<<"String is found"<<endl;
    }
    else
    {
        cout<<"String is not found"<<endl;
    }
    cout<<endl;

    //strchr
    cout<<"Strchr Section"<<endl;
    char main_word[50]="Training";
    char search_char='i';
    cout<<strchr(main_word,search_char)<<endl;
    cout<<strrchr(main_word,search_char)<<endl;
    cout<<endl;

    //strcmp
    cout<<"Strcmp Section"<<endl;
    char word1[50]="Training";
    char word2[50]="Virash";
    cout<<strcmp(word1,word2)<<endl;
    cout<<endl;

    //strtol,strtof
    cout<<"Strtol Section"<<endl;
    char num_s1[50]="1234";
    char num_s2[50]="53.76";
    long int x=strtol(num_s1,NULL,10);
    float y=strtof(num_s2,NULL);
    cout<<x<<endl;
    cout<<y<<endl;


    //strtok
    cout<<"Strtok Section"<<endl;
    char expression[50]="x=5;y=9;t=20;";
   
    char *token=strtok(expression,"=;");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }
    return 0;
}