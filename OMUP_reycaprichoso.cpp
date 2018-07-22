#include <iostream>
#include <algorithm>
#define lli long long int
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n, a, A[1000002];
int lim = 1000000;
int x, y;

int main(){
	
	optimizar_io
	cin >> n;
	for( int i = 1; i <= n; i++ ){
		cin >> a;
		A[a]++;
	}
	
	for( int k = lim; k; k--  ){
	
		x = y = 0;
		for( int i = k; i <= lim; i += k ){
			if( A[i] ){
				if( A[i] > 1 ){
					x = y = i;
					//cout<<"GT"<<endl;
				} else {
					x = y; y = i;
					//cout<<x<<" "<<y<<endl;
				}
			}
		}
		
		if( x != 0 && y != 0 ){
			//cout<<x<<" "<<y<<" "<<k<<endl;
			long long int ans = ( (lli)(x) * (lli)(y) ) / (lli)(k);
			cout << ans << "\n";
			break;
		}
	}
	
	return 0;
	
}
