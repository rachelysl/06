#include <stdio.h>

//두 정수를 더하는 함수
int sumTwo(int a, int b)
{
    return a + b;
}

//정수의 제곱을 계산하는 함수
int square(int n)
{
    return n * n;
}

//두 정수 중 큰 수를 계산하는 함수
int get_max(int x, int y)
{
    if (x > y)
       return x;
    else
       return y;
}

int main(void)
{
    int result;

    //두 정수의 합
    result = sumTwo(3,5);
    printf("sum = %d\n", result);

    //정수의 제곱
    result = square(4);
    printf("square = %d\n", result);

    //두 정수 중 큰 수 
    result = get_max(10,7);
    printf("max = %d\n", result);

    return 0;

}
