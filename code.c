#include <stdio.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
    // return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
}

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,x;
	    scanf("%d%d%d",&n,&m,&x);
	    int d[n];
	    int order[n];
	    memset(order,0,sizeof(order));
	    int id[8001];
	    memset(id,0,sizeof(id));
	    
	    int count = 0;
	    for(int i = 0; i < n; ++i){
	        scanf("%d",d+i);
	        order[i] = d[i];
	        id[d[i]] = i+1;
	        
	        if(d[i] >= m)
	            count++;
	    }
	    
	    qsort(order,n,sizeof(int),compare_ints);
	    int len = count >= x ? count : x;
	    int ans[len];
	    for(int i = n-1; i > n-len-1; --i)
	        ans[n-1-i] = id[order[i]];
	        
	    qsort(ans,len,sizeof(int),compare_ints);
	    
	    printf("%d ",len);
	    for(int i = 0; i < len; ++i)
	        printf("%d ",ans[i]);
	        
	    printf("\n");
	}
	return 0;
}

