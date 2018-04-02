#include <stdio.h>

int BinSch(int* s, int n, int num){
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid =  (low + high) / 2;
        if(num < s[mid]) high = mid - 1;
        else if(num > s[mid]) low = mid + 1;
        else return 1;
    }
    return 0;
}

int main()
{
    int a[] = {2, 4 ,5, 6, 8, 9, 23, 66, 100};
    int n;
    while(scanf("%d", &n) != EOF){
        if(BinSch(a, 9, n)) printf("y\n");
        else printf("n\n");
    }

    return 0;
}
