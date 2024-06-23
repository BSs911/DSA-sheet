class Solution{
public:	
	// Function returns the second
	// largest elements fo array
	int print2largest(int arr[], int n) {
	    int Large = arr[0];
	    int TwoLarge = -1;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(arr[i] > Large)
	        {
	            TwoLarge = Large;
	            Large = arr[i];
	        }
	        else if(arr[i] < Large && arr[i] > TwoLarge)
	        {
	            TwoLarge = arr[i];
	        }
	    }
	    return TwoLarge;
	}
};