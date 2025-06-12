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