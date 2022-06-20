// BINARY SEARCH an array, start and end indices included, for the smallest number that is greater than or equal to num.
// returns the iterator (index) of the element if it exists, -1 if not
int containsMinMoreOrEqual(int *array, int start, int end, int num) {
    if (start == end) {
        if (array[start] >= num) return start;
        else return -1;
    }
    int mid = start + (end - start) / 2;
    if (mid < num) return containsMinMoreOrEqual(array, mid + 1, end, num);
    return containsMinMoreOrEqual(array, start, mid, num);
}
