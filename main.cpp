#include <stdio.h>
 
int n,i,z,c;
int main(){
 
    printf("Kolichestvo elementov massiva:");
    scanf("%d", &n);
 
    int a[n+1],b[n+1];
 
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("Na skolko sdvinut massiv?:");
    scanf("%d", &z);
 
    for(i=n-z+1; i<=n; i++)
    {
        c++;
        b[c]=a[i];
    }
 
    for(i=1; i<=n-z; i++)
    {
        c++;
        b[c]=a[i];
    }
 
    for(i=1; i<=n; i++) printf("%d ", b[i]);
 
    return 0;
}
 
