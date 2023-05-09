function filter(arr: number[], fn: (n: number, i: number) => any): number[] {
    let size = 0;
    for (let i = 0; i < arr.length; ++i) {
        if (fn(arr[i], i)) {
            arr[size] = arr[i];
            size++;
        }
    }
    // Ensure array is of length size
    while (arr.length > size) {
        arr.pop();
    }
    return arr
};