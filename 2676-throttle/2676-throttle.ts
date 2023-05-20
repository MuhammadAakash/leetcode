type F = (...args: any[]) => void

function throttle(fn: F, t: number): F {
    let timeoutInProgress = null;
    let argsToProgress = null;
    
    const timoutFunction = () => {
        if(argsToProgress === null) {
            timeoutInProgress = null;
        }
        else {
            fn(...argsToProgress);
            argsToProgress = null;
            timeoutInProgress = setTimeout(timoutFunction, t);
        }
    };
    
  return function(...args) {
      if(timeoutInProgress) {
          argsToProgress = args;
      }
       else  {
           fn(...args);
           timeoutInProgress = setTimeout(timoutFunction, t);
       }
      
  }
};

/**
 * const throttled = throttle(console.log, 100);
 * throttled("log"); // logged immediately.
 * throttled("log"); // logged at t=100ms.
 */