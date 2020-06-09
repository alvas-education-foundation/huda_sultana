//C program to rotate the elements upto a given number in a two-dimensional matrix.

#include<stdio.h>


int main()
{
    int i,j,row,col,N,temp=0;
    
    scanf("%d%d",&row,&col);
    
    int arr[row][col];
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    printf("Enter the number of rotations you need");
    scanf("%d",&N);
    
    while(N--)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col-1;j++)
            {
                temp=arr[i][j+1];
                arr[i][j+1]=arr[i][j];
                arr[i][j]=temp;
            }
            
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
