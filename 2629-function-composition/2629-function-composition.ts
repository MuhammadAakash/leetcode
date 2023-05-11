type F = (x: number) => number;

function compose(functions: F[]): F {
	return function(x) {
        if(functions.length == 0) return x;
        
        let input = x;
        
        for (const func of functions.reverse()) {
            input = func(input);
        }
        
        return input;
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */