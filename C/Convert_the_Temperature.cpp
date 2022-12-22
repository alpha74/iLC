// Convert given temperature from Celsius to Kelvin and Fahrenheit
// https://leetcode.com/problems/convert-the-temperature/description/
// Aman Kumar

// Runtime 0 ms Beats 100%
// Memory 5.9 MB Beats 99.31%
vector<double> convertTemperature(double celsius) 
{
    double kel = 1.0 * celsius + 273.15 ;
    double fah = 1.0 * celsius * 1.80 + 32.00 ;

    return { kel, fah } ;
}
