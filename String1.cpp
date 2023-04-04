int main()
{
    string s ="This is a test string";
    int len = s.size();
    int max_len = 0, min_len = len, si=0,ei=0;
    int max_start_index = 0 , min_start_index = 0;
    // Now we will find the starting position and length for the smallest and largest string.
    while(ei<=len)
    {
        if(ei<len && s[ei]!=' ')
        {
           ei++; // we are counting the length of each word;
            
        }
        else
        {
            //now when its the end of word comes
            
           
           
            
            int curr_len = ei-si;// we will count the length of that word
            
            if(curr_len>max_len) // and save in min and max for further comparison 
            {
            max_len = curr_len;
            max_start_index = si; // Now we will save its sarting position so we can print it later position
            
            }
            
             if(curr_len<min_len) // and save in min and max for further comparison 
            {
            min_len = curr_len;
            min_start_index = si; // Now we will save its sarting position so we can print it later position
            
            }
            
            ei++;//for starting to the  value  next to space
            si=ei;//saving it for remaining words
           
           
            
        }
       
        
    }
     //Saving the substring or the words with the given starting index and lengths
     string minWord = s.substr(min_start_index,min_len);
     string maxWord = s.substr(max_start_index,max_len);
     
     cout<<"min:"<<minWord<<"\n";
     cout<<"max:"<<maxWord;
    
    

    return 0;
}
