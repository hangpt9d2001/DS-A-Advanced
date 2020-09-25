#include <stdio.h>

int main(){
    long long int n1, x, y, k;
    int t;
    scanf("%d",&t);
    while(t>0){
        scanf("%lld %lld %lld",&x,&y,&k);
        n1 = (k*(y+1)-1)/(x-1); //number of offer 1
        if((k*(y+1)-1) % (x-1) != 0) n1++;
        printf("%lld\n",n1+k);
        t--;
    }
    return 0;
}