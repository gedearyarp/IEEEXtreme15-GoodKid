#include <bits/stdc++.h>

using namespace std;

int const mod = 998244353;

class Coin
{
	public:
		Coin(int denom, int supply)
		{
			denom_ = denom;
			supply_ = supply;
		}
		int denom_;
		int supply_;
};

long long WaysCount(vector<Coin> const &coins, int amount, int idx, int supply, unordered_map<long long, long long> &memo)
{
	if (amount < 0 ||
		idx >= coins.size() ||
		supply < 0)
	{
		return 0;
	}
	if (amount == 0) {
		return 1;
	}
	if (supply == 0) {
		++idx;
		if (idx >= coins.size()) {
			return 0;
		}
		supply = coins[idx].supply_;
	}

	long long memo_key = ((((long long)amount << 16) | idx) << 32) | supply;
	auto it = memo.find(memo_key);
	if (it != memo.end()) {
		return it->second;
	}

	int count = WaysCount(coins, amount - coins[idx].denom_, idx, supply - 1, memo) +
				WaysCount(coins, amount, idx + 1, idx + 1 < coins.size() ? coins[idx + 1].supply_ : 0, memo);

	memo[memo_key] = count % mod;
	return memo[memo_key];
}


int main(){
	unordered_map<long long, long long> memo;
	vector<Coin> coins;
	int n,k;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		int a,b;
		cin>>a>>b;
		coins.push_back(Coin(b,a));
	}
	cout << WaysCount(coins, k, 0, coins[0].supply_, memo) % mod << "\n";
	return 0;
}