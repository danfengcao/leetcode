int numTrees(int n) {
  if (n <= 0)
    return 0;
  if (n == 1) 
    return 1;

  int oneSide = 0;
  oneSide = 2 * numTrees(n - 1);
  int twoSide = 0;
  if (n == 3)
    twoSide = 1;
  if (n > 3)
    twoSide = 4 * numTrees(n - 3);

  return oneSide + twoSide;
}
