type Callback = (...args: any[]) => any;
type Subscription = {
    unsubscribe: () => void
}

class EventEmitter {
    private events: { [event: string]: Set<Callback> };
    
    constructor() {
        this.events = {};
    }
  subscribe(eventName: string, callback: Callback): Subscription {
      if(!(eventName in this.events)) {
          this.events[eventName] = new Set();
      }
      this.events[eventName].add(callback);

    return {
      unsubscribe: () => {
            this.events[eventName].delete(callback);
      }
    };
  }

  emit(eventName: string, args: any[] = []): any {
      if(!(eventName in this.events)) {
          return [];
      }
      
      const result: any[] = [];
      this.events[eventName].forEach((fn) => {
          result.push(fn(...args));
      })

      return result;
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */