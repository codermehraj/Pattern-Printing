/*
		You will be given an integer n
		1<= n <= 1000
		you have to print this:
		
		for n=7:
		7 7 7 7 7 7 7 7 7 7 7 7 7 
		7 6 6 6 6 6 6 6 6 6 6 6 7 
		7 6 5 5 5 5 5 5 5 5 5 6 7 
		7 6 5 4 4 4 4 4 4 4 5 6 7 
		7 6 5 4 3 3 3 3 3 4 5 6 7 
		7 6 5 4 3 2 2 2 3 4 5 6 7 
		7 6 5 4 3 2 1 2 3 4 5 6 7 
		7 6 5 4 3 2 2 2 3 4 5 6 7 
		7 6 5 4 3 3 3 3 3 4 5 6 7 
		7 6 5 4 4 4 4 4 4 4 5 6 7 
		7 6 5 5 5 5 5 5 5 5 5 6 7 
		7 6 6 6 6 6 6 6 6 6 6 6 7 
		7 7 7 7 7 7 7 7 7 7 7 7 7 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
					<  <  MY SOLUTION  > >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/* ~ CoderMehraJ ~ */
#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int n,tot,p,q;
    scanf("%d", &n);
  	int ar[2*n][2*n];
    tot=2*n-1;
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            ar[i][j]=0;
        }
    }
    p=0; q=tot-1;
    for(int i=n;i>=1;i--){
        for(int j=0+p;j<tot;j++){
            ar[p][j]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[j][p]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[q][j]=i;
        }
        for(int j=0+p;j<tot;j++){
            ar[j][q]=i;
        }
        p++;
        q--;
        tot--;
    }
    for(int i=0;i<(2*n)-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            printf("%d ",ar[i][j]);
        }
        puts("");
    }
    return 0;
}
