/*this program helps the user to create two matrices with the values
 * given by the user and add those values to make the third matrix.
 *
 * Author:Karla Alexandra Hernandez Aviles
 * Email: A01411843@itesm.mx
 * Date:15/10/2018
 * */


#include <stdio.h>

int main(void) {
    // In this part, we ask for the num of colums that the user would like to use
    int v;
    printf("Welcome user,this program will help you to sum 2 matrices. Defines the size of the array: ");
    scanf("%i", &v);

    // in this part declare that "v" can be > 1 and > than 10
    if(v>1&&v<=10){
        //Declare the matrices
        int k[v][v];
        int l[v][v];
        int c[v][v];
        printf("Give me the numbers of the matrix k\n");
        // Scan the matrix k
        for(int a=0;a<v;a++){
            for(int j=0;j<v;j++){
                printf("give me the number of row [%d] colum [%d]:", a,j);
                scanf("%d",&k[a][j]);
            }
        }

        printf("Give me the numbers of matrix l\n");
        // In this part we ask to the user for the numbers of matrix l
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("give me the number of row [%d] colum [%d]:", i,j);
                scanf("%d",&l[i][j]);
            }
        }

        printf("The matrix k that you have made is:"); //in this part the values of the matrix k are tabulated
        printf("\n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("%d ", k[i][j]);
            }
            printf("\n");
        }

        printf("\nThe matrix l that you have made is:"); // in this part the values of the matrix l are tabulated
        printf("\n");
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("%d ", l[i][j]);
            }
            printf("\n");
        }

        // In this part declare the ecuation for the sum
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                c[i][j]=k[i][j]+l[i][j];
            }
        }
        printf("\n");
        printf("The sum of matrix c is: \n"); // in this part the values and sum of the matrix c are tabulated
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("A problem has occurred, please check the values");
    }
    return 0;
}






