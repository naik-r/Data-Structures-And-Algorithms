#include <stdio.h>
 main()
{
int i, low, high, mid, n, key, a[100];
printf("Enter size of an array:");
scanf("%d",&n);
printf("Enter elements of an array:\n");
for(i = 0; i < n; i++) {
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("Enter value to find \n");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(a[mid] < key)
low = mid + 1;
else if (a[mid] == key) {
printf("%d found at location %d \n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list \n", key);

}
