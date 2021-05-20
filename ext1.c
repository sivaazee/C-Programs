int num=75;
void main()
{
	int num=67;
	extern int num;
	printf("num=%d",num);
	display();
}
void display()
{
	extern int num;
	printf("num=%d",num);
}
