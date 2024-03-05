bool checkArmstrong(int n){
	//Write your code here
	int x = n, ans=0, size;
	int count=0;
	while(x>0){
		count++;
		x = x/10;
	}
	x=n;
	// printf("%d", count);
	while(x>0){
		// cout<<"1:";
		int cur = x%10;
		int add = 1;
		// cout<<"cur"<<cur<<" ";
		for(int i=0; i<count; i++){
			// cout<<"\ni"<<i<<" ";
			add = add * cur;
			// cout<<"add"<<add;
		}
		// cout<<"\nadd"<<add<<" ";
		ans +=add;
		// cout<<"ans"<<ans<<" ";
		x= (x-x%10)/10;
		// cout<<"x"<<x<<" ";
	}
	if(ans==n){
		return true;
	}
	return false;
}