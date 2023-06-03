type MultidimensionalArray = (MultidimensionalArray | number)[];

function* inorderTraversal(arr: MultidimensionalArray): Generator<number, void, unknown> {
  yield* (arr.flat(Infinity) as unknown as Generator<number, void, unknown>);
}