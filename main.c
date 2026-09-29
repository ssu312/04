#include <stdio.h>

int main(void)  //int argc,char * argv
{
    //변수 선언
    int op1, op2;
    int res;
    //두 개의 정수 입력 받음
    printf("Input two integers: ");
    scanf("%i %i", &op1, &op2);
    

    //5개의 산술연산자(+,-,*,/,%)로 연산
    res = op1 + op2;
    //결과 출력
    printf("%i + %i = %i\n", op1,op2,res);

    //5개의 산술연산자(+,-,*,/,%)로 연산
    res = op1 - op2;
    //결과 출력
    printf("%i - %i = %i\n", op1,op2,res);

    //5개의 산술연산자(+,-,*,/,%)로 연산
    res = op1 * op2;
    //결과 출력
    printf("%i * %i = %i\n", op1,op2,res);

    //5개의 산술연산자(+,-,*,/,%)로 연산
    res = op1 / op2;
    //결과 출력
    printf("%i / %i = %i\n", op1,op2,res);

    //5개의 산술연산자(+,-,*,/,%)로 연산
    res = op1 % op2;
    //결과 출력
    printf("%i %% %i = %i\n", op1,op2,res); //""안에서 %%로 써주기
    
    return 0;
}