function curry(fn: Function): Function {
    return function curried(...args: any[]): any {
        if (args.length >= fn.length) {
            return fn.apply(this, args);
        }

        return curried.bind(this, ...args);
    };
}