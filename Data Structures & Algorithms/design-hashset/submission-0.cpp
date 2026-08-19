class MyHashSet {

private:
    vector<int> data;
    int searching(int val){
        int n = data.size();

        int low = 0;
        int high = n-1;
        while(low<=high){

            int mid = low + (high-low)/2;

            if(data[mid] == val){
                return mid;
            }

            if(data[mid]<val){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return -1;
    }
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(searching(key) != -1){
            return;
        }

        int low = 0;
        int high = data.size();

        while(low < high){

            int mid = low + (high-low)/2;

            if(data[mid] < key){
                low = mid + 1;
            }else{
                high = mid;
            }
        }

        data.insert(data.begin()+low, key);
    }
    
    void remove(int key) {

        int ind = searching(key);

        if(ind != -1){
            data.erase(data.begin()+ind);
        }
    }
    
    bool contains(int key) {
        return searching(key) != -1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */