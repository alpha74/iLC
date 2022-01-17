// Add digits of number till number of digits remaining is 1
// https://leetcode.com/problems/add-digits/submissions/
// Aman Kumar

int addDigitsNum(int n)
{
    int sum = 0 ;

    while( n > 0 )
    {
        sum = sum + (n%10) ;
        n /= 10 ;
    }
    cout << "\n " << sum ;
    return sum ;
}

int addDigits(int num) 
{
    while( num / 10 > 0 )
    {
        num = addDigitsNum(num) ;
    }
    return num ;
}
