#include <stdio.h>

int main(void)  //int argc,char * argv
{
    //입력받을 초 숫자에 대한 변수 선언
    int sec;
    
    //초 숫자 정수 입력 받음
    printf("분:초로 바꿀 초를 입력하시오: ");
    scanf("%i", &sec);
    
    //입력받은 정수 / 이용해서 분 계산
    int m;
    m = sec / 60;

    //입력받은 정수와 나머지 연산자 이용해서 초 계산
    int s;
    s = sec % 60;

    //결과 출력
    printf("the time is %i : %i\n", m, s);
    
    return 0;
}