long int Dec_to_Bin(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%2;
        dec=dec/2;
        i++;
        len++;
    }
    while(dec!=0);
     
    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Dec_to_Oct(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%8;
        dec=dec/8;
        i++;
        len++;
    }
    while(dec!=0);
     
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Dec_to_Hex(long int dec)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=dec%16;
        dec=dec/16;
        i++;
        len++;
    }
    while(dec!=0);
     
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",rem[i]);
        }
         
    }
}
