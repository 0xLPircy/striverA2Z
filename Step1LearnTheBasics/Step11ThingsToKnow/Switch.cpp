double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double area = 0;
	switch (ch){
		case 1: area=a[0]*a[0]*M_PI;
				break;
		case 2: area=a[0]*a[1];
				break;
	}
	return area;
}
