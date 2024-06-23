int largest(int arr[], int n) {
    
    int Big = arr[0];
    
    for(int i = 0; i < n; i++)
    {
        if(Big < arr[i])
        {
            Big = arr[i];
        }
    }
    return Big;
}