#include<stdio.h>
#include<string.h>
int main()
{
  int n,in,c_in;
	scanf("%d",&n);
	char str[n];
	int rpt[26];
	scanf("%s",str);
	if(n<26)
		printf("NO");
	else{
		for(int i=0;i<n;++i){
			c_in=(int)str[i];
			if(c_in>=97)
				c_in-=32;
			in=c_in-65;
			rpt[in]=1;
			// printf("%d\n",(int)str[i]);
		}
		for(int i=0;i<26;++i){
			if(rpt[i]!=1){
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
	}
}
