vector<int> multiplyByTen(const vector<int>& arr) {
    // create a copy of arr:
    vector<int> arrCopy = arr;

    int size = arrCopy.size();

    for(int i = 0 ; i< size; i++){
        arrCopy[i] = arrCopy[i]*10;
    }

    return arrCopy;
}
