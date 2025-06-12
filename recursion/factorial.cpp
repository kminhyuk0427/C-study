//정수 n이 주어질 때 n!을 재귀함수로 구하는 프로그램을 작성
#include <stdio.h>

int f(int x){
    if(x<=1){
        return 1;
    }
    else{
        return x * f(x-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}
