 #include<stdio.h>
  int main()
  {
     int i,count=0,n;
     printf("Enter the number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       if(n%i==0)
         count=count+1;
    }
    if(count==2)
        printf("%d is a prime number",n);
    else
       printf("%d is not a prime number",n);
 }