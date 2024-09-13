#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		i;
	int		j;
	int		a;
	int		b;
	int		x_line;
	int		y_line;
	char	**board;
	int		draw1;
	int		draw2;
	int		min;

	scanf("%d %d", &y_line, &x_line);
	board = (char **)malloc(sizeof(char *) * y_line);
	scanf("%c", &board[0][0]);
	i = 0;
	while (i < y_line)
	{
		board[i] = (char *)malloc(sizeof(char) * x_line + 1);
		scanf("%s", board[i]);
		i++;
	}
	i = 0;
	min = y_line * x_line;
	while (i < y_line - 7)
	{
		j = 0;
		while (j < x_line - 7)
		{
			draw1 = 0; //Start with 'W'
			draw2 = 0; //Start with 'B'
			a = i;
			while (a < i + 8)
			{
				b = j;
				while (b <  j + 8)
				{
					if ((a + b) % 2 == 0)
					{
						if (board[a][b] != 'W')
							draw1++;
						if (board[a][b] != 'B')
						 	draw2++;
					}
					else
					{
						if (board[a][b] != 'B')
							draw1++;
						if (board[a][b] != 'W')
							draw2++;
					}
					b++;
				}
				a++;
			}
			if (draw1 < min)
				min = draw1;
			if (draw2 < min)
			 	min = draw2;
			j++;
		}
		i++;
	}
	printf("%d", min);
}