/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 
 int isPossible(int* arr,int n,int mid,int B)
 {
    int sum=0,previoussum = 0,i=0,count = 0;
    for(;i<n;i++)
    {
        sum+=arr[i];
        if(sum>=mid)
        {
            count++;
            i--;
            sum = 0;
        }
        if(count>=B)
            break;
    }
    if(count>=B)
        return 1;
    else
        return -1;
        
     
 }
 
int books(int* A, int n1, int B) {
    if(B>n1)
    return -1;
    long int i = 0,sum=0,left,right,mid;
    for(i=0;i<n1;i++)
        sum+=A[i];
    left = 0;right = sum;
    while(left<=right)
    {
        long int mid = (left+right)/2;
        long int res = isPossible(A,n1,mid,B);
        if(res==1)
            left = mid +1;
        else
            right = mid - 1;
    }
    return right;
    
}

