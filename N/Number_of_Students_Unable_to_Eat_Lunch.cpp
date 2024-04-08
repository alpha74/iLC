// Given sandwichs and their types, students in a queue and their preference, return number of students who can't have lunch
// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch
// Aman Kumar

// Runtime 0ms Beats100.00%of users with C++
// Memory 10.76MB Beats79.46%of users with C++
int countStudents(vector<int>& students, vector<int>& sandwiches) 
{
    vector<int> counts(2,0);

    for(int i = 0 ; i < students.size() ; i++)
        counts[ students[i] ]++ ;
       
    int rem = sandwiches.size();

    for(int i = 0 ; i < sandwiches.size() ; i++)
    {
        // No sandwich left
        if(counts[sandwiches[i]] == 0)
            break;

        // Return if all sandwiches are used
        if(rem == 0)
            break;

        rem-- ;
        counts[ sandwiches[i] ]--;
    }
    return rem;
}
