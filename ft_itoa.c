#include"libft.h"
char *ft_itoa(int n)
{
	char *d;

	if (!(d = ft_strdup("0")))
		return(NULL);
	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		return (ft_strjoin ("-", ft_itoa(n)));
	}
	*d = *d + (n % 10);
	if (n >= 0 && n <= 9)
	{
		return (ft_strdup(d));
	}
	else
		return (ft_strjoin(ft_itoa(n / 10),d));
}