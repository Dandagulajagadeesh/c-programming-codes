#include <stdio.h>

int main() {
    int n;
    printf("enter array size :");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("enter %d array values :", n);
    for (i = 0; i < n; i++)
	 {
        scanf("%d", &a[i]);  // Remove the space after "%d"
    }
    for (i = n - 1; i >= 0; i--)
	 {
        printf("%d ", a[i]);
    }
    return 0;
}

