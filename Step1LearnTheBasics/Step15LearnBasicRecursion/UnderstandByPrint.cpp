void rec(vector<int> &v, int x){
    if(x==0){
        return; //IMPORTANT, INFINITES WITHOUT IT
    }
    rec(v, x-1);
    v.push_back(x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> v;
    rec(v, x);
    return v;
}
