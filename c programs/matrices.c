#include<stdio.h>
int read(int, int, int[50][50]);
int print(int, int, int[50][50]);
int add(int[][50], int[][50], int[][50]);
int sub(int[][50], int[][50], int[][50]);
int mul(int[][50], int[][50], int[][50]);
int transpose(int[][50], int[][50]);
int sumdiag(int[][50], int[][50]);
int up(int[][50], int[][50]);
int lo(int[][50], int[][50]);
int squnit(int[][50], int[][50]);
int sumofrc(int[][50], int[][50]);
int checkunit(int[][50], int[][50]);
int arr1[50][50], arr2[50][50], arr3[50][50];
int r1, c1, r2, c2, r3, c3;
int main()
{
	int ch, f;
	f = 0;

	do
	{

		printf("\n\n$$$$$$$$$$$   MENU   $$$$$$$$$$$\n");
		printf("\n\n1.Addition of matrices.\n");
		printf("2.Subtraction of matrices.\n");
		printf("3.Multiplication of matrices.\n");
		printf("4.Transpose of matrices.\n");
		printf("5.Sum of diagonals.\n");
		printf("6.Upper triangle.\n");
		printf("7.Lower triangle.\n");
		printf("8.Square matrix to unit matrix.\n");
		printf("9.Sum of row & column.\n");
		printf("10.Given matrix is unit matrix or not.\n");
		printf("999.Exit.\n");
		printf("\n\nEnter your choice:\n");
		scanf("%d", &ch);

		switch (ch)
		{
		case 1:

			printf("\n1.Addition of matrices.\n");

			printf("\n\nFor 1st matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r1, &c1);

			printf("\nFor 2nd matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r2, &c2);
			if ((r1 == r2) && (c1 == c2))
			{

				printf("Enter 1st matrix:\n");
				read(r1, c1, arr1);
				printf("Enter 2nd matrix:\n");
				read(r2, c2, arr2);

				r3 = r1;
				c3 = c1;
				add(arr1, arr2, arr3);
				printf("\n\n");
				print(r3, c3, arr3);
			}
			else
			{
				printf("\nAddition not possible.\n");
			}


			break;

		case 2:
			printf("\n2.Subtraction of matrices.\n");
			printf("\n\nFor 1st matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r1, &c1);
			printf("\nFor 2nd matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r2, &c2);
			if ((r1 == r2) && (c1 == c2))
			{

				printf("Enter 1st matrix:\n");
				read(r1, c1, arr1);

				printf("Enter 2nd matrix:\n");
				read(r2, c2, arr2);

				r3 = r1;
				c3 = c1;
				sub(arr1, arr2, arr3);
				printf("\n\n");
				print(r3, c3, arr3);
			}
			else
			{
				printf("\nSubtraction not possible.\n");
			}




			break;

		case 3:
			printf("\n3.Multiplication of matrices.\n");
			printf("\n\nFor 1st matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r1, &c1);
			printf("\nFor 2nd matrix Enter no. of rows & column:\n");
			scanf("%d%d", &r2, &c2);

			if (c1 == r2)
			{
				printf("Enter 1st matrix:\n");
				read(r1, c1, arr1);

				printf("Enter 2nd matrix:\n");
				read(r2, c2, arr2);

				r3 = r1;
				c3 = c2;
				mul(arr1, arr2, arr3);
				printf("\n\n");
				print(r3, c3, arr3);
			}
			else
			{
				printf("\nMultiplication not possible.\n");
			}


			break;

		case 4:
			printf("\n4.Transpose of matrices.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = c1;
			c3 = r1;
			transpose(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);
			break;

		case 5:
			printf("\n5.Sum of diagonals.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			sumdiag(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);

			break;

		case 6:
			printf("6.Upper triangle.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			up(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);

			break;

		case 7:
			printf("7.Lower triangle.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			lo(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);
			break;

		case 8:
			printf("8.Square matrix to unit matrix.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			squnit(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);

			break;

		case 9:
			printf("9.Sum of row & column.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			sumofrc(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);

			break;

		case 10:
			printf("10.Given matrix is unit matrix or not.\n");
			printf("\nEnter the no. of rows and columns.\n");
			scanf("%d%d", &r1, &c1);
			printf("\nEnter the matrix.\n");
			read(r1, c1, arr1);
			r3 = r1;
			c3 = c1;
			checkunit(arr1, arr3);
			printf("\n\n");
			print(r3, c3, arr3);

			break;

		case 999:
			f = 1;
			printf("EXIT.\n");
			break;

		default:
			printf("Wrong choice.\n");
		}
	}
	while (f == 0);

	return 0;
}

int read(int r, int c, int x[][50])
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter no. at [%d][%d]:", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}

int print(int r, int c, int x[][50])
{
	int i, j;
	printf("\nThe required matrix is:\n");


    for (i = 0; i < r; i++)
	{
        printf("|");

		for (j = 0; j < c; j++)
		{

			printf("%d   ", x[i][j]);
			x[i][j] = 0;
		}
            printf("|");
		printf("\n");
	}

    }

int add(int x[][50], int y[][50], int arr3[][50])
{
	int i, j;
	for (i = 0; i < r3; i++)
	{
		for (j = 0; j < c3; j++)
		{
			arr3[i][j] = x[i][j] + y[i][j];
		}
	}
}

int sub(int x[][50], int y[][50], int arr3[][50])
{
	int i, j;
	for (i = 0; i < r3; i++)
	{
		for (j = 0; j < c3; j++)
		{
			arr3[i][j] = x[i][j] - y[i][j];
		}
	}
}

int mul(int x[][50], int y[][50], int arr3[][50])
{
	int i, j, k;
	for (i = 0; i < r3; i++)
	{
		for (j = 0; j < c3; j++)
		{
			k = 0;
			while (k <= c2)
			{
				arr3[i][j] = arr3[i][j] + (x[i][k] * y[k][j]);
				k++;
			}
		}
	}
}

int transpose(int x[][50], int arr3[][50])
{
	int i, j;
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			arr3[j][i] = x[i][j];
		}
	}
}

int sumdiag(int x[][50], int arr3[][50])
{
	int i, j, ld, rd;
	ld = 0;
	rd = 0;
	if (r1 == c1)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				arr3[i][j] = x[i][j];
				if (i == j)
				{
					ld = ld + x[i][j];
				}
				if ((i + j) == (c1 - 1))
				{
					rd = rd + x[i][j];
				}
			}
		}
		printf("\nThe sum of left diagonal is :%d", ld);
		printf("\nThe sum of right diagonal is :%d", rd);


	}
	else

	{
		int k, l;
		for (k = 0; k < r1; k++)
		{
			for (l = 0; l < c1; l++)
			{
				arr3[k][l] = x[k][l];
			}
		}
		printf("\nSum can't be found.\n");
	}
}

int up(int x[][50], int arr3[][50])
{
	int i, j;
	if (r1 == c1)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				if (i < j)
				{
					arr3[i][j] = x[i][j];
				}
				else
				{
					arr3[i][j] = 0;
				}
			}
		}
	}
	else
	{
		printf("\nOperation cant be performed.\n");
	}
}

int lo(int x[][50], int arr3[][50])
{
	int i, j;
	if (r1 == c1)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				if (i <= j)
				{
					arr3[i][j] = 0;
				}
				else
				{
					arr3[i][j] = x[i][j];
				}
			}
		}
	}
	else
	{
		printf("\nOperation cant be performed.\n");
	}

}

int squnit(int x[][50], int arr3[][50])
{
	int i, j;
	if (r1 == c1)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				if (i == j)
				{
					arr3[i][j] = 1;
				}
				else
				{
					arr3[i][j] = 0;
				}
			}
		}
	}
	else
	{
		printf("\nOperation cant be performed.\n");
	}
}

int sumofrc(int x[][50], int arr3[][50])
{
	int i, j, k, l, rsum, csum;

	for (i = 0; i < r1; i++)
	{
		rsum = 0;
		for (j = 0; j < c1; j++)
		{
			arr3[i][j] = x[i][j];
			rsum = rsum + x[i][j];
		}
		printf("\nThe sum of row  %d  is :%d\n", i + 1, rsum);


	}
	for (k = 0; k < c1; k++)
	{
		csum = 0;
		for (l = 0; l < r1; l++)
		{
			arr3[k][l] = x[k][l];
			csum = csum + x[l][k];
		}
		printf("\nThe sum of column %d is:%d\n", k + 1, csum);
	}


}

int checkunit(int x[][50], int arr3[][50])
{
	int i, j, flag;
	flag = 0;
	if (r1 == c1)
	{
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				arr3[i][j] = x[i][j];
				if (((i == j) && (arr3[i][j] == 1)) || ((i != j) && (arr3[i][j] == 0)))
				{
					flag = 0;
				}
				else
				{
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{
			printf("\nUnit matrix...\n");
		}
		else
		{
			printf("\nNot unit matrix....\n");
		}
	}
	else
	{
		printf("\nOperation cant be performed.\n");
	}
}
