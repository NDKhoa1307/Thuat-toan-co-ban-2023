#include<iostream>
#include<string.h>

using namespace std;

inline bool is_palindrome(string s){
    for(int i = 0; i < (s.length() / 2) - (s.length() & 1); ++i){
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}


inline void solve(string s, int ti){
    if(is_palindrome(s)){
	    cout<<"YES\n";
	}
	else{
	    cout<<"NO\n";
	}
}

int main(){
    string s;
    int T;
    long long n;
    
    cin >> T;
    cin.ignore();
    while (T) 
    {
        getline(cin, s);
        cin >> n;
        cin.ignore();
        solve(s, n);
        --T;
    }
	return 0;
}
