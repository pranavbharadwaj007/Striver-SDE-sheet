class MedianFinder {
public:
priority_queue<int>max_h;
priority_queue<int,vector<int>,greater<int>>min_h;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int ls=max_h.size();
        int rs=min_h.size();
        if(ls==0){
            max_h.push(num);
        }else if(ls==rs){
            if(num<min_h.top()){
                max_h.push(num);
            }else{
                int tem=min_h.top();
                min_h.pop();
                min_h.push(num);
                max_h.push(tem);
            }
        }else{
            if(rs==0){
                if(num>max_h.top()){
                    min_h.push(num);
                }else{
                    int tem=max_h.top();
                    min_h.push(tem);
                    max_h.pop();
                    max_h.push(num);
                }
            }
            else if(num>=min_h.top()){
                min_h.push(num);
            }else{
                if(num<max_h.top()){
                    int tem=max_h.top();
                    min_h.push(tem);
                    max_h.pop();
                    max_h.push(num);
                }else{
                    min_h.push(num);
                }
            }
        }
    }
    
    double findMedian() {
        if(max_h.size()>min_h.size())return max_h.top();
        return (max_h.top()+min_h.top())/2.0;
    }
};
