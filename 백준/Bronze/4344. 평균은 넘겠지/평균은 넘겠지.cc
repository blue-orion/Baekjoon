#include <stdio.h>
int main(void) 
{
    int C;
    scanf("%d",&C);
    
    for (int a=0; a<C; a++) {    
        int num;
        scanf("%d",&num);
        
        int sum=0;
        int high_count = 0;
        double average;
        int array[num];
        for (int i=0; i<num; i++) {
            scanf("%d",&array[i]);
            sum += array[i];
        }
        
        average = (double)sum / num;
        
        for (int j=0; j<num; j++) {
            if (array[j]>average) {
                high_count += 1;
            }
        }
        printf("%0.3lf%%\n", (double)high_count/num*100);
    }
    return 0;
}
