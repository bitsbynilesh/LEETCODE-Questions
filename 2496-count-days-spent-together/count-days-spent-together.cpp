class Solution {
public:
int findDayofYear(string date, vector<int>&cumMonthDays){
    int month = stoi(date.substr(0,2));
    int days = stoi(date.substr(3));
    return cumMonthDays[month-1] + days;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
       vector<int>monthDays = {31,28,31,30,31,30,31,31,30,31,30,31};
       vector<int>cumMonthDays(13,0);
       cumMonthDays[1] = 31 ; //january

       for(int i = 2; i<= 12; i++){
        cumMonthDays[i] = cumMonthDays[i-1] + monthDays[i-1];
       } 
       int arriveAliceDays = findDayofYear(arriveAlice , cumMonthDays);
       int leaveAliceDays = findDayofYear(leaveAlice , cumMonthDays);
       int arriveBobDays = findDayofYear(arriveBob , cumMonthDays);
       int leaveBobDays = findDayofYear(leaveBob , cumMonthDays);

       int overLapDays = min(leaveAliceDays , leaveBobDays) - max(arriveAliceDays , arriveBobDays)   + 1  ;

       if(overLapDays < 0) return 0;
       else return overLapDays;

    }
};