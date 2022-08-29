
#include <stdio.h>
int main(){
 int min, max;
 printf("nhap Min:");
 scanf("%d",&min);
 printf("nhap Max:");
 scanf("%d",&max);
 if(min%2 != 0){
    min++;
 }
 for (min; min<=max; min+=2)
 {
   printf ("%d\t",min);
 }
}
