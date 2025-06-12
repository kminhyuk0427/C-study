//정수 n이 주어질 때, n번째 피보나치 수를 재귀함수로 구해라
#include <stdio.h>

int f(int x){
    if(x==0){
        return 0;
    }
    else if(x==1){
        return 1;
    }
    else{
        return f(n-1) + f(n-2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}
