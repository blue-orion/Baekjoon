#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '.')
		cnt++;
	return (cnt);
}

//have to use stack;;
//Why can not use read?
//Why can not use scanf?
//Why can not use gets?
int	main(void)
{
	char	str[103];
	char	stack[103];
	int		i;
	int		fl;
	int		idx;

	while (1)
	{
		fl = 0;
//		str = (char *)malloc(sizeof(char) * 101);
/*		idx = 0;
		read(0, &str[idx], 1);
		if (str[idx] == '\n') {
            idx--;
        }
		while(str[idx] != '.')
		{
			read(0, &str[++idx], 1);
			if (str[idx] == '\n') {
            	idx--;
        	}
		}
*/
		fgets(str, 103, stdin);
		if (str[0] == '.')	
			return (0);
		idx = 0;
//		stack = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
		stack[0] = 0;
		i = 1;
		while (str[idx] != '.')
		{
			if (str[idx] == '(' || str[idx] == '[')
				stack[i++] = str[idx];
			if (str[idx] == ')')
			{
				if (stack[i - 1] != '(')
				{
					fl = -1;
					break ;
				}
				else
					i--;
			}
			if (str[idx] == ']')
			{
				if (stack[i - 1] != '[')
				{
					fl = -1;
					break ;
				}
				else
					i--;
			}
			idx++;
		}
		if (i == 1 && fl != -1)
			printf("yes\n");
		else
		 	printf("no\n");
//		free(str);
//		free(stack);
	}
}