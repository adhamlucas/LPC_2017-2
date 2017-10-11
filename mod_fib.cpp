#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define vi vector<ll>
#define vvi vector <vi>

using namespace std;

int n, x;
vvi t;

vvi criar_identidade(int n){
	vvi idd = vvi(n, vi(n, 0));

	for(int i = 0; i < n; ++i) idd[i][i] = 1;

	return idd;
}

vvi idd;

vvi mult_quad(vvi a, vvi b, int m){
	vvi ans = vvi(n, vi(n, 0));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for( int k = 0; k < n; k++){
				ans[i][j] += a[i][k]*b[k][j];
			}
			ans[i][j] %= m;
		}
	}

	return ans;
}

vvi fexp(vvi b, int e, int m){
	vvi ans, raiz;

	if(e == 0)
		return idd;

	raiz = fexp(b, e/2, m);

	ans = mult_quad(raiz, raiz, m);

	if(e%2 == 1)
		ans = mult_quad(ans, b, m);

	return ans;
}

int main(){
	int mod;
	n = 2;



	idd = criar_identidade(n);

	while(cin>>x>>mod){
		mod = (1<<mod);
		vvi t = {{1,1}, {1,0}};
		t = fexp(t, x, mod);

		cout<<t[1][0]<<endl;
	}

	return 0;
}
