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
string a[35], b[75];
int byk(string a[], string b[],int ar, int ac, int br, int bc, int x,int y){
	int maks=0, now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[i][j]==b[x+i][y+j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[i][j]==b[x-i][y-j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][j]==b[x+i][y-j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[i][j]==b[x-i][y+j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[i][j]==b[x+j][y-i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[i][j]==b[x-j][y+i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[i][j]==b[x+j][y+i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][j]==b[x-j][y-i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][ac-j-1]==b[x+i][y+j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][ac-j-1]==b[x-i][y-j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][ac-j-1]==b[x+i][y-j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][ac-j-1]==b[x-i][y+j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][ac-j-1]==b[x+j][y-i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][ac-j-1]==b[x-j][y+i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][ac-j-1]==b[x+j][y+i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][ac-j-1]==b[x-j][y-i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][j]==b[x+i][y+j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][j]==b[x-i][y-j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][j]==b[x+i][y-j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][j]==b[x-i][y+j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][j]==b[x+j][y-i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][j]==b[x-j][y+i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][j]==b[x+j][y+i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][j]==b[x-j][y-i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[i][ac-j-1]==b[x+i][y+j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j-1]==b[x-i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j-1]==b[x+i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	/*
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j]==b[x+i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	*/
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[i][ac-j-1]==b[x-i][y+j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j-1]==b[x+j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[i][ac-j-1]==b[x-j][y+i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[i][ac-j-1]==b[x+j][y+i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j-1]==b[x-j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	/*
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j]==b[x-j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	*/
	return maks;
}

int byk2(string a[], string b[],int ar, int ac, int br, int bc, int x,int y){
	int maks=0, now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[i][j]==b[x+i][y+j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[i][j]==b[x-i][y-j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][j]==b[x+i][y-j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[i][j]==b[x-i][y+j] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[i][j]==b[x+j][y-i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[i][j]==b[x-j][y+i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[i][j]==b[x+j][y+i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][j]==b[x-j][y-i] && a[i][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][ac-j-1]==b[x+i][y+j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][ac-j-1]==b[x-i][y-j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][ac-j-1]==b[x+i][y-j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][ac-j-1]==b[x-i][y+j] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][ac-j-1]==b[x+j][y-i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][ac-j-1]==b[x-j][y+i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][ac-j-1]==b[x+j][y+i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][ac-j-1]==b[x-j][y-i] && a[ar-i-1][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][j]==b[x+i][y+j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][j]==b[x-i][y-j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[ar-i-1][j]==b[x+i][y-j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[ar-i-1][j]==b[x-i][y+j] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][j]==b[x+j][y-i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][j]==b[x-j][y+i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[ar-i-1][j]==b[x+j][y+i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[ar-i-1][j]==b[x-j][y-i] && a[ar-i-1][j]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	
	
	
	
	
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y+j >= 0 && y+j < bc){
				if(a[i][ac-j-1]==b[x+i][y+j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j-1]==b[x-i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	/*if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j-1]==b[x+i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	*/
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+i >= 0 && x+i < br && y-j >= 0 && y-j < bc){
				if(a[i][ac-j]==b[x+i][y-j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-i >= 0 && x-i < br && y+j >= 0 && y+j < bc){
				if(a[i][ac-j-1]==b[x-i][y+j] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j-1]==b[x+j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y+i >= 0 && y+i < bc){
				if(a[i][ac-j-1]==b[x-j][y+i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x+j >= 0 && x+j < br && y+i >= 0 && y+i < bc){
				if(a[i][ac-j-1]==b[x+j][y+i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j-1]==b[x-j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	/*
	for(int i=0; i<ar;i++){
		for(int j=0; j<ac; j++){
			if(x-j >= 0 && x-j < br && y-i >= 0 && y-i < bc){
				if(a[i][ac-j]==b[x-j][y-i] && a[i][ac-j-1]=='#')now++;
			}
		}
	}
	if(now>maks) maks = now;now=0;
	*/
	return maks;
}

int main() {
	gedearyarp();
	int tc; cin >>tc;
	while(tc--){
		int ac,ar,bc,br, ans=0;
		cin >> ar >> ac;
		for(int i=0;i<ar;i++) cin >> a[i];
		cin >> br >> bc;
		for(int i=0;i<br;i++) cin >> b[i];
		
		for(int i=0;i<br;i++){
			for(int j=0; j<bc;j++){
				int cur = byk(a, b, ar,ac,br,bc,i,j);
				if(cur>ans)ans=cur;
				cur = byk(b, a, br,bc,ar,ac,i,j);
				//if(cur>ans)ans=cur;
			}
		}
		
		for(int i=0;i<ar;i++){
			for(int j=0; j<ac;j++){
				int cur1 = byk(a, b, ar,ac,br,bc,i,j);
				//if(cur>ans)ans=cur;
				int cur2 = byk2(a, b, ar,ac,br,bc,i,j);
				int cur;
				if(bc <= br){
				    cur = cur1;
				}
				else{
				    cur = cur2;
				}
				if(cur>ans)ans=cur;
			}
		}
		cout << ans << el;
	}
}
/*
4
3 3
...
###
..#
4 5
.#...
.#...
.###.
.....
3 3
.#.
#.#
.#.
3 3
#.#
.#.
#.#
5 5
#....
.....
.....
....#
..###
5 5
..#..
###..
.....
...##
...#.
1 6
#.#.#.
6 1
#
.
#
.
#
.
*/
