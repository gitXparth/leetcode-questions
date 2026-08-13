class FreqStack {
public:

    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> group;

    int maxFreq = 0;

    FreqStack() {
    }

    void push(int val) {

        // Increase frequency
        freq[val]++;

        // Update maximum frequency
        maxFreq = max(maxFreq, freq[val]);

        // Put value into the stack of its frequency
        group[freq[val]].push(val);
    }

    int pop() {

        // Get most recent element
        // having maximum frequency
        int val = group[maxFreq].top();

        group[maxFreq].pop();

        // Decrease its frequency
        freq[val]--;

        // If this frequency group is empty,
        // reduce max frequency
        if (group[maxFreq].empty()) {
            maxFreq--;
        }

        return val;
    }
};