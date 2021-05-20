void static_demo()
{
	int j=0;
	static int i;
	{
		static int i=1;
		printf("%d\t",i);
		i++;
	}
	printf("%d\t",i);
	printf("%d\n",j);
	i++;
	j++;
}
main()
{
	static_demo();
	static_demo();
}
