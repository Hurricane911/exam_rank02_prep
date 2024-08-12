void	sort_int_tab(int *tab, unsigned int size);

int	main(void)
{
	int num[] = {5, 3, 4, 1, 2};
	unsigned int size = 5;

	printf("Before sorting:\n");
	for (unsigned int i = 0; i < size; i++)
		printf("%d ", num[i]);
	printf("\n");

	sort_int_tab(num, size);

	printf("After sorting:\n");
	for (unsigned int i = 0; i < size; i++)
		printf("%d ", num[i]);
	printf("\n");

	return 0;
}
