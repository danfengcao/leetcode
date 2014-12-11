class Solution {
public:
  int searchInsert(int A[], int n, int target) {
    if (A == NULL)
      return 0;
    return coreSearchInsert(A, 0, n-1, target);
  }
  int coreSearchInsert(int A[], int st, int en, int target) {
    if (st > en)
      return -1;
    int mid = st + (en - st) / 2;
    if (A[mid] == target)
      return mid;
    else if (A[mid] < target) {
      if (mid == en)
	return en + 1;
      else if (A[mid+1] > target)
	return mid + 1;
      else
	return coreSearchInsert(A, mid+1, en, target);
    }
    else if (A[mid] > target) {
      if (mid == st)
	return st;
      else if (A[mid-1] < target)
	return mid;
      else
	return coreSearchInsert(A, st, mid-1, target);
    }
  }
};
