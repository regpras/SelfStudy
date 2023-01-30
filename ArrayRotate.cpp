///////////////////// Solution 1 ///////////////////////////
/*
Time complexity:O(n)
Space complexity:O(1)
*/
class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int a =k%v.size();
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+a);
        reverse(v.begin()+a,v.end());
    }
};

///////////////////// Solution 2 ///////////////////////////
vector<int> solution(vector<int> &A, int K) 
{
    // Implement your solution here
    int n=A.size(); 
    
    vector<int> v(n);
    
    K = K % n;
	
    for(int i=0;i<n;i++)
    {
        int index = (i+n-K)%n; 
        v[i] = A[index];
    }

    return v;
}
