#include<bits/stdc++.h>
using namespace std;
/*Start*/
/*

  by Phong5G
  
*/

#define ll long long
#define db double
#define fi first
#define se second
#define mp make_pair
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i <= n; i++)
#define maxn 50004

typedef pair <int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const ll oo=1e13;
const int mod=1e9+7;
const int N=1e6+5;

int n,k;
int a[1005],b[1005];
int l1 = 0;
void ql(int i){
	for(int j = a[i-1] + 1; j <= l1-k+i; j++){
		a[i] = j;
		if(i == k){
			for(int g = 1; g <= k; g++){
				cout << b[a[g]-1] <<" ";
			}
			cout << endl;
		}else ql(i+1);
	}
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	a[1005] = {0};
    	b[1005] ={};
    	cin >> n >> k;
    	set<int>se;
    	f0(i,n){
    		int x; cin >> x;se.insert(x);
		}
    	for(auto i:se) b[l1++] = i;
    	ql(1);
    }
}
/*THE END*/



