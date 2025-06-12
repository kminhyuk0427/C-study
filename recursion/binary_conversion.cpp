//10진수 정수 n이 주어졌을 때 이를 재귀함수로 2진수로 변환 출력
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
