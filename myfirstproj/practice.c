#include <stdio.h>

void Hanoi(int n, char first, char second, char last) {
    if (n == 1) //탈출 조건
    {
        printf("%d를 %c에서 %c로 옮긴다.\n", n, first, last);
        return;
    }
    else {
        Hanoi(n - 1, first, last, second); // B에 다 쌓아 놓은 상태
        printf("%d를 %c에서 %c로 옮긴다.\n", n, first, last);
        // N-1은 B로 옮겨야함 재귀함수 밖에서 N은 LAST로 이동
        Hanoi(n - 1, second, first, last);
        // B에 있던 것을 A로 다 가져와야하는 상태
    }
}
int main() {
    Hanoi(4, 'A', 'B', 'C');
    return 0;
}
/*
1.작은 원반 n-1개는 a에서 b로 이동한다.
2큰 원반 A에서 c로 이동
3.작은 원반 n-1개를 b에서 이동
//해당 반복 과정을 그냥 코드로 구현해둔것
*/