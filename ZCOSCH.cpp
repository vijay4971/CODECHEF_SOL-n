#include <iostream>
using namespace std;

int main() {
	int R,SCH;
	
	cin>>R;
	
	SCH = (R>100)?0:((50 < R & 100>= R)?50:100);
	
	cout<<SCH<<endl;
	
	return 0;
}
