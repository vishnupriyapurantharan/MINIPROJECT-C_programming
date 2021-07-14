#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>

void Hex_to_Bin(char hex[])
{
    int i=0;
    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':   
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':   
            printf("1100"); break;
        case 'D':
        case 'd':   
            printf("1101"); break;
        case 'E':
        case 'e':   
            printf("1110"); break;
        case 'F':
        case 'f':   
            printf("1111"); break;
         
        default:
            printf("\n Invalid hexa digit %c ", hex[i]);            
        }
    }
 
}
 
void Hex_to_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
 
}
 
void Hex_to_Oct(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
     
    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
     
}
