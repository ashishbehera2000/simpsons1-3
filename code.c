#include<stdio.h>
#define f(x)  (1/(x+1))  // Any function whose integral is to be evaluated
int main(void)
{
  float a,b,h,temp,sum=0;
  int n;
  printf("Enter the interval of integration\n");
  scanf("%f %f",&a,&b);                           //reading the limits of integration
  printf("Enter the number of divisions of interval...please make sure that it is multiple of two\n");
  scanf("%d",&n);   // make sure that the number of sub intervals is multiple of two
  if(n%2!=0) return printf("please enter the multiple of two");
  h = (b-a)/n;    // calculation of width os each sub interval
  temp = a+h;
  while(temp<b)   //summing up the individual area segments
  {
    sum+ = (4*f(temp)+2*f(temp+h));
    temp+ = 2*h;
  }
  sum = (h/3)*(sum+f(a)-f(b));
  printf("Value of the integral is %f ",sum);
}
