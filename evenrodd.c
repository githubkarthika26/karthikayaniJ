#include <stdio.h>
#include <conio.h>
int main() {
int n;

printf("\nEnter an integer:");
scanf("%d", &n);

if (n % 2 == 0) {
printf("\n%d is Even number.", n);
} else {
printf("\n%d is Odd number.", n);
}

return 0;
}
 
