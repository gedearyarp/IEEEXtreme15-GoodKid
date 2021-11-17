#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

char a[100], b[100];
long long ans, ans1, ans2, fin, t, n, m, c, temp1, temp2;
vector <long long> temp;

int main(){
	cin>>t;
	
	for(int i=0; i<t; i++){
		temp.clear();
		ans1 = 0;
		ans2 = 0;
		cin>>n>>m>>c;
		a[0] = '#';
		b[0] = '#';
		for(int j=1; j<=m; j++){
			cin>>a[j];
		}
		for(int j=1; j<=m; j++){
			cin>>b[j];
		}
		if(c==2){
			for(int j=1; j<=m; j++){
				if(a[j] == '#' && b[j] == '#'){
					ans = (ans1 + ans2)%mod;
					if(ans > 0){
						temp.push_back(ans);
					}
					ans1 = 0;
					ans2 = 0;
				}
				else if(a[j] == '#' && b[j] == '.'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 2;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (2*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (2*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (2*ans1 + ans2)%mod;
						ans2 = 0;
					}
				}
				else if(a[j] == '.' && b[j] == '#'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 2;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (2*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (2*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (2*ans1 + ans2)%mod;
						ans2 = 0;
					}
				}
				else{
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 2;
						ans2 = 2;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans2 = ans1;
						ans1 = (2*ans1)%mod;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans2 = ans1;
						ans1 = (2*ans1)%mod;
					}
					else{
						ans1 = (2*ans1)%mod;
					}
				}
			}
			ans = (ans1 + ans2)%mod;
			temp.push_back(ans);
			fin = 1;
			for(int j=0; j<temp.size(); j++){
				if(temp[j]>0){
					fin *= temp[j];
					fin %= mod;
				}
			}
			cout<<fin<<endl;
		}
		if(c==3){
			for(int j=1; j<=m; j++){
				if(a[j] == '#' && b[j] == '#'){
					ans = (ans1 + ans2)%mod;
					if(ans > 0){
						temp.push_back(ans);
					}
					ans1 = 0;
					ans2 = 0;
				}
				else if(a[j] == '#' && b[j] == '.'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 3;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (3*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (3*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (3*ans1 + 2*ans2)%mod;
						ans2 = 0;
					}
				}
				else if(a[j] == '.' && b[j] == '#'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 3;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (3*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (3*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (3*ans1 + 2*ans2)%mod;
						ans2 = 0;
					}
				}
				else{
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 6;
						ans2 = 3;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans2 = (2*ans1)%mod;
						ans1 = (6*ans1)%mod;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans2 = (2*ans1)%mod;
						ans1 = (6*ans1)%mod;
					}
					else{
						temp1 = ans1;
						temp2 = ans2;
						ans1 = (6*temp1+2*temp2)%mod;
						ans2 = (temp1 + 2*temp2)%mod;
					}
				}
			}
			ans = (ans1 + ans2)%mod;
			temp.push_back(ans);
			fin = 1;
			for(int j=0; j<temp.size(); j++){
				if(temp[j]>0){
					fin *= temp[j];
					fin %= mod;
				}
			}
			cout<<fin<<endl;
		}
		if(c==4){
			for(int j=1; j<=m; j++){
				if(a[j] == '#' && b[j] == '#'){
					ans = (ans1 + ans2)%mod;
					if(ans > 0){
						temp.push_back(ans);
					}
					ans1 = 0;
					ans2 = 0;
				}
				else if(a[j] == '#' && b[j] == '.'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 4;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (4*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (4*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (4*ans1 + 3*ans2)%mod;
						ans2 = 0;
					}
				}
				else if(a[j] == '.' && b[j] == '#'){
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 4;
						ans2 = 0;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans1 = (4*ans1)%mod;
						ans2 = 0;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans1 = (4*ans1)%mod;
						ans2 = 0;
					}
					else{
						ans1 = (4*ans1 + 3*ans2)%mod;
						ans2 = 0;
					}
				}
				else{
					if(a[j-1] == '#' && b[j-1] == '#'){
						ans1 = 12;
						ans2 = 4;
					}
					else if(a[j-1] == '.' && b[j-1] == '#'){
						ans2 = (3*ans1)%mod;
						ans1 = (12*ans1)%mod;
					}
					else if(a[j-1] == '#' && b[j-1] == '.'){
						ans2 = (3*ans1)%mod;
						ans1 = (12*ans1)%mod;
					}
					else{
						temp1 = ans1;
						temp2 = ans2;
						ans1 = (12*temp1+6*temp2)%mod;
						ans2 = (2*temp1 + 3*temp2)%mod;
					}
				}
			}
			ans = (ans1 + ans2)%mod;
			temp.push_back(ans);
			fin = 1;
			for(int j=0; j<temp.size(); j++){
				if(temp[j]>0){
					fin *= temp[j];
					fin %= mod;
				}
			}
			cout<<fin<<endl;
		}
	}
}