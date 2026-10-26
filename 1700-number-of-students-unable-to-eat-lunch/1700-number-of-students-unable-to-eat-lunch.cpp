class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> q;
        int n=students.size();
    //pehle hum apne students wale array ko queue me insert krenge  aur baad me har ek queue ke front se sandwiches wale elements se compare krenge agar  equal hua toh queue se wo element pop kr denge aur agar equal nhi hua toh front ka pop krke peeche push kr denge 
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i=0; //traverse the sandwiches array
        int count=0;
        //iska ye reason h ki baar baar pushing and popping wale infinte loop se bach jaaywenge
        while(q.size()>0 && count!=q.size()){
            if(q.front()==sandwiches[i]){
                count = 0; //VVIMP 
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++; //vvmip
            }
        }
        return q.size();
    }
};