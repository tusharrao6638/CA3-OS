#include <stdio.h> 
int main() 
{ 
	int p, r, i, j, k; 
	p = 5;  
	r = 3; 
	int alloc[5][3] = { { 0, 1, 0 }, { 2, 0, 0 },  { 3, 0, 2 }, { 2, 1, 1 }, { 0, 0, 2 } };
	int max[5][3] = { { 7, 5, 3 }, { 3, 2, 2 },  { 9, 0, 2 }, { 2, 2, 2 }, { 4, 3, 3 } };  
	int avail[3] = { 3, 3, 2 }; 
