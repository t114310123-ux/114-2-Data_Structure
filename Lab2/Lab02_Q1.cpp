int findMax(const vector<int>& arr) {
    step++; //(變數初始化：max = arr[0])
    int max = arr[0]; 
    Step++; // (迴圈初始化：i = 1)
    for (int i = 1; i < arr.size(); i++) {
        step++; //(i < arr.size())每次迴圈的條件判斷
        step++; //(i++) 迴圈遞增

        if (arr[i] > max) { 
           step++; //(數值比較判斷)
            max = arr[i]; 
            Step++; //(賦予新值，設每次都執行)
        }
    }
    step++ //(回傳函式結果)
    return max; 
}//2 (initial(max and int i = 1)) + 3 * (n - 1) (loop)+1n(判斷)+ 1 ( return)=3+4(n-1)+n= 5n+1 
Therefore, O(n) complexity
