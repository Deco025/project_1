#include <stdio.h>

#define ROWS 3
#define COLS 5

void move(int arr[ROWS][COLS], int k) 
{
    int temp[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++)
         {
            temp[i][j] = arr[i][(j + k) % COLS];
        }
    }

    for (int i = 0; i < ROWS; i++)
     {
        for (int j = 0; j < COLS; j++) 
        {
            arr[i][j] = temp[i][j];
        }
    }
}

void printArray(int arr[ROWS][COLS]) 
{
    printf("The array after moving:\n");
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++)
         {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int arr[ROWS][COLS] = 
    {
        {11, 22, 33, 44, 55},
        {22, 33, 44, 55, 66},
        {33, 44, 55, 66, 77}
    };

    printf (" input array: \n");
    
     for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    int k ;
    scanf ("%d",&k);
    if(k>=0&&k<5)
    { 
        move(arr, k);
        printArray(arr);

    return 0;
    }
    else{

        printf("error!");
        return -1;
    }


   
}
