// Define methods for Underground Train system
// https://leetcode.com/problems/design-underground-system/description/
// Aman Kumar

// Runtime 143 ms Beats 93.24%
// Memory 59.2 MB Beats 44.32%
class UndergroundSystem {
public:
    unordered_map<string,pair<int,int>> hash ;   // startStation_endStation -> (totalTime, numTrips)    

    unordered_map<int,pair<int,string>> personStartTime ; // id -> (startTime, station)

    UndergroundSystem() {
        ;
    }
    
    void checkIn(int id, string stationName, int t) 
    {
        personStartTime[id] = {t, stationName } ;
    }
    
    void checkOut(int id, string stationName, int t) 
    {
        // If there is no entry for startTime
        if(personStartTime.find(id) == personStartTime.end() || personStartTime[id].first == -1)    
            return ;
        
        string stationKey = personStartTime[id].second + "_" + stationName ;

        int totalTime = 0 ;
        int numTrips = 0 ;

        // If stationPairs already exist
        if(hash.find(stationKey) != hash.end())
        {
            totalTime = hash[ stationKey ].first ;
            numTrips = hash[ stationKey ].second ;
        }

        totalTime += (t - personStartTime[id].first) ;
        numTrips++ ;

        // Store new totalTime and numTrips for start-end stations
        hash[ stationKey ] = { totalTime, numTrips } ;

        // Reset the person checkIn data
        personStartTime[id] = { -1, "" } ;
    }
    
    double getAverageTime(string startStation, string endStation) 
    {
        string stationKey = startStation + "_" + endStation ;

        if(hash.find(stationKey) == hash.end())    
            return 0 ;
    
        return (1.0 * hash[ stationKey ].first / hash[ stationKey ].second ) ;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
