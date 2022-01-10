#include<stdio.h>
#include<string.h>
 
int ss(char *x,char *y)
{
    if(strlen(x)>strlen(y)) return 1;
    if(strlen(x)<strlen(y)) return -1;
    return strcmp(x,y);
}
 
int bigger(char *x,char *y)
{
    if(*x!='-' && *y=='-') return 1;
    if(*x=='-' && *y!='-') return -1;
    if(*x=='-' && *y=='-') return ss(y+1,x+1);
    return ss(x,y);
}
 
int main()
{
    char t[1000],y[1000];
    scanf("%s",t);
    if(bigger(t,"-128")>=0 && bigger("127",t)>=0) printf("byte");
    else if(bigger(t,"-32768")>=0 && bigger("32767",t)>=0) printf("short");
    else if(bigger(t,"-2147483648")>=0 && bigger("2147483647",t)>=0)printf("int");
    else if(bigger(t,"-9223372036854775808")>=0 && bigger("9223372036854775808",t)>=0) printf("long");
    else printf("BigInteger");
} 
