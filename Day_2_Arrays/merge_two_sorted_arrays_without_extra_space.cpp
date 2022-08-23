
// https://takeuforward.org/data-structure/merge-two-sorted-arrays-without-extra-space/

// For leetcode this is the best approach as they will give m = nums1.size()+n all remaining nums1 will be 0
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1=m-1;
        int p2=n-1;
        int p3=m+n-1;
        while(p1>=0 && p2>=0){
            if(nums1[p1]>nums2[p2]){
                nums1[p3--]=nums1[p1--];
            }
            else{
                nums1[p3--]=nums2[p2--];
            }
        }
        while(p1>=0){
            nums1[p3--]=nums1[p1--];
        }
         while(p2>=0){
            nums1[p3--]=nums2[p2--];
        }
       
    }

// In general if they give nums1 seperate only nums1.size() and nums2 only nums2.size() with no extra space in nums1 then do this.

void merge(int ar1[], int ar2[], int n, int m) {
  // code here 
  int gap = ceil((float)(n + m) / 2);
  while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && ar1[i] > ar1[j]) {
        swap(ar1[i], ar1[j]);
      } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
        swap(ar1[i], ar2[j - n]);
      } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
        swap(ar2[i - n], ar2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
  }
}

Time complexity: O(n+m)
Space Complexity: O(1)

// Gap method

Approach:

* Initially take the gap as (m+n)/2;
* Take as a pointer1 = 0 and pointer2 = gap.
* Run a oop from pointer1 &  pointer2 to  m+n and whenever arr[pointer2]<arr[pointer1], just swap those.
* After completion of the loop reduce the gap as gap=gap/2.
* Repeat the process until gap>0.
