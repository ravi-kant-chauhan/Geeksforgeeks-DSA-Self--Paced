#include<bits/stdc++.h>
using namespace std;


/*   Passing with fixed values

Problem ->   Can't be used for passing different sized array



void print(int mat[3][2]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int mat[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60},
    };
    print(mat);
    return 0;
}

*/


/*      Passing with first slot empty


void print(int mat[][2], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < 2; j++)
			cout << mat[i][j] << " ";
	}
}

int main()
{	

	int mat[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	print(mat, 3);

	return 0;
}
*/


/*          Declaring constant global variables


const int R = 3;
const int C = 2;

void print(int mat[R][C])
{
	for(int i = 0; i < R; i++)
	{
		for(int	j = 0; j < C; j++)
			cout << mat[i][j] << " ";
	}
}

int main()
{	

	int mat[R][C] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	print(mat);

	return 0;
}

*/


///    ****    C Style   ****

/*          Using Double Pointer


void print(int **arr, int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < n; j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	int *arr[m];

	for(int i = 0; i < m; i++)
	{
		arr[i] = new int[n];

		for(int j = 0; j < n; j++)
		{
			arr[i][j] = i;

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}

*/



/*          Using Array of Pointers


void print(int *arr[], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < n; j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	int *arr[m];

	for(int i = 0; i < m; i++)
	{
		arr[i] = new int[n];

		for(int j = 0; j < n; j++)
		{
			arr[i][j] = i;

			cout << arr[i][j] << " ";
		}
	}


	return 0;
}

*/



///        *****  Vector Based  *****

/*      Using array of vectors




void print(vector<int> arr[], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	vector<int> arr[m];

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i].push_back(i);
		}
	}

	print(arr, m);

	return 0;
}

*/


/*   Using vector of vectors




*/

void print(vector<int> arr[], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int	j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	vector<int> arr[m];

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			arr[i].push_back(i);
		}
	}

	print(arr, m);

	return 0;
}