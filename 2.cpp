#include <iostream>
using namespace std;

int main() {
	int t,i;
	cin>>t;
	while(t--){
	 int d,l,r;
	 cin>>d>>l>>r;
	 if(d<l<r)
	     cout<<"take second dose now"<<endl;
	 else if(d<l<r)
	     cout<<"too early"<<endl;
	 else
	     cout<<"too late"<<endl;
	}
	return 0;
}
