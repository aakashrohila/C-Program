#include <stdio.h>

int main(void) {
	int N,K,temp;
	long int M;
	int receives_Certificate;
	scanf("%d %d %d",&N,&M,&K);
	receives_Certificate = N;
	while(N--)
	{
	    int lecture_Time = 0;
	    long int total_time = 0,Q;
	    temp = K;
	    while(temp>0)
	    {
	        scanf("%d",&lecture_Time);
	        total_time = lecture_Time + total_time;
	        temp--;
	    }
	    scanf("%ld",&Q);
	    if(Q>10 || total_time < M)
	        receives_Certificate--;
	    
	}
	printf("%d",receives_Certificate);
	return 0;
}

