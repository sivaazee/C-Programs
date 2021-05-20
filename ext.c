int v=10;
void call();
void call2();
void main()
{
	call1();
	call2();
	printf("\n in main() v=%d\n",v);
}
void call1()
{
	printf("\n in call1() v=%d\n",v);
}
void call2()
{	
	printf("\n in call2() v=%d\n",v);
}
