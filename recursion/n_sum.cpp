//양의 정수 n이 주어졌을 때 1부터 n까지 합
#include <stdio.h>

int s(int x){
    if(x<=1){
        return 1;
    }
    else{
        return x + s(x-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", s(n));
}
