// Given freq of elements in range 0-255, return statistics
// https://leetcode.com/problems/statistics-from-a-large-sample/description/
// Aman Kumar

// Runtime 0ms Beats 100.00% 
// Memory 11.60MB Beats33.93%
double getMedian(int total, vector<int> &count)
{
    if(total % 2 == 1)
        return getMedianOdd(count, total/2 + 1);
    return getMedianEven(count, total/2);
}

double getMedianOdd(vector<int> &count, int target)
{
    int counter = 0 ;
    int median = -1;

    for(int i = 0 ; i < count.size() ; i++)
    {
        counter += count[i];

        // If counter crosses target index
        if(counter >= target)
        {
            median = i;
            break;
        }
    }

    return median;
}

double getMedianEven(vector<int> &count, int target)
{
    double left = 0, right = 0;
    int counter = 0;

    for(int i = 0 ; i < count.size() ; i++)
    {
        counter += count[i];

        // If counter crosses both left and right index
        if(counter >= target + 1)
        {
            left = i;
            right = i;
            break;
        }

        // If left index val and right val are different
        else if(counter == target)
        {
            left = i;
            for(int k = i +1 ; k < count.size() ; k++)
            {
                if(count[k] != 0)
                {
                    right = k;
                    break;
                }
            }
            break;
        }
    }
    return (left+right)/2;
}

vector<double> sampleStats(vector<int>& count) 
{
    int n = count.size();
    double minVal = INT_MAX;
    double maxVal = INT_MIN;
    double mean = 0;
    double mode = 0;
    int modeFreq = 0;

    int total = 0;
    double sum = 0.0;

    for(int i = 0 ; i < n ; i++)
    {
        if(count[i] > 0)
        {
            if(i < minVal) minVal = i;
            if(i > maxVal) maxVal = i;

            total += count[i];
            sum += (1.0 * i * count[i]);

            if(count[i] > modeFreq)
            {
                modeFreq = count[i];
                mode = i;
            }
        }

    }

    mean = sum / total;

    return {minVal, maxVal, mean, getMedian(total, count), mode};    
}
