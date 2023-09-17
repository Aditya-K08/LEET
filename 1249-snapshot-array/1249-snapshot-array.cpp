class SnapshotArray {
public:
    int cnt = 0;
    vector<unordered_map<int, int>> ans;

    SnapshotArray(int length) {
        this->ans.resize(length);
    }

    void set(int index, int val) {
        ans[index][cnt] = val;
    }

    int snap() {
        cnt++;
        return cnt - 1;
    }

    int get(int index, int snap_id) {
        while (snap_id >= 0) {
            if (ans[index].count(snap_id)) {
                return ans[index][snap_id];
            }
            snap_id--;
        }
        return 0;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */