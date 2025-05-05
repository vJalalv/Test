#include<stdio.h>
int fibb(int n);
int main()
{
   printf("%d ",fibb(5));
}
int fibb(int n)
{
    if(n == 1)
        return 1;
    else if(n==0)
        return 0;
    else
        return fibb(n-1) + fibb(n-2);

}
