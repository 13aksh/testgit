#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long int
#define loop(i,n) for(i = 0;i<n;i++)

int main(){
	FILE *f,*fo;
	f = fopen("A-large.in","r");
	fo = fopen("output.out","w");
	int i,j,k,t,a[10];
	ll n,y,last;
	fscanf(f,"%d",&t);
//	scanf("%d",&t);
	loop(k,t){
		j = 1;
		loop(i,10){
			a[i] = 0;
		}
		fscanf(f,"%lld",&n);
//		scanf("%lld",&n);
		i = 0;
		if(n == 0){
//			printf("Case #%d: INSOMNIA\r\n",k+1);
			fprintf(fo,"Case #%d: INSOMNIA\r\n",k+1);
			continue;
		}
		while(i!=10){
			loop(i,10){
				if(a[i] == 0)
					break;
			}
			if(i != 10){
				y = n*j;
//				printf("Max val = %lld\n",y);
				last = y;
				while(y){
					a[y%10] = 1;
//					printf("a[%lld] = 1\n",y%10);
					y = y/10;
				}
			}
			j++;
		}
		fprintf(fo,"Case #%d: %lld\r\n",k+1,last);
//		printf("Case #%d: %lld\r\n",k+1,last);
	}
    fclose(f);
    fclose(fo);
	return 0;
}
