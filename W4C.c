#include <stdio.h>

int main(){
	int t, a[1001], b[1001], i;
	
	scanf("%d", &t);
	
	for(i=1; i <= t; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=1; i <= t; i++)
		if(a[i] < b[i]){
			printf("Case #%d: Bi-pay\n", i);
		} else if(a[i] > b[i]){
			printf("Case #%d: Go-jo\n", i);
		}
		
	return 0;
}
