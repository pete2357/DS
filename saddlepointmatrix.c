#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, k, m,n, min, max,pos[2][2];

    int matrix[3][3]={{1, 2, 3},{4, 5, 6},{0, 8, 9}};
    m=3;
    n=3;
    for (i = 0; i < m; i++)
		{
			min = matrix[i][0];
			for (j = 0; j < m; j++)
				{
					if (min >= matrix[i][j])
						{
							min = matrix[i][j];
							pos[0][0] = i;
							pos[0][1] = j;
						}
				}
     j = pos[0][1];
     max = matrix[0][j];
	for (k = 0; k < m; k++)
	{
		if (max <= matrix[k][j])
			{
				max = matrix[i][j];
				pos[1][0] = k;
				pos[1][1] = j;
			}
	}
	if (min == max) 
    {
		if (pos[0][0] == pos[1][0] &&pos[0][1] == pos[1][1])
		{
			printf("Saddle point : %d\n", max);
            return 0;
		}
	}
}
}