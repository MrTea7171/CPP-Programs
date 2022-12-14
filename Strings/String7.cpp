#include<iostream>
#include<string>
using namespace std;

int main()
{
    //String Copy
    string s="Welcome";
    char ch[10];
    int size=s.length();
    s.copy(ch,size);
    ch[size]='\0';
    cout<<ch<<endl;
    cout<<endl<<endl<<endl;
    
    //String Find
    string s1="How are you,are?";
    cout<<s1.find("are")<<endl;
    cout<<s1.find('e')<<endl;
    cout<<s1.rfind('e')<<endl;
    cout<<s1.find('m')<<endl;
    cout<<s1.find_first_of('e')<<endl;
    cout<<s1.find_first_of("ye",7)<<endl;
    cout<<s1.find_last_of('e')<<endl;
    cout<<endl<<endl<<endl;

    //String substring
    string s2="Programing";
    cout<<s2.substr(2,6)<<endl;
    cout<<endl<<endl<<endl;

    //String Compare
    string s3="Programing";
    string s5="Programing";
    string s6="programing";
    string s4="Noobgraming";
    cout<<s3.compare(s4)<<endl;
    cout<<s3.compare(s5)<<endl;
    cout<<s3.compare(s6)<<endl;
    cout<<endl<<endl<<endl;

    //String at,front,back,=,+,[]
    string s7="Hello";
    string s8="World";
    string s9;
    cout<<s7.at(4)<<endl;
    cout<<s7[4]<<endl;
    cout<<s7.front()<<endl;
    cout<<s8.back()<<endl;
    s9=s7+" "+s8;
    cout<<s9<<endl;
    s9=s8;
    cout<<s9<<endl;
    cout<<endl<<endl<<endl;
    return 0;

}