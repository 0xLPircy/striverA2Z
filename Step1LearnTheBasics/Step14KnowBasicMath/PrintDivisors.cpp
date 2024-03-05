int sumOfAllDivisors(int n){
	// Write your code here.
	int sum = 0;

	for (int i=n; i>0; i--){
		for(int j=i; j>0; j--){
				// cout<<"\ni:"<<i<<" j:"<<j;
                  if (i % j == 0) {
					// printf("\nBefore:%d", sum);
                    sum += j;
					// printf(" Adding:%d, Now:%d", j, sum);
                  }
                }
        }
	// for(int i=n; i>0; i--){
	// 	if(n%i==0){
	// 		sum += i;
	// 	}
	// }
	return sum;	
}