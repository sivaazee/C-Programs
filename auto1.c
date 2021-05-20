main()
{
	auto int x=2;
	int x1=4;
	int x3_out=5;
	{
		auto int x=3;
		int x1=5;
		x3_out=6;
		printf("x=%d x1=%d  x3_out=%d\n",x,x1,x3_out);
	}
			printf("x=%d x1=%d  x3_out=%d",x,x1,x3_out);
}
