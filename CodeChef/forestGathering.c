#include<stdio.h>
#include<limits.h>
int main()
{
	long long N,W,L;
	scanf("%lld %lld %lld",&N,&W,&L);
	long long i = 0;
        long long H[N],R[N];
	
	while(i<N)
	{
		scanf("%lld %lld",&H[i],&R[i]);
		i++;
	}
	long long left=0,right = W;
	long long mid;
	
	while(left<right)
	{
		mid = (left+right)/2;
		long long int midsum = 0;
		for(i = 0;i<N;i++)
		{
			long long int height = H[i]+ mid*R[i];
			if(height>=L)
				midsum+= height;
 			if(midsum>=W)
 			    break;
		}
//		printf("%d ",mid);
		if(midsum<W)
		{
		    
			left = mid+1;
		}
		else
			right = mid;
				
	}
	printf("%lld",right);
}

