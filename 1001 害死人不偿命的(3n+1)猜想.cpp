//1001 害死人不偿命的(3n+1)猜想

#include <stdio.h>

int main() {
    int n;
    int res = 0;
    scanf("%d",&n);

    while (n!=1){
        res++;
        if(n%2==0){
            n /= 2;
        } else{
            n = (3*n+1)/2;
        }
    }
    printf("%d",res);
    return 0;
}