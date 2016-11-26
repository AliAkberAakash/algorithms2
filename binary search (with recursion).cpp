#include<stdio.h>

void ascend(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

bool binsearch(int a[],int b, int e,int i)
{
	int m=(b+e)/2;
	if(a[m]==i)
	return true;
	else if(b<=e&&a[m]!=i)
	{
		if(a[m]>i)
		e=m-1;
		if(a[m]<i)
		b=m+1;

		return binsearch(a,b,e,i);
	}
	else
	return false;
}

int main()
{

	int n,a[100000],i,b,e;

	bool f;

	scanf("%d", &n);

	for(int i=0; i<n; i++)
	scanf("%d", &a[i]);

	ascend(a,n);

	b=0;
	e=n;

	scanf("%d", &i);

	f=binsearch(a,b,n,i);

	if(f)
	printf("found\n");
	else
	printf("not found\n");


return 0;
}
