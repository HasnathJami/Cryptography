#include <iostream>
using namespace std;
int main()
{
    int i, d;

    char str1[500];
    char code[500];

    cout<<"Please Enter The Encrypted Code:";
    cout<<endl;
    gets(str1);

    //"For Example:"2AxIxvAoEmLeJaEiLdssehveaoonoq";


    cout<<endl;
    cout<<"The Received Encrypted Code Is:";
    cout<<endl;
    puts(str1);


    d = atoi(str1);
    cout<<endl;
    cout<<"The Distance Between Code Letters Is:"<<d;
    cout<<endl;
    for(int i = 0; str1[i]!='\0'; i++)
    {
        code[i] = str1[(i+1)*(d+1)];
    }

    cout<<endl;
    cout<<"The Decrypted Code is:";
    cout<<endl;
    puts(code);

}
