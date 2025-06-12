//정수 n이 주어질때 n!을 재귀함수로 구하는 프로그램을 작성
#include <stdio.h>

void conversion(int x){
	if (x>0){
		conversion(x/2);
		printf("%d", x%2);
	}
}

int main(){
    int n;
    scanf("%d", &n);
    
    conversion(n);
    
    return 0;
}
