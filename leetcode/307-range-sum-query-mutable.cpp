struct Node {
    int l = 0;
    int r = 0;
    int v = 0;
    int add = 0;
};


class NumArray {
    vector<int> nums;
    array<Node, 50000> tree;
    
    void tree_build(int l, int r, int i) {
        tree[i].l = l;
        tree[i].r = r;
        if (l == r) {
            tree[i].v = nums[r];
            return;
        }
        int mid = (l + r) / 2;
        tree_build(l, mid, i*2);
        tree_build(mid+1, r, i*2+1);
        tree[i].v = tree[i*2].v + tree[i*2+1].v;
    }
    
    int query(int l, int r, int i) {
        if (tree[i].l == l && tree[i].r == r) {
            return tree[i].v + tree[i].add;
        }
        
        int mid = (tree[i].l + tree[i].r) / 2;

        if (r <= mid) {
            return query(l, r, i*2);
        }
        if (l > mid) {
            return query(l, r, i*2+1);
        }
        return query(l, mid, i*2) + query(mid+1, r, i*2+1);
        
    }
    
    void update_tree(int i, int index, int add) {
        int l = tree[i].l, r = tree[i].r;
        if (l == index && r == index) {
            tree[i].v += add;
        }
        else if (l <= index && index <= r) {
            tree[i].v += add;
            int mid = (l + r) / 2;
            if (index <= mid) {
                update_tree(i*2, index, add);
            }
            else {
                update_tree(i*2+1, index, add);
            }
        }
    }

public:
    NumArray(vector<int> nums) : nums(nums) {
        if (nums.empty()) return;
        tree_build(0, nums.size()-1, 1);
    }
    
    void update(int i, int val) {
        int add = val - nums[i];
        update_tree(1, i, add);
        nums[i] = val;

    }
    
    int sumRange(int i, int j) {
        return query(i, j, 1);
    }
};