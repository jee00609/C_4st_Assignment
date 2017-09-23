#include <stdio.h>

/*
이 프로그램은 사용자로부터 순서 r * c의 행렬을 취하여 그 행렬의 전치를 계산합니다.

이 문제를 해결하려면 다음 C 프로그래밍 주제에 대한 지식이 있어야합니다.
C 프로그래밍 배열
C 프로그래밍 다차원 배열

이 프로그램에서 사용자는 행 r과 열 c의 수를 입력해야합니다. 이 프로그램에서 r과 c의 값은 10보다 작아야합니다.
사용자는 행렬 요소 (r * c 순서)를 입력해야합니다.
그런 다음, 프로그램은 행렬의 전치를 계산하여 화면에 표시합니다.
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