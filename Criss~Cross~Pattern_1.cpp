/*
	You will be given an integer n
	1<= n <= 1000
	you have to print this:
		
    for n=7:
  1 2 3 4 5 6 7 6 5 4 3 2 1 
	2 1 2 3 4 5 6 5 4 3 2 1 2 
	3 2 1 2 3 4 5 4 3 2 1 2 3 
	4 3 2 1 2 3 4 3 2 1 2 3 4 
	5 4 3 2 1 2 3 2 1 2 3 4 5 
	6 5 4 3 2 1 2 1 2 3 4 5 6 
	7 6 5 4 3 2 1 2 3 4 5 6 7 
	6 5 4 3 2 1 2 1 2 3 4 5 6 
	5 4 3 2 1 2 3 2 1 2 3 4 5 
	4 3 2 1 2 3 4 3 2 1 2 3 4 
	3 2 1 2 3 4 5 4 3 2 1 2 3 
	2 1 2 3 4 5 6 5 4 3 2 1 2 
	1 2 3 4 5 6 7 6 5 4 3 2 1 
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					<  <  MY SOLUTION  > >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/* ~ CoderMehraJ ~ */
#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int n,p,q;
    scanf("%d", &n);
  	int ar[2*n][2*n];
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            ar[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		ar[i-1][j-1]=i-j+1;
    	}
    	p=2;
    	for(int j=i;j<n;j++){
    		ar[i-1][j]=p++;	
    	}
    	p-=2;
    	q=n;
    	for(int j=1;j<=n-i;j++){
    		ar[i-1][q++]=p--;
    	}
    	p=2;
    	for(int j=1;j<=i-1;j++){
    		ar[i-1][q++]=p++;
    	}
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n)-1;j++){
            printf("%d ",ar[i][j]);
        }
        puts("");
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<(2*n)-1;j++){
            printf("%d ",ar[i][j]);
        }
        puts("");
    }
    return 0;
}
