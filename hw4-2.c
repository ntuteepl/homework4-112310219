#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
int count,input;
int x;
int ar;

scanf("%d",&ar);


int database [6][3] ={
    {123 , 456 , 9000},
    {456 , 789 , 5000},
    {789 , 888 , 6000},
    {336 , 558 , 10000},
    {775 , 666 , 12000},
    {566 , 221 , 7000}};



int account , password;
for (int y = 0; y < ar; y++){
    scanf("%d%d", &account , &password);
    bool used = false;
    for (int j = 0; j < 6 ; j++){
        if (account == database[j][0] && password == database[j][1]){
            printf("%d\n", database[j][2]);
            used = true ;
        }
    }
    if (!used) printf("error\n");
}


return 0;

}

