class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here 
        for(int i = 0; i < 3; i++) {
            if(a[i] > b[i]) {
                ca++;
            } else if(a[i] < b[i]) {
                cb++;
            }
        }
    }
};