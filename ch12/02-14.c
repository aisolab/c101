/* 12-2. 포인터는 영희이다! (포인터)
    - [] 연산자의 역할
        c에서 []라는 연산자가 쓰이면 자동적으로 아래의 코드의 형태처럼 바꾸어 처리하게됨.
*/
// 신기한 [] 사용
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("3[arr] : %d \n", 3 [arr]);
    printf("*(3+a) : %d \n", *(arr + 3));
    return 0;
}