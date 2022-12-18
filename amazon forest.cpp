#include <stdio.h>
#include <string.h>
int main()
{   int k,i;
    scanf("%d",&k);
    while(k--){
        char forest[100];
        scanf("%s",forest);
        int n=strlen(forest);
        int t=0;
        int l=0;
        for(i=0;i<n;i++){
            if(forest[i]=='t')
            t++;
            else if(forest[i]=='l'){
                l++;
                if(forest[i-1]=='t'||forest[i+1]=='t')
                t--;}}
            if(t>l)
            printf("Tiger\n");
             else if(l>t)
             printf("Lion\n");
             else 
             printf("tie\n");
             
        }    

	return 0;
}
