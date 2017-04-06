//============================================================================
// Name        : Sort.cpp
// Author      : koong
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MergeSort.h"

using namespace std;

void mergesort(int A[], int left, int right)
{
	int mid=0;
	if(left<right){
		mid = (left+right)/2;
		mergesort(A, left, mid);
		mergesort(A, mid+1, right);
		merge(A, left, mid, right);
	}
}

void merge(int A[], int left, int mid, int right)
{
	int i,j,k;
	i = left;
	j = mid+1;
	k = left;

	int temp[10];

	while(i<=mid && j<=right){
		if(A[i] <= A[j]){
			temp[k++] = A[i++];
		}
		else{
			temp[k++] = A[j++];
		}
	}

	if(i>mid){
		for(int m=i ; m<=right ; m++){
			temp[k++] = A[m];
		}
	}
	else{
		for(int m=i ; m<=mid ; m++){
			temp[k++] = A[m];
		}
	}

	for(int m=left ; m<=right ; m++){
		A[m] = temp[m];
	}
}
