#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int arr[N + 1];
	for(int i = 0; i < N; i++){
	    scanf("%d", &arr[i]);
	}
	
	int v;
	int p;
	scanf("%d %d", &v, &p);
	
	for(int i = N; i >= p; i--){
	    arr[i] = arr[i - 1];
	}
	arr[p] = v;
	N++;
	
	for(int i = 0; i < N; i++){
	    printf("%d ", arr[i]);
	}
	
	return 0;
}
