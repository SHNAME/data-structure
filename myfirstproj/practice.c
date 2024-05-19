#include <stdio.h>

void Hanoi(int n, char first, char second, char last) {
    if (n == 1) //Ż�� ����
    {
        printf("%d�� %c���� %c�� �ű��.\n", n, first, last);
        return;
    }
    else {
        Hanoi(n - 1, first, last, second); // B�� �� �׾� ���� ����
        printf("%d�� %c���� %c�� �ű��.\n", n, first, last);
        // N-1�� B�� �Űܾ��� ����Լ� �ۿ��� N�� LAST�� �̵�
        Hanoi(n - 1, second, first, last);
        // B�� �ִ� ���� A�� �� �����;��ϴ� ����
    }
}
int main() {
    Hanoi(4, 'A', 'B', 'C');
    return 0;
}
/*
1.���� ���� n-1���� a���� b�� �̵��Ѵ�.
2ū ���� A���� c�� �̵�
3.���� ���� n-1���� b���� �̵�
//�ش� �ݺ� ������ �׳� �ڵ�� �����صа�
*/