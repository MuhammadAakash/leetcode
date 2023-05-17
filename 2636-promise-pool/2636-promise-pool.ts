type F = () => Promise<any>;

async function promisePool(functions: F[], n: number): Promise<any> {
    const evaluateNext = () => functions[n++]?.().then(evaluateNext);
    return Promise.all(functions.slice(0, n).map(f => f().then(evaluateNext)));
};