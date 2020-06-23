function swap(arr, i, index) {
  var placeholder = arr[i];
  arr[i] = arr[index];
  arr[index] = placeholder;
  return arr;
}
function arrDuplicator(arr1, arr2) {
  for (var i = 0; i < arr1.length; i++) {
    arr2[i] = arr1[1];
  }
}
function heapAlgorithm(array, index) {
  //base case
  if (index >= array.length - 1) {
    console.log(array);
  } else {
    for (var i = index; i < array.length; i++) {
      heapAlgorithm(swap(array, i, index), index + 1);
      swap(array, i, index);
    }
  }
}
function permutationGen(arr) {
  heapAlgorithm(arr, 0);
}
permutationGen([1, 2, 3, 4]);
