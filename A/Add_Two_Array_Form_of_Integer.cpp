// Add to array form of interger
// https://leetcode.com/problems/add-to-array-form-of-integer
// Aman Kumar

vector<int> addToArrayForm(vector<int>& num, int k) 
{
    reverse(num.begin(), num.end() );
    vector<int> kn ;

    while( k > 0 )
    {
        kn.push_back( k % 10 ) ;
        k = k / 10 ;
    }

    int i = 0, j = 0 ;
    int carry = 0 ;

    // Add both numbers
    for( ; i < num.size() && j < kn.size() ; i++, j++ )
    {
        int sum = num[i] + kn[j] + carry ;

        num[i] = sum % 10 ;
        carry = sum / 10 ;
    }

    // Check for num with larger digits
    for( ; i < num.size() ; i++ )
    {
        int sum = num[i] + carry ;

        num[i] = sum % 10 ;
        carry = sum / 10 ;
    }

    for( ; j < kn.size() ; j++ )
    {
        int sum = kn[j] + carry ;

        num.push_back( sum % 10 ) ;
        carry = sum / 10 ;
    }

    // Check if carry remains
    if( carry != 0 )
        num.push_back( 1 ) ;

    // Reverse the original number
    reverse( num.begin(), num.end() ) ;

    return num ;
}
