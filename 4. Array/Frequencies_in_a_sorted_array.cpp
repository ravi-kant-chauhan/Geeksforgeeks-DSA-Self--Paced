#include<bits/stdc++.h>
using namespace std;



// Time complexity = Theta(n)

void frequencies(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int count=1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                count++;
                i++;
            }
            else
                break;
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}

// Learnt Approach
/*
void printFreq(int arr[], int n)
{
	int freq = 1, i = 1;

	while(i < n)
	{
		while(i < n && arr[i] == arr[i - 1])
		{
			freq++;
			i++;
		}

		cout<<arr[i - 1] << " " << freq << endl;

		i++;
		freq = 1;
	}
}
*/

int main()
{
    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    frequencies(arr, n);
    return 0;
}