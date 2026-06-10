#include <stdio.h>
void disp_count_sum14()
{
    int a=1, b=0, c, v, m, n, f, j;
    while(a<100000)
    {
    c=a%10;
    v=(a/10)%10;
    m=(a/100)%10;
    n=(a/1000)%10;
    j=(a/10000)%10;
    f=c+v+m+n+j;
    if(f==14)
    {
    b=b+1;
    }
    a++;
    }
    printf("%d\n",b);
}

int main()
{
    disp_count_sum14();
}