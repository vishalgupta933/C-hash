#include<cstdio>

int main()
{
    char string[] = "Hello, This is Vishal Gupta!";
    int i,count = 0;
    for(i=0;string[i]!=0;i++)
    {
        count++;
    }
    printf("The no. of characters is : %d",count);
}