#include <iostream>
#include <cassert>

using namespace std;

// s = start of range to sort
// e = end of range to sort
void msort(int a[], int x[], int s, int e) {
	int len=(e-s+10);
	int *b = new int[len]();
	s= a[0];
	e= a[len-1];
	int m= (e-s)/2;
	int i, j, k;
	i = s;
	k = 0;
	j = m + 1;

	while (i <= m && j <= e)
	{
		if (a[i] < a[j])
		{
			x[k] = a[i];
			k++;
			i++;
		}
		else
		{
			x[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= m)
	{
		x[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= e)
	{
		x[k] = a[j];
		k++;
		j++;
	}

	for (i = s; i <= e; i++)
	{
		a[i] = x[i-s];
	}
}

void mergesort(int a[], int n) {
	x = new int[len];
	msort(a,x,0, --i);
	delete []x;
}

bool sorted(int a[], int n) {
	// stub
	return false;
}

int main(int argc, char * args[]) {
	int a[1000];
	for (int i = 0; i < 1000; ++i) a[i] = -50 + rand() % 100;
	mergesort(a, 1000);
	assert(sorted(a, 1000));
/*
	int b[1001];
	for (int i = 0; i < 1001; ++i) b[i] = -50 + rand() % 100;
	mergesort(b, 1001);
	assert(sorted(b, 1001));
	int c[] = { 2 };
	mergesort(c, 1);
	assert(sorted(c, 1));
	int d[] = { 1, 2, 3, 4, 5 };
	mergesort(d, 5);
	assert(sorted(d, 5));
*/
	cout << "All tests passed." << endl;	
}
