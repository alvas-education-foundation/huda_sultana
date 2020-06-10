
#include <stdio.h>


int main()

{
    
	int row,col,i,j,sum=0;
   
 	printf("Enter M (Rows) and N (Columns):\n");
    

    	scanf("%d%d",&row,&col);
    
	int arr[row][col];
    
	printf("Enter the Elements:\n");
    
    
	for(i=0;i<row;i++)
    
	{
        
		for(j=0;j<col;j++)
       
		{
            
			scanf("%d",&arr[i][j]);
        
		}
    
	}
    
    
	printf("The Input Matrix is:\n");
    
	for(i=0;i<row;i++)
    
	{
        
		for(j=0;j<col;j++)
        
		{
            
			printf("%d ",arr[i][j]);
        
		}
        
		printf("\n");
    
	}
    
    
	printf("The Boundary Elements are: ");
    
	for(i=0;i<row;i++)
    
	{
        
		for(j=0;j<col;j++)
        
		{
            
			if(i==0||i==row-1||j==0||j==col-1)
            
			{
                
				printf("%d ",arr[i][j]);
                
				sum+=arr[i][j];
            
			}
        
		}
    
	}
    
    
	printf("\nThe Sum of Boundary elements of the Matrix is: %d",sum);
    
    
	return 0;

}
