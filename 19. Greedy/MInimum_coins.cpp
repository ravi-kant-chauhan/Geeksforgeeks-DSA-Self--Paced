#include<bits/stdc++.h>
using namespace std;

/*

Consider infinite supply of the following value of coins
10 5  2 1

If someone asks for an amount, how will you give the amount using minimum coins?
*/

int minCoins(int coin[], int n, int amount)
{
    sort(coin, coin+n);

    int res = 0;

    for(int i = n-1; i>=0; i--)
    {
        if(coin[i] <= amount)
        {
            int c = floor(amount/coin[i]);
            res = res + c;

            amount = amount - c *coin[i];
        }
        if(amount == 0)
            break;
    }
    return res;
}

int main()
{
    int coin[] = {5, 10, 2, 1};
    int n = 4, amount = 56;

    cout<<minCoins(coin, n, amount);

    return 0;
}