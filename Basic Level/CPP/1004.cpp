#include<iostream>

using namespace std;

int main() {
	int n, score, max = 0, min = 100;
	string name, id,max_name, max_id, min_name, min_id;
	cin>>n;
	for(int i = 0;i <n; i++) {
		cin>>name>>id>>score;
		if (score >max) {
			max = score;
			max_name = name;
			max_id = id;
		}
		if (score < min) {
			min = score;
			min_name = name;
			min_id = id;
		}
	}
	cout<<max_name<<" "<<max_id<<endl;
	cout<<min_name<<" "<<min_id;
	return 0;
} 
