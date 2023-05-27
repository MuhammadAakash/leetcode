declare global {
    interface Array<T> {
        last(): T | -1;
    }
}
Object.defineProperty(Array.prototype, 'last', {
    get: function() {
        return () => this.length ? this[this.length - 1] : -1;
    },
} as PropertyDescriptor);