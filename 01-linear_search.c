/* Roll No:3
   Alen Anto Abraham
   01: Sequential search
*/
#include<stdio.h>

int main(){
	int a[10],i,x;
	for(i=0;i<10;i++)
		scanf("%d",a+i);

	scanf("%d",&x);
	
	for(i=0;i<10;i++)
		if(a[i]==x){
			printf("found in index %d\n",a[i]);
			return 0;
		}
	
	printf("not in list\n");
	return 0;
}
