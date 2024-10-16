/* 
Author => <pratimsina@gmail.com>

===================================================================================================================
	[VERSIONS]
	V.1.0 (Initial release)
----------------------------------------------------------------------------------------
	V.1.1 => WHATS NEW>
		--> Implemented input of 2x2 matrix giving user controls over their inputs 
		--> Minor bug fixes
----------------------------------------------------------------------------------------
	Whats Next ?>
		1. Calculation of any dimention matrix. 
===================================================================================================================


This small software calculates the determinant of 2x2 matrix. Feel free to manupulate with the code making it
more efficient and even making it calculate 3x3 or higher dimensional matrix :)

*/



#include <stdio.h>

#define MAXIMUM_ROWS_ACCEPTED 100
#define MAXIMUM_COLS_ACCEPTED 100

void input_row_column_in_array(int rows, int columns, int matrices[MAXIMUM_ROWS_ACCEPTED][MAXIMUM_COLS_ACCEPTED])
{
	for(int i = 0;i < rows;i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("Input your values in your %d x %d matrix; Position =>[%d][%d]: ",rows,columns,i,j);
			scanf("%d",&matrices[i][j]);
		}
	}

	for(int i = 0; i<rows;i++)
	{
		for(int j =0; j<columns;j++)
		{
			printf("%d ",matrices[i][j]);
		}
		printf("\n");
	}
}

int determinant_of_matrix(int row,int column)
{
	if(row != 2 || column != 2)
	{
		printf("[TERMINATED] ---> THIS VERSION ONLY SUPPORTS 2X2 MATRICES\n");
		return 0;
	}
	
	int matrix[MAXIMUM_ROWS_ACCEPTED][MAXIMUM_COLS_ACCEPTED];

	input_row_column_in_array(row,column,matrix);

	

	/*This line of code prints the matrix (Just for testing purpose)
	for(int i=0; i<2;i++)
	{
		for(int j = 0; j<2;j++)
		{
		printf("%d ",matrix[i][j] );
		}
		printf("\n");
	}*/
	int determinant_matrix = (matrix[1][1] * matrix[0][0]) - (matrix[1][0] * matrix[0][1]);
	printf("%d is the determinant\n",determinant_matrix );
	return determinant_matrix;
	

}