#include<stdio.h>
long long int A[10000000],B[100000000];
int main()
{
	long long int n,max,i,j,p,c=0;
	scanf("%lld %lld",&n,&max);
	for(i=0;i<n;i++)
		scanf("%lld",&A[i]);
	i=0;
	do
	{
		scanf("%lld",&B[i]);
		i++;
	}while(B[i-1]!=0);
	c=0;
	p=0;
	for(j=0;j<i;j++)
	{
		if(p!=0){
			if(B[j]==1){p--;}}
			if(B[j]==2)
				if(p<n-1)
				p++;
			if(B[j]==3)
				if(c==0)
					if(A[p]>0)
						{c++; A[p]--;}
			if(B[j]==4)
				if(c>0)
					if(A[p]<max)
						{A[p]++; c--;}
			if(B[j]==0)
				break;
	}
	for(i=0;i<n;i++)
		printf("%lld ",A[i]);
	printf("\n");
	return 0;
}
