#include <stdio.h>
#include <stdlib.h>

struct student  //항상 메인앞에 선언해주어야함.
        //struct 구조 안에 들어갈 다양한 타입의 멤버를 설정해주는 것 
{
    int studentNumber;
    double grades[4];
};

int main(void)
{
    int i;

    struct student chloeInfo = {10101010, {60.5f,90.0f,95.0f,85.3f}};
    // student 라는 구조체에 내가 변수 chloe를 넣는것 
    //혹은 이 과정을 변수초기화라고 한다. 값을 직접 넣어주는것.
    //구조가 중요함 {첫번째멤버인덱스 ,{다시중괄호 열고 두번쨰멤버 인덱스}}
    //a.idNum = 10101010; // 이것은 변수초기화하는것. 내가 저 변수값에 값을 넣어주는것이다.

    printf("%d\n",chloeInfo.studentNumber);

    for(i=0; i<4; i++)
    {
        printf("%.2f\n",chloeInfo.grades[i]);
    }
 
    return 0;
}