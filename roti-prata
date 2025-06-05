class Solution {
public:
    bool isPossible(int p, int cook[], int n, int mid) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int c = 0;
            int time = mid;
            int perpratas = cook[i]; // time taken to cook each pratas by ith cook
            while (time > 0) {
                time -= perpratas;
                if (time >= 0) {
                    c += 1;
                    perpratas += cook[i];
                }
            }
            cnt += c;
            if (cnt >= p)
                return true;
        }
        return false;
    }

    int minTimeToCookPratas(int p, int cook[], int n) {
        int s = 0, e = 10000007;
        int mid, ans = -1;

        while (s <= e) {
            mid = (s + e) / 2;
            if (isPossible(p, cook, n, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};
