#include <stdio.h> 
int main() 
{ 
	int p, r, i, j, k; 
	p = 5;  
	r = 3; 
	int alloc[5][3] = { { 0, 1, 0 }, { 2, 0, 0 },  { 3, 0, 2 }, { 2, 1, 1 }, { 0, 0, 2 } };
	int max[5][3] = { { 7, 5, 3 }, { 3, 2, 2 },  { 9, 0, 2 }, { 2, 2, 2 }, { 4, 3, 3 } };  
	int avail[3] = { 3, 3, 2 }; 
	nt f[p], ans[p], ind = 0; 
	for (k = 0; k < p; k++)
        { 
		f[k] = 0; 
	} 
	int need[p][r]; 
	for (i = 0; i < p; i++) 
	{ 
		for (j = 0; j < r; j++) 
			need[i][j] = max[i][j] - alloc[i][j]; 
	} 
	int y = 0; 
	for (k = 0; k < 5; k++)
		 { 
		for (i = 0; i < p; i++) 
			{ 
			if (f[i] == 0)
			 { 
				int flag = 0; 
				for (j = 0; j < r; j++) 


