class Reverse
{
    // Complete the function
    // str: input string
    // static void reverse(char arr[], int s, int e){
        
    //     if(s>=e) return ;
        
    //     char temp= arr[s];
    //     arr[s]=arr[e];
    //     arr[e]= temp;
        
    //     reverse(arr,s++,e--);
        
    // }
    
    
    
    public static String reverseWord(String str)
    {
      
        char[] arr = str.toCharArray();
        // check if arr is empty
        if(arr.length==0) return str;
         //reverse(arr,0,arr.length);
        
        char temp;
        int start = 0;
        int end = arr.length-1;
        
        
        while(start<end){
            
            temp= arr[start];
            arr[start] = arr[end];
            arr[end]= temp;
            start++;
            end--;
        }
        String str2 = String.valueOf(arr);
        
        return str2;
        
        
        
        
        
    }
}
