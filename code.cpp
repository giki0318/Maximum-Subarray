int maxSubArray(int A[], int n) {
        if(n == 0)
            return NULL;
        if(n == 1)
            return A[0];
        int sum = A[0];
        int max = A[0];
        int i = 1;
        while(i<n){
            if(sum<0){
                sum = A[i];
            }else{
                sum += A[i];
            }
            i++;
            if(sum>max){
                max = sum;
            }
        }
        return max;
    }
