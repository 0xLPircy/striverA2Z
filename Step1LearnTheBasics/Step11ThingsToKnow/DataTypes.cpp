int dataTypes(string type) {
	// Write your code here
	int res;
	if (type == "Integer" || type == "Float"){
		res=4;
	} else if (type == "Long" || type =="Double"){
		res=8;
	} else if (type == "Character"){
		res=1;
	} else{
		res = -1;
	}
	// printf("%d", res);
	return res;
}
