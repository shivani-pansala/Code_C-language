void main()
{
	int i,j,n[5],t;
	
	for(i=0;i<5;i++)
	{
		printf("Enter a value=");
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%2d",n[i]);
	}
	
}
