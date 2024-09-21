#include <stdio.h>

int	main(void)
{
	int		word_cnt;
	char	input[1000003];
	int		i;
	int		fl;

	// scanf("%s", input);
	fgets(input, 1000003, stdin);
	int	len = 0;
	while (input[len] != '\0')
		len++;
	input[len - 1] = '\0';
	i = 0;
	fl = 0;
	word_cnt = 0;
	while (input[i])
	{
		if (fl == 0 && input[i] == ' ')
		{
			i++;
		}
		else if (fl == 0 && input[i] != ' ')
		{
			fl = 1;
			i++;
		}
		else if (fl == 1 && input[i] == ' ')
		{
			fl = 0;
			word_cnt++;
			i++;
		}
		else
		{
			i++;
		}
	}
	if (fl == 1)
		word_cnt++;
	printf("%d", word_cnt);
}