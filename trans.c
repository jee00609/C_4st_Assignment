#include <stdio.h>

/*
�� ���α׷��� ����ڷκ��� ���� r * c�� ����� ���Ͽ� �� ����� ��ġ�� ����մϴ�.

�� ������ �ذ��Ϸ��� ���� C ���α׷��� ������ ���� ������ �־���մϴ�.
C ���α׷��� �迭
C ���α׷��� ������ �迭

�� ���α׷����� ����ڴ� �� r�� �� c�� ���� �Է��ؾ��մϴ�. �� ���α׷����� r�� c�� ���� 10���� �۾ƾ��մϴ�.
����ڴ� ��� ��� (r * c ����)�� �Է��ؾ��մϴ�.
�׷� ����, ���α׷��� ����� ��ġ�� ����Ͽ� ȭ�鿡 ǥ���մϴ�.
*/




int main()
{
    int a[10][10], transpose[10][10];
	int r, c, i, j;
    printf("Enter rows and columns of matrix:\n");
    scanf("%d %d", &r, &c);

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d    ",a[i][j]);
			if(j==c-1)
			{
				printf("\n\n");
			}
		}
	}


    // Finding the transpose of matrix a
	// Displaying the transpose of matrix a
	
	printf("\nEntered Trans_Matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d    ",a[j][i]);
			if(j==r-1)
			{
				printf("\n\n");
			}
		}
	}


    




    return 0;
}