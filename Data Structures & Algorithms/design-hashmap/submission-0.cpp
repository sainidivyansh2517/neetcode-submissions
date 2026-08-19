class MyHashMap {

    vector<pair<int, int>> data;
    int searching(int val){

        

        for(int i = 0; i<data.size(); i++){
            if(data[i].first == val){
                return i;
            }
        }

        return -1;
    }
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int ind = searching(key);

        if(ind != -1){
            data[ind].second = value;
            return;
        }

        data.push_back({key, value});
    }
    
    int get(int key) {
        int ind = searching(key);

        if(ind == -1) return -1;
        return data[ind].second;
    }
    
    void remove(int key) {
        int ind = searching(key);

        if(ind == -1) return;

        data.erase(data.begin()+ind);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */