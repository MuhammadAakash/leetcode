Array.prototype.snail = function(rowsCount, colsCount) {
    if(rowsCount * colsCount !== this.length) return []
    const arr = this

    const res  = new Array(rowsCount).fill(0).map(() => new Array(colsCount).fill(0))
    let isReversed = false

    for(let i = 0; i < this.length; i++) {
        const row = !isReversed ? i % rowsCount :  rowsCount - 1 - (i % rowsCount)
        const col = Math.floor(i / rowsCount)

        res[row][col] = arr[i]
        
        if((i % rowsCount) === rowsCount - 1) {
            isReversed = !isReversed
        }
    }

    return res
}