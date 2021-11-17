#include<bits/stdc++.h>
using namespace std;

int t, r, c, x, y, cnt;
bool sama;
char a[500][500], b[500][500];

int main(){
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>r>>c;
		for(int j=0; j<r; j++){
			for(int k=0; k<c; k++){
				cin>>a[j][k];
			}
		}
		cin>>x>>y;
		for(int j=0; j<x; j++){
			for(int k=0; k<y; k++){
				cin>>b[j][k];
			}
		}
		
		cnt = 0;
		for(int j=0; j<=r-x; j++){
			for(int k=0; k<=c-y; k++){
				sama=true;
				for(int p=0; p<x; p++){
					for(int q=0; q<y; q++){
						if(b[p][q] == '?'){
							continue;
						}
						else if(b[p][q] != a[j+p][k+q]){
							sama = false;
						}
					}
				}
				if(sama){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}