#include<stdio.h>
main()
{ int a=34,r;
printf("a=%d\n",a);
a--;
printf("--a=%d\n",a);
--a;
printf("--a=%d\n",a);
r=a--;
printf("r=%d,a=%d\n",r,a);
r=--a;
printf("r=%d,a=%d\n",r,a);
}
