char	*ft_strcpy(char *dest, char *src);

/*int	main(void)
{
	char src[] = "kjkjshk";
	char dest[] = "noan";

	ft_strcpy(dest, src);

	printf("%s", dest);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}