void rec (vector<string>& v, int n){
	if(n==0){
		return;
	}
	rec(v, n-1);
	v.push_back("Coding Ninjas");
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> cn;
	rec(cn, n);
	return cn;
}