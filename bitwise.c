#include <stdio.h>

int main()
 {
    int u, v, w, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &u, &v, &w);

 largest = (u > v) ? ((u > w) ? u : w) : ((v > w) ? v : w);

    printf("The largest number is: %d\n", largest);

    return 0;
}