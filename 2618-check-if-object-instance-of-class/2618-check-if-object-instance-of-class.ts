function* prototypeGenerator(obj: any): Generator<any, void, unknown> {
  let currPrototype = Object.getPrototypeOf(obj);
  while (currPrototype !== null) {
    yield currPrototype;
    currPrototype = Object.getPrototypeOf(currPrototype);
  }
}

function checkIfInstanceOf(obj: any, classFunction: any): boolean {
  if (obj === null || obj === undefined || typeof classFunction !== "function")
    return false;

  for (const prototype of prototypeGenerator(obj)) {
    if (prototype === (classFunction as Function).prototype) return true;
  }

  return false;
}