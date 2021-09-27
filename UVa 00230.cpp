#include<bits/stdc++.h>

using namespace std;
//using namespace std::chrono;

//auto start = high_resolution_clock::now();

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define re(i,x,n) for(int i=x; i<n; i++)
#define ff first
#define ss second
#define mkp make_pair

// void FileIO() {
//     freopen("input.txt", " r ", stdin);
//     freopen("output.txt" , " w ", stdout);
// }
void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    }


int main(){
	speed();
	string s = "";
	vector<pair<string,string>> shelf;

	while(getline(cin,s) && s!="END"){
		
		string temp1="",temp2="";
		int close;
		for(int i=1; s[i]!='"'; i++){
			temp1.push_back(s[i]);
			close = i;
		}
		temp2.assign(s,close+6,s.size()-1);
		shelf.push_back(mkp(temp2,temp1));
	}
	sort(shelf.begin(),shelf.end());
	// for(auto x : shelf){
	// 	cout << x.ff << " | " << x.ss << "\n";
	// }
	
	map<string,pair<string,int>> shelf_map;
	for(int i=0; i < shelf.size();i++){
		shelf_map[shelf[i].ss] = mkp(shelf[i].ff,0); 
	}
	// sort(shelf_map.begin(),shelf_map.end());
	while(getline(cin,s) && s!="END"){
		string temp1="",temp2="";
		int close;
		if(s[0] == 'B'){
			for(int i=8;s[i]!='"';i++){
				temp1.push_back(s[i]);
			}
			shelf_map[temp1].ss = -1;
		}
		if(s[0] == 'R'){
			for(int i=8;s[i]!='"';i++){
				temp1.push_back(s[i]);
			}
			shelf_map[temp1].ss = 1;
		}
		if(s[0] == 'S'){
	
			map<string,pair<string,int>> shelf_map2;
			for(auto itr=shelf_map.begin(); itr != shelf_map.end(); itr++){
				shelf_map2[itr->second.ff] = mkp(itr->first,itr->second.ss); 
			}
			// throw output
			for(auto it = shelf_map2.begin(); it != shelf_map2.end(); it++){
				if(it->second.ss == 1 && (it == shelf_map2.begin())){
						// Put title first
						cout << "Put \"" << it->second.ff << "\" first\n";
						shelf_map[it->second.ff].ss = 0;
				}
				else if(it->second.ss == 1){
					auto prev = it; prev--;
					cout << "Put \"" << it->second.ff << "\" after \"" << prev->second.ff << "\"\n";
					shelf_map[it->second.ff].ss = 0;

				}
			}
			cout << "END\n";
		}
	}
 }
