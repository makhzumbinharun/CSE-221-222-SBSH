#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	int arr[N];
	for(int i = 0; i < N; i++){
	    scanf("%d", &arr[i]);
	}
	
	int p;
	scanf("%d", &p);
	
	for(int i = p; i < N; i++){
	    arr[i] = arr[i + 1];
	}
	
	for(int i = 0; i < N - 1; i++){
	    printf("%d ", arr[i]);
	}
	
	return 0;
}
