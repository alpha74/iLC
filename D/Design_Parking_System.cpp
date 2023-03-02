// Design Parking System
// https://leetcode.com/problems/design-parking-system/
// Aman Kumar

class ParkingSystem {
  public:

      int maxBig ;
      int maxMedium ;
      int maxSmall ;
      int currBig ;
      int currMedium ;
      int currSmall ;

      ParkingSystem(int big, int medium, int small) 
      {
          maxBig = big ;
          maxSmall = small ;
          maxMedium = medium ;

          currBig = 0 ;
          currSmall = 0 ;
          currMedium = 0 ;
      }

      bool addCar(int carType) 
      {
          if( carType == 1 )
          {
              if( currBig < maxBig )
              {
                  currBig++ ;
                  return true ;
              }
              else
                  return false ;
          }

          if( carType == 2 )
          {
              if( currMedium < maxMedium )
              {
                  currMedium++ ;
                  return true ;
              }
              else
                  return false ;
          }

          if( carType == 3 )
          {
              if( currSmall < maxSmall )
              {
                  currSmall++ ;
                  return true ;
              }
              else
                  return false ;
          }
          return false ;
      }
};
