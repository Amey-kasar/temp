/*#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}
int main()
{   int age[5],largest,i;
   add(4,3);
printf("addition of a+b= %d",add(4,3));
    for(int i=0;i<5;i++)
    {
    
    
    printf("what is the age of user %d:",i+1);
    scanf("%d",&age[i]);
    
    }
    largest=age[0];
    for(int i=0;i<5;i++)
    {
        if(age[i]>largest)
        {
            largest=age[i];

        }
        
       
    }
printf("addition of a+b= %d\n",add(4,3));
    printf("largest age is %d\n\n\n",largest);
        
    return 0;
  
}*/
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{   
    printf("The addition of two numbers are :%d\n",add(4,3));
    return 0;
}