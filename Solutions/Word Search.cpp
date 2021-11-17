#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
#define el '\n'
void gedearyarp(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
}

int main(){
	gedearyarp();
	int r, c, q;
	cin >> r >> c >> q;
	string s[r];
	for(int i=0;i<r;i++){
		cin >> s[i];
	}
	while(q--){
		vector<int> ans;
		string wh;
		cin >> wh;
		int pjg = wh.size(), gada = 1;
		for(int i=0; i<r && gada; i++){
			for(int j=0; j<c && gada; j++){
				for(int arrowX=-1; arrowX<=1 && gada;arrowX++){
					for(int arrowY=-1; arrowY<=1 && gada;arrowY++){
						if(arrowX!=0 || arrowY!=0){
						
							string cur="";
							if(i+arrowX*(pjg-1)>=0 && i+arrowX*(pjg-1) <= r-1 && j+arrowY*(pjg-1)>=0 && j+arrowY*(pjg-1) <= c-1){
								for(int x=0; x<pjg; x++){
									cur += s[i+arrowX*x][j+arrowY*x];
								}
							}
							if (cur == wh){
								ans.pb(i);
								ans.pb(j);
								ans.pb(i+arrowX*(pjg-1));
								ans.pb(j+arrowY*(pjg-1));
								gada = 0;
							}
						}
					}
				}
			}
		}
		if (gada) cout << -1 << el;
		else{
			cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3] << el;
		}
	}
}
