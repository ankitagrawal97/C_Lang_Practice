#include<stdio.h>
void main()
{
    int n,sum,r ;
    sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
  while(n!=0){
        r=n%10;
        n=n/10;
        sum=sum+r;
  }
  printf("Sum of Digits : %d\n",sum);

  printf("roll no : 171210010");



}
