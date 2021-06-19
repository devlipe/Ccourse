#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,  j = 0;
    char a[51], b[51];

    scanf("%d", &n);

    for (j = 0; j<n; j++)
    {   
        int ta, tb, i = 0, i1 = 0, i2 = 0, t = 0;
        char c[102]= {'\000'};
        scanf("%s %s", &a, &b);
        ta = strlen(a);
        tb = strlen(b);
        for (i;i<(ta+tb);i++){
            if ((i < (2*ta)) && (i < (2*tb))){
                if (i % 2 == 0)
                {
                    c[i] = a[i1];
                    i1++;
                }
                else
                {
                    c[i] = b[i2];
                    i2++;
                }
            }
            else
            { 
                if(i < (2*ta))
                {
                    c[i] = a[i1];
                    i1++;
                }
                if(i < (2*tb))
                {
                    c[i] = b [i2];
                    i2++;
                }
            }
        }           
        printf("%s\n", c);
    }
    return 0;
}