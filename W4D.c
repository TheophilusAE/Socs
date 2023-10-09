#include <stdio.h>

int main(){
	int t, i, a[101], b[101];
	
	scanf("%d", &t);
	for(i=1; i<=t; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=1; i<=t; i++){
		int total = 0;
		int empty = a[i];
		while(empty >= b[i]){
			int gelas = empty / b[i];
			total += gelas;
			empty = gelas + (empty % b[i]);
		}
		total += a[i];
		printf("Case #%d: %d\n", i, total);
	}
	return 0;
}
