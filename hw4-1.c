#include <stdio.h>

int main()

{
int input, count;
int x,ar;
int n ,c = 2;

scanf("%d" , &ar);

int a[ar];

for (int i = 0; i < ar;i++ ){
    scanf("%d", &a[i]);
}
for(int p = 0;p < ar;p++ ){
    int input = a[p];

    for ( c = 2 ; c < input ; c++ ){
    if ( input%c == 0 ){
    printf("NO ");
    break;
    }
}
    if ( c == input )
    printf("YES ");

}
return 0;
}

