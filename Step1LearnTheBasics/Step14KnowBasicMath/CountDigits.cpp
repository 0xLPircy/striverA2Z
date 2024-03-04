int countDigits(int n){
	// Write your code here.
	int count=0, x=n;
	while (x>0){
		int cur = x%10;
		x = (x - x%10)/10;
		if(cur==0){
			continue;
		}
		if(n%cur==0){
			count++;
		}
	}
	return count;
}