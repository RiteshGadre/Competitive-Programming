//*******************************Ritesh Gadre********************************
#include<bits/stdc++.h>
using namespace std;
//******************Define Part******************
#define int 			long long int
#define lld			long long double
#define MOD1			1000000007
#define INF			1e18
#define endl 			"\n"
#define pb 		  	push_back
#define ppb 			pop_back
#define mps			make_pair
#define ff 			first
#define ss 			second
#define all(v) 			v.begin(), v.end()
#define allr(v) 		v.end(), v.begin()
#define forrev(i,a,n)		for(int i=n-1; i>=a; i--) 
#define forn(i,a,n) 		for(int i=a; i<n; i++)
#define sz(x) 			(int)x.size()
#define debug(x) 		cerr << x << " " ;
#define capital(a) 		transform(all(a),a.begin(), :: toupper)
#define small(a) 		transform(all(a),a.begin(), :: tolower)
#define yy 			cout << "YES" << endl
#define nn 			cout << "NO" << endl
#define bitc(x)			_builtin_popcount(x)

template<typename T>
ostream& operator<<(ostream& os, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cout << a << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& intermediate_array) { for (auto& a : intermediate_array) cin >> a; return is; }

// Debugging Part
// #define deb(x) cout << #x << "=" << x << endl
#define deb(x) cerr << #x << " " << x << endl ;
#define deb2(x, y) cerr << #x << "=" << x << ',' << #y << "=" << y << endl


/*#ifdef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x);
#endif*/
//*****************Typedef Part******************
typedef pair<int,int> p;
typedef vector<int> vi;
typedef vector<int> vs;

//**************Template*************************

//**************For Input************************
template <typename T>
void input(vector<T> &arr){
	for(int i=0; i<arr.size(); i++)
	{
		cin >> arr[i];
	}
}

//*************For Output************************
template <typename T>
void output(vector<T> &arr, bool br){
	for(int i=0; i<arr.size(); i++)
	{
		cout << arr[i] << ( (!br) ? " " : "\n");
	}
	if(!br) cout << endl;
}

//*******************Functions*******************
bool is_perfect_square(int n){
	if(n>0){
		int sr= sqrt(n);
		return (sr*sr== n);
	}
	return false;
}

bool is_power_of_two(int n){
	return (n&(n&(n-1)) ? false : true) ;
}

int strSum(string &str){
	int sum= 0;
	for(char &it : str){
		sum= sum + it - 46;
	}
	return sum;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool isvowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return 1;
	return 0;
}

void google(int n){
	cout << "case #" << n << ": ";
}
void file_IO(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

//*******************************Main Code Starts From Here***************************


void solve(){
	int n; cin >> n;
	string s; cin >> s;
	string ans= "";
	int num= stoi(s);
	cout << num << endl;
	vector<int> arr;
	int i=2;
	for(; i<sz(s); i++){
		string temp= "";
		temp.pb(s[i-2]);
		if(s[i]=='0') temp.pb(s[i-1]);
		int num= stoi(temp);
		arr.push_back(num);
	}

	// for(; i<n-2; ){
	// 	string temp= "";
	// 	temp.pb(s[i]);
	// 	temp.pb(s[i+1]);
	// 	temp.pb(s[i+2]);
	// 	int num;
	// 	if(temp.back()=='0'){
	// 		temp.ppb();
	// 		num= stoi(temp);
	// 		i+= 3;
	// 	}
	// 	else {
	// 		temp.ppb();
	// 		temp.ppb();
	// 		num= stoi(temp);
	// 		i++;
	// 	}
	// 	arr.push_back(num);
	// }

	// arr.push_back(s[i]-'0');
	// arr.push_back(s[i+1]-'0');
	for(auto it : arr){
		ans+= 'a'+ it - 1;
	}
	cout << arr << endl;
	cout << ans << endl;

}

int32_t main(){

	file_IO();
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r" , stdin);
		freopen("output.txt", "w" , stdout);
	#endif
	int test_case= 1;
	cin >> test_case;
	while(test_case--){
		solve();
	}
}
