#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
    int input ;
    scanf("%d" , &input);
    int database[input] [input];
    for (int i = 0; i < input ; i++){
        for(int j = 0 ; j < input ; j++){
            scanf("%d" ,  &database[i][j]);
        }
    }
    int max , boy , girl ;
    int x , y;
    for (int k = 0 ; k < input ; k++){
        max = 0;
        boy = 0;
        girl = 0;
        for (x = 0 ; x < input ; x++){
            for (y = 0 ; y < input ; y++){
                if (max < database[x][y]){
                    max = database[x][y];
                }
            }
        }
        for (x = 0 ; x < input ; x++){
            for (y = 0 ; y < input ; y++){
                if (database[x][y] == max){
                    boy = x;
                    girl = y;
                    printf("boy %d pair with girl %d\n" , (boy + 1), (girl + 1));
                }
            }
        }
        for (x = 0 ; x < input ; x++){
            for (y = 0 ; y < input ; y++){
                if (boy == x || girl == y){
                    database[x][y] = 0;
                }
            }
        }
    }

}

