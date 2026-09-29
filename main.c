#include <stdio.h>

int main(void)  //int argc,char * argv
{
    int x,y,z,m;
    int a,b,c;
    x = 2;
    z = 1;
    a = 3;
    b = 4;
    c = 5;
    
    //1번 연산
    y = a*x*x + b*x + c;

    //2번 연산
    m = (x+y+z) / 3;
    printf("y=%d,m=%d",y,m);
    return 0;
}