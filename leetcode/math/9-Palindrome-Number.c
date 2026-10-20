bool isPalindrome(int x) {
    int c=0,w=x;
    long long rev=0;
    while(x>0){
        c=x%10;
        rev=(rev*10)+c;
        x=x/10;
    }
    if(rev==w){
        return true;
    }
    else{
        return false;
    }
    
}