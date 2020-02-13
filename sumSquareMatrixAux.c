#include <stdio.h>
#include <stdlib.h>


void multiply(int mat1[500][500], int mat2[500][500], int res[500][500]) { 
    int i, j, k; 
    int aux=0;
    for (i = 0; i < 500; i++) 
    { 
        for (j = 0; j < 500; j++) 
        { 
            res[i][j] = 0; 
            
            for (k = 0; k < 500; k++) 
                aux += mat1[i][k]*mat2[k][j];
            res[i][j]= aux; 
        } 
        
    } 
}

double wallclock(void)
{
	struct timeval tv;
	double t;
	
	gettimeofday(&tv, NULL);
	
	t = (double)tv.tv_sec;
	t += ((double)tv.tv_usec)/1000000.0;
	
	return t;
}

int main() 
{ 
	double time;
	time= wallclock();
    int mat1[500][500]; 
  
    int mat2[500][500]; 
  	for (int i = 0; i < 500; ++i)
  	{
  		for (int j = 0; j < 500; ++j)
  		{
  			mat1[i][j]= rand()%10;
  			mat2[i][j]= rand()%10;
  		}
  	}
    int res[500][500]; 
    int i, j; 
    multiply(mat1, mat2, res); 
  	/*
    printf("Result matrix is \n"); 
    for (i = 0; i < 500; i++) 
    { 
        for (j = 0; j < 500; j++) 
           printf("%d ", res[i][j]); 
        printf("\n"); 
    } 
    */
    time =wallclock() - time;
    printf("%lf\n",time);
  
    return 0; 
} 