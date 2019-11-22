#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void bina(int);
void oct(int);
int main ()
{
    int sel=1;
    do{
    char num[20];
    int i, r, len, deci = 0;
    cout << "Enter  hexadecimal number : ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        deci += r * pow(16,len);
    }
    bina(deci);
    oct(deci);
    cout<<"The number in decimal: "<<deci<<endl;
    cout<<"Enter 0 to exit or any to convert another number:\n";
    cin>>sel;
    }while(sel!=0);
    return 0;
}

void bina(int x)
{
    int bina=0,i=1;
    while(x!=0){
            bina+=((x%2)*i);
            x/=2;
            i*=10;}
    cout<<"The number in binary: "<<bina<<endl;
}

void oct(int x){
    int oct=0,i=1;
    while (x != 0)
        {
            oct += (x % 8) * i;
            x /= 8;
            i *= 10;
        }
    cout<<"The number is octal: "<<oct<<endl;
}
