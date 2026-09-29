#include <stdio.h>

int main(int argc, char *argv[])  //int argc, char *argv[]
{
    //초를 나타내는 한 개의 정수 입력 받기
    int sec;
    printf("input the second : ");
    scanf("%i", &sec);

    //초로부터 '초' 계산하기
    printf("The time is : %i:%i:%i\n",sec/3600,(sec%3600)/60,sec%60);
                                    //만약에 sec가 3800이면 sec%3600=200

    return 0;
}