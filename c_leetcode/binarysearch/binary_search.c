int search(int* nums, int numsSize, int target) {
  int left=0;
  int right=numsSize;
  int mid;
  while(left<right){
      mid=(right+left)/2;
      if(nums[mid]==target){return mid;}
      else if(nums[mid]<target){left=mid+1;}
      else if(nums[mid]>target){right=mid;}
  }
  return -1;
}

// int main(int argc, char const *argv[])
// {
//   int nums[] = {-1,0,3,5,9,12};

//   int target = 9;

//   int *data = search(nums, target);

//   return 0;
// }